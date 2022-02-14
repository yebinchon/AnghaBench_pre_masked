
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short FUNC_0 (short) ;

__attribute__((used)) static unsigned char FUNC_1(short VAR_0, short VAR_1, short VAR_2)
{
  short VAR_3 = FUNC_0(VAR_1 - VAR_2);
  short VAR_4 = FUNC_0(VAR_0 - VAR_2);
  short VAR_5 = FUNC_0(VAR_0 + VAR_1 - VAR_2 - VAR_2);

  if(VAR_5 < VAR_3 && VAR_5 < VAR_4) return (unsigned char)VAR_2;
  else if(VAR_4 < VAR_3) return (unsigned char)VAR_1;
  else return (unsigned char)VAR_0;
}
