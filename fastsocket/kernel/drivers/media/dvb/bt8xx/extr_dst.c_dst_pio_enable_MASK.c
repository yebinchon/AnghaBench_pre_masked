
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct dst_state *VAR_4)
{
 if (FUNC_1(VAR_4, ~0, VAR_2, 0, VAR_1) < 0) {
  FUNC_0(VAR_3, VAR_0, 1, "dst_gpio_outb ERROR !");
  return -1;
 }
 FUNC_2(1000);

 return 0;
}
