
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nouveau_gpio {int dummy; } ;
struct dcb_gpio_func {int* log; int line; } ;


 int FUNC_0 (struct nouveau_gpio*,int,int ,int,int) ;
 int FUNC_1 (struct nouveau_gpio*,int,int ,int ,struct dcb_gpio_func*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_gpio *VAR_0, int VAR_1, u8 VAR_2, u8 VAR_3, int VAR_4)
{
 struct dcb_gpio_func VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_6 == 0) {
  int VAR_7 = !!(VAR_5.log[VAR_4] & 0x02);
  int VAR_8 = !!(VAR_5.log[VAR_4] & 0x01);
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5.line, VAR_7, VAR_8);
 }

 return VAR_6;
}
