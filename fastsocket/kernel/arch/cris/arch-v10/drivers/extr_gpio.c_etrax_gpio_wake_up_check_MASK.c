
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {unsigned long* port; scalar_t__ minor; unsigned long highalarm; unsigned long lowalarm; struct gpio_private* next; int alarm_wq; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned long* VAR_1 ;
 scalar_t__ FUNC_1 (struct gpio_private*) ;
 struct gpio_private* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
 struct gpio_private *VAR_4;
 unsigned long VAR_5 = 0;
        int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_3(&VAR_3, VAR_7);
 VAR_4 = VAR_2;
 while (VAR_4) {
  if (FUNC_1(VAR_4))
   VAR_5 = *VAR_4->port;
  else if (VAR_4->minor == VAR_0)
   VAR_5 = *VAR_1;

  if ((VAR_5 & VAR_4->highalarm) ||
      (~VAR_5 & VAR_4->lowalarm)) {
   FUNC_0(FUNC_2("etrax_gpio_wake_up_check %i\n",VAR_4->minor));
   FUNC_5(&VAR_4->alarm_wq);
                        VAR_6 = 1;
  }
  VAR_4 = VAR_4->next;
 }
 FUNC_4(&VAR_3, VAR_7);
        return VAR_6;
}
