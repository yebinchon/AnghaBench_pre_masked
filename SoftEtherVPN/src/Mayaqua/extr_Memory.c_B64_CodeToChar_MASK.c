
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;



char FUNC_0(BYTE VAR_0)
{
 BYTE VAR_1;
 VAR_1 = '=';
 if (VAR_0 <= 0x19)
 {
  VAR_1 = VAR_0 + 'A';
 }
 if (VAR_0 >= 0x1a && VAR_0 <= 0x33)
 {
  VAR_1 = VAR_0 - 0x1a + 'a';
 }
 if (VAR_0 >= 0x34 && VAR_0 <= 0x3d)
 {
  VAR_1 = VAR_0 - 0x34 + '0';
 }
 if (VAR_0 == 0x3e)
 {
  VAR_1 = '+';
 }
 if (VAR_0 == 0x3f)
 {
  VAR_1 = '/';
 }
 return VAR_1;
}
