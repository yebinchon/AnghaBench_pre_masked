
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* xad; } ;
typedef TYPE_1__ xtpage_t ;
struct TYPE_9__ {int flag; } ;
typedef TYPE_2__ xad_t ;
typedef int u64 ;
struct metapage {int dummy; } ;
struct inode {int i_sb; scalar_t__ i_size; } ;
struct btstack {int top; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_10__ {int bsize; int l2bsize; } ;


 TYPE_7__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ,int,struct metapage*,TYPE_1__*,int) ;
 int FUNC_2 (struct metapage*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct inode*,int,int*,int*,struct btstack*,int ) ;

int FUNC_9(struct inode *VAR_0, s64 VAR_1,
      s64 VAR_2, int *VAR_3, s64 * VAR_4, s32 * VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct btstack VAR_8;
 int VAR_9;
 s64 VAR_10;
 struct metapage *VAR_11;
 xtpage_t *VAR_12;
 int VAR_13;
 xad_t *VAR_14;
 s64 VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 s64 VAR_20;

 *VAR_4 = 0;
 *VAR_5 = VAR_2;

 if (!VAR_6) {

  VAR_16 = ((u64) VAR_0->i_size + (FUNC_0(VAR_0->i_sb)->bsize - 1)) >>
      FUNC_0(VAR_0->i_sb)->l2bsize;
  if (VAR_1 >= VAR_16)
   return 0;
 }





 if ((VAR_7 = FUNC_8(VAR_0, VAR_1, &VAR_15, &VAR_9, &VAR_8, 0))) {
  FUNC_4("xtLookup: xtSearch returned %d", VAR_7);
  return VAR_7;
 }
 FUNC_1(VAR_0, VAR_8.top, VAR_10, VAR_11, VAR_12, VAR_13);





 if (VAR_9) {
  if (VAR_15)
   *VAR_5 = FUNC_6(VAR_15 - VAR_1, VAR_2);
  goto out;
 }




 VAR_14 = &VAR_12->xad[VAR_13];
 VAR_17 = FUNC_7(VAR_14);
 VAR_19 = FUNC_5(VAR_14);
 VAR_18 = VAR_17 + VAR_19;
 VAR_20 = FUNC_3(VAR_14);


 *VAR_3 = VAR_14->flag;
 *VAR_4 = VAR_20 + (VAR_1 - VAR_17);

 *VAR_5 = FUNC_6(VAR_18 - VAR_1, VAR_2);

      out:
 FUNC_2(VAR_11);

 return VAR_7;
}
