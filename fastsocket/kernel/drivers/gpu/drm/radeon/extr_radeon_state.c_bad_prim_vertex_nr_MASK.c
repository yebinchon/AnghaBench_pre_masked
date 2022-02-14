
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;







__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 switch (VAR_1 & VAR_0) {
 case 133:
 case 132:
  return VAR_2 < 1;
 case 135:
  return (VAR_2 & 1) || VAR_2 == 0;
 case 134:
  return VAR_2 < 2;
 case 129:
 case 136:
 case 137:
 case 131:
  return VAR_2 % 3 || VAR_2 == 0;
 case 130:
 case 128:
  return VAR_2 < 3;
 default:
  return 1;
 }
}
