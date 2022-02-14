
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

unsigned char FUNC_1(const unsigned char* VAR_0, const char* VAR_1)
{
  if(FUNC_0(VAR_1) != 4) return 0;
  return (VAR_0[4] == VAR_1[0] && VAR_0[5] == VAR_1[1] && VAR_0[6] == VAR_1[2] && VAR_0[7] == VAR_1[3]);
}
