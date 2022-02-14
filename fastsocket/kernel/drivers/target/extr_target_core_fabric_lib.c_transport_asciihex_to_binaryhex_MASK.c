
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(unsigned char VAR_0[2])
{
 unsigned char VAR_1 = 0;



 if ((VAR_0[0] >= 'a') && (VAR_0[0] <= 'f'))
  VAR_1 = ((VAR_0[0] - 'a' + 10) & 0xf) << 4;
 else
  if ((VAR_0[0] >= 'A') && (VAR_0[0] <= 'F'))
   VAR_1 = ((VAR_0[0] - 'A' + 10) & 0xf) << 4;
  else
   VAR_1 = ((VAR_0[0] - '0') & 0xf) << 4;



 if ((VAR_0[1] >= 'a') && (VAR_0[1] <= 'f'))
  VAR_1 |= ((VAR_0[1] - 'a' + 10) & 0xf);
 else
  if ((VAR_0[1] >= 'A') && (VAR_0[1] <= 'F'))
   VAR_1 |= ((VAR_0[1] - 'A' + 10) & 0xf);
  else
   VAR_1 |= ((VAR_0[1] - '0') & 0xf);

 return VAR_1;
}
