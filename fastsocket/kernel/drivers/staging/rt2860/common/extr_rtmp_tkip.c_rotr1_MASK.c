
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;



UINT FUNC_0(UINT VAR_0)
{
 unsigned int VAR_1;

 if ((VAR_0 & 0x01) == 0x01)
 {
  VAR_1 = (VAR_0 >> 1) | 0x8000;
 }
 else
 {
  VAR_1 = (VAR_0 >> 1) & 0x7fff;
 }
 VAR_1 = VAR_1 % 65536;
 return VAR_1;
}
