
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 static unsigned int VAR_2[4] = {
  129,
  128|129,
  128,
  0
 };

 if (VAR_1 < 4) {
  VAR_1 = VAR_2[VAR_1];
  FUNC_0(VAR_1 ^ (128|
        129));
  FUNC_1(VAR_1);
 }
 return 0;
}
