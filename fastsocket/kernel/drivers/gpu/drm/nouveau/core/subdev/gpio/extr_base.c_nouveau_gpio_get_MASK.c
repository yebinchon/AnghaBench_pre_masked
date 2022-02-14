
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nouveau_gpio {int dummy; } ;
struct dcb_gpio_func {int* log; int line; } ;


 int FUNC_0 (struct nouveau_gpio*,int,int ,int ,struct dcb_gpio_func*) ;
 int FUNC_1 (struct nouveau_gpio*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_gpio *VAR_0, int VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct dcb_gpio_func VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4.line);
  if (VAR_5 >= 0)
   VAR_5 = (VAR_5 == (VAR_4.log[1] & 1));
 }

 return VAR_5;
}
