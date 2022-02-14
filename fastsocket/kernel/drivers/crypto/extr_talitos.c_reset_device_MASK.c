
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {scalar_t__ reg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4)
{
 struct talitos_private *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = VAR_3;

 FUNC_4(VAR_5->reg + VAR_1, VAR_2);

 while ((FUNC_3(VAR_5->reg + VAR_1) & VAR_2)
        && --VAR_6)
  FUNC_0();

 if (VAR_6 == 0) {
  FUNC_1(VAR_4, "failed to reset device\n");
  return -VAR_0;
 }

 return 0;
}
