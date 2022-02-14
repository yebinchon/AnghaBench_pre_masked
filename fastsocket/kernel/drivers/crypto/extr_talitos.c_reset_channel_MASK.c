
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int features; scalar_t__ reg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*,char*,int) ;
 struct talitos_private* FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, int VAR_9)
{
 struct talitos_private *VAR_10 = FUNC_4(VAR_8);
 unsigned int VAR_11 = VAR_7;

 FUNC_6(VAR_10->reg + FUNC_0(VAR_9), VAR_5);

 while ((FUNC_5(VAR_10->reg + FUNC_0(VAR_9)) & VAR_5)
        && --VAR_11)
  FUNC_2();

 if (VAR_11 == 0) {
  FUNC_3(VAR_8, "failed to reset channel %d\n", VAR_9);
  return -VAR_0;
 }


 FUNC_6(VAR_10->reg + FUNC_1(VAR_9), VAR_3 |
    VAR_2 | VAR_1);


 if (VAR_10->features & VAR_6)
  FUNC_6(VAR_10->reg + FUNC_1(VAR_9),
            VAR_4);

 return 0;
}
