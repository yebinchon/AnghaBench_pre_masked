
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {scalar_t__ lstate; int dev; scalar_t__ timer_ticks; } ;


 int FUNC_0 (struct cas*,int *) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*) ;
 int FUNC_4 (struct cas*) ;
 int FUNC_5 (struct cas*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct cas *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 if (VAR_2) {

  VAR_1->timer_ticks = 0;
  FUNC_0(VAR_1, ((void*)0));
 } else if (VAR_1->lstate == VAR_0) {
  FUNC_5(VAR_1);
  FUNC_6(VAR_1->dev);
 }
}
