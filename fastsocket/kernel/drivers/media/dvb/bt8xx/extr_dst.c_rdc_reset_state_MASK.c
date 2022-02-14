
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;

int FUNC_3(struct dst_state *VAR_5)
{
 FUNC_0(VAR_4, VAR_1, 1, "Resetting state machine");
 if (FUNC_1(VAR_5, VAR_3, VAR_3, 0, VAR_2) < 0) {
  FUNC_0(VAR_4, VAR_0, 1, "dst_gpio_outb ERROR !");
  return -1;
 }
 FUNC_2(10);
 if (FUNC_1(VAR_5, VAR_3, VAR_3, VAR_3, VAR_2) < 0) {
  FUNC_0(VAR_4, VAR_0, 1, "dst_gpio_outb ERROR !");
  FUNC_2(10);
  return -1;
 }

 return 0;
}
