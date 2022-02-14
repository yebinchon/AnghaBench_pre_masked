
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, int VAR_1)
{
 unsigned int VAR_2;


 if (VAR_0 > 64000)
  VAR_0 = 64000;


 switch (VAR_1) {
 case 129:
 default:
  VAR_2 = (VAR_0 + 500) / 1000;
  break;
 case 130:
  VAR_2 = VAR_0 / 1000;
  break;
 case 128:
  VAR_2 = (VAR_0 - 1) / 1000 + 1;
  break;
 }


 return VAR_2 * 1000;
}
