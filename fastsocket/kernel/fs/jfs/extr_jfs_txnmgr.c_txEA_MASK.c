
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct pxd_lock {int index; int pxd; int flag; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int flag; } ;
typedef TYPE_1__ dxd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,struct inode*) ;
 int FUNC_5 (int ,struct inode*) ;
 int VAR_6 ;
 struct tlock* FUNC_6 (int ,struct inode*,int ) ;

void FUNC_7(tid_t VAR_7, struct inode *VAR_8, dxd_t * VAR_9, dxd_t * VAR_10)
{
 struct tlock *VAR_11 = ((void*)0);
 struct pxd_lock *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);




 if (VAR_10) {




  if (VAR_10->flag & VAR_2) {
   VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_6);
   VAR_12 = (struct pxd_lock *) & VAR_11->lock;
   VAR_13 = (struct pxd_lock *) VAR_12;
   VAR_13->flag = VAR_4;
   FUNC_0(&VAR_13->pxd, FUNC_2(VAR_10));
   FUNC_1(&VAR_13->pxd, FUNC_3(VAR_10));
   VAR_13++;
   VAR_12->index = 1;
  } else if (VAR_10->flag & VAR_3) {
   VAR_11 = ((void*)0);

   FUNC_4(VAR_0, VAR_8);
  }
 }




 if (!FUNC_5(VAR_1, VAR_8) && VAR_9->flag & VAR_2) {
  if (VAR_11 == ((void*)0)) {
   VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_6);
   VAR_12 = (struct pxd_lock *) & VAR_11->lock;
   VAR_13 = (struct pxd_lock *) VAR_12;
   VAR_12->index = 0;
  }
  VAR_13->flag = VAR_5;
  FUNC_0(&VAR_13->pxd, FUNC_2(VAR_9));
  FUNC_1(&VAR_13->pxd, FUNC_3(VAR_9));
  VAR_12->index++;
 }
}
