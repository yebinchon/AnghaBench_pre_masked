
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const char *VAR_2)
{
  const unsigned char *VAR_3 = (const unsigned char *)VAR_2;

  while(*VAR_3) {
    if(*VAR_3++ & 0x80)
      return VAR_0;
  }
  return VAR_1;
}
