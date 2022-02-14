
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int flags; int cdev; int empty_wait; int * queued_read; int * queued_write; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(struct raw3215_info *VAR_8)
{
 FUNC_0(VAR_7, VAR_6);
 unsigned long VAR_9;

 if (!(VAR_8->flags & VAR_0) || (VAR_8->flags & VAR_2))
  return;

 FUNC_6(FUNC_2(VAR_8->cdev), VAR_9);
 if ((VAR_8->flags & VAR_3) ||
     VAR_8->queued_write != ((void*)0) ||
     VAR_8->queued_read != ((void*)0)) {
  VAR_8->flags |= VAR_1;
  FUNC_1(&VAR_8->empty_wait, &VAR_7);
  FUNC_5(VAR_4);
  FUNC_7(FUNC_2(VAR_8->cdev), VAR_9);
  FUNC_4();
  FUNC_6(FUNC_2(VAR_8->cdev), VAR_9);
  FUNC_3(&VAR_8->empty_wait, &VAR_7);
  FUNC_5(VAR_5);
  VAR_8->flags &= ~(VAR_0 | VAR_1);
 }
 FUNC_7(FUNC_2(VAR_8->cdev), VAR_9);
}
