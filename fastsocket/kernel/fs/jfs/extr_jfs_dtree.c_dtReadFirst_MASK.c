
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct metapage {int dummy; } ;
struct inode {int i_sb; } ;
struct btstack {struct btframe* top; } ;
struct btframe {struct metapage* mp; scalar_t__ index; scalar_t__ bn; } ;
typedef size_t s8 ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_6__ {int flag; } ;
struct TYPE_7__ {int * slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
struct TYPE_8__ {int l2bsize; } ;


 int FUNC_0 (struct btstack*) ;
 int VAR_0 ;
 int FUNC_1 (struct btstack*,scalar_t__,int ) ;
 int FUNC_2 (struct btstack*) ;
 scalar_t__ FUNC_3 (struct btstack*) ;
 int FUNC_4 (struct inode*,scalar_t__,struct metapage*,int,TYPE_2__*,int) ;
 size_t* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct metapage*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, struct btstack * VAR_3)
{
 int VAR_4 = 0;
 s64 VAR_5;
 int VAR_6 = 288;
 struct metapage *VAR_7;
 dtpage_t *VAR_8;
 s8 *VAR_9;
 struct btframe *VAR_10;
 pxd_t *VAR_11;

 FUNC_0(VAR_3);






 for (VAR_5 = 0;;) {
  FUNC_4(VAR_2, VAR_5, VAR_7, VAR_6, VAR_8, VAR_4);
  if (VAR_4)
   return VAR_4;




  if (VAR_8->header.flag & VAR_0) {

   VAR_10 = VAR_3->top;
   VAR_10->bn = VAR_5;
   VAR_10->index = 0;
   VAR_10->mp = VAR_7;

   return 0;
  }




  if (FUNC_3(VAR_3)) {
   FUNC_6(VAR_7);
   FUNC_9(VAR_2->i_sb, "dtReadFirst: btstack overrun");
   FUNC_2(VAR_3);
   return -VAR_1;
  }

  FUNC_1(VAR_3, VAR_5, 0);


  VAR_9 = FUNC_5(VAR_8);
  VAR_11 = (pxd_t *) & VAR_8->slot[VAR_9[0]];


  VAR_5 = FUNC_8(VAR_11);
  VAR_6 = FUNC_10(VAR_11) << FUNC_7(VAR_2->i_sb)->l2bsize;


  FUNC_6(VAR_7);
 }
}
