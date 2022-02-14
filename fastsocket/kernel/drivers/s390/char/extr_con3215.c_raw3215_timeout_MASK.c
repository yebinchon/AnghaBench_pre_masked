
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int flags; int cdev; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raw3215_info*) ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct raw3215_info *VAR_3 = (struct raw3215_info *) VAR_2;
 unsigned long VAR_4;

 FUNC_4(FUNC_1(VAR_3->cdev), VAR_4);
 if (VAR_3->flags & VAR_1) {
  FUNC_0(&VAR_3->timer);
  VAR_3->flags &= ~VAR_1;
  if (!(VAR_3->flags & VAR_0)) {
   FUNC_2(VAR_3);
   FUNC_3(VAR_3);
  }
 }
 FUNC_5(FUNC_1(VAR_3->cdev), VAR_4);
}
