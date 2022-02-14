
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tlock {scalar_t__ next; int flag; struct metapage* mp; int lock; } ;
struct TYPE_3__ {struct inode* ip; int ixpxd; } ;
struct tblock {int xflag; scalar_t__ next; int flag; TYPE_1__ u; int ino; int sb; } ;
struct pxd_lock {int index; int pxd; int flag; } ;
struct metapage {int xflag; scalar_t__ lid; int nohomeok; } ;
struct maplock {int index; int flag; } ;
struct inode {int i_ino; } ;
typedef scalar_t__ lid_t ;
struct TYPE_4__ {struct inode* ipimap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int ,int,struct tblock*) ;
 int FUNC_4 (struct metapage*) ;
 int FUNC_5 (struct metapage*) ;
 int FUNC_6 (struct inode*) ;
 struct tlock* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct metapage*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct inode*,struct maplock*,struct tblock*) ;
 int FUNC_10 (struct inode*,struct maplock*,struct tblock*,int) ;

__attribute__((used)) static void FUNC_11(struct tblock * VAR_11)
{
 struct inode *VAR_12;
 struct inode *VAR_13;
 lid_t VAR_14;
 struct tlock *VAR_15;
 struct maplock *VAR_16;
 struct pxd_lock VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 struct metapage *VAR_21 = ((void*)0);

 VAR_13 = FUNC_1(VAR_11->sb)->ipimap;

 VAR_18 = (VAR_11->xflag & VAR_3) ? VAR_3 : VAR_4;
 for (VAR_14 = VAR_11->next; VAR_14; VAR_14 = VAR_15->next) {
  VAR_15 = FUNC_7(VAR_14);

  if ((VAR_15->flag & VAR_10) == 0)
   continue;

  if (VAR_15->flag & VAR_9) {







   VAR_21 = VAR_15->mp;
   FUNC_0(VAR_21->xflag & VAR_2);
   FUNC_5(VAR_21);
  }






  VAR_16 = (struct maplock *) & VAR_15->lock;
  VAR_20 = VAR_16->index;

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++, VAR_16++) {





   if (VAR_16->flag & VAR_5) {
    FUNC_9(VAR_13, VAR_16, VAR_11);
   }
   else {

    if (VAR_15->flag & VAR_8)
     FUNC_10(VAR_13, VAR_16,
        VAR_11, VAR_4);
    else
     FUNC_10(VAR_13, VAR_16,
        VAR_11, VAR_18);
   }
  }
  if (VAR_15->flag & VAR_9) {
   if (!(VAR_11->flag & VAR_7)) {

    FUNC_0(VAR_21->lid == VAR_14);
    VAR_15->mp->lid = 0;
   }
   FUNC_2(VAR_21->nohomeok == 1);
   FUNC_8(VAR_21);
   FUNC_4(VAR_21);
   VAR_15->mp = ((void*)0);
  }
 }
 if (VAR_11->xflag & VAR_0) {
  FUNC_3(VAR_13, VAR_11->ino, 0, VAR_11);



  VAR_17.flag = VAR_6;
  VAR_17.pxd = VAR_11->u.ixpxd;
  VAR_17.index = 1;
  FUNC_9(VAR_13, (struct maplock *) & VAR_17, VAR_11);
 } else if (VAR_11->xflag & VAR_1) {
  VAR_12 = VAR_11->u.ip;
  FUNC_3(VAR_13, VAR_12->i_ino, 1, VAR_11);
  FUNC_6(VAR_12);
 }
}
