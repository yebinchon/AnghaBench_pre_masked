
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,unsigned char const) ;

char *FUNC_1(const unsigned char *VAR_0, size_t VAR_1)
{
  static char VAR_2[200 * 3 + 1];
  char *VAR_3 = VAR_2;
  size_t VAR_4;
  if(VAR_1 > 200)
    return ((void*)0);
  for(VAR_4 = 0; VAR_4<VAR_1; VAR_4++, VAR_3 += 3)
    FUNC_0(VAR_3, 4, "%02x ", VAR_0[VAR_4]);
  return VAR_2;
}
