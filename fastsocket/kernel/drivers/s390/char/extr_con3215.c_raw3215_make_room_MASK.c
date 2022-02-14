
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {unsigned int count; int flags; int cdev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (struct raw3215_info*) ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct raw3215_info *VAR_3, unsigned int VAR_4)
{
 while (VAR_0 - VAR_3->count < VAR_4) {



  if (VAR_3->flags & VAR_2) {
   FUNC_1(VAR_3);
   continue;
  }

  VAR_3->flags |= VAR_1;
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
  VAR_3->flags &= ~VAR_1;




  if (VAR_0 - VAR_3->count >= VAR_4)
   break;

  FUNC_5(FUNC_0(VAR_3->cdev));
  FUNC_6(100);
  FUNC_4(FUNC_0(VAR_3->cdev));
 }
}
