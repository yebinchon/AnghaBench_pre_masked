
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char FUNC_0(unsigned char VAR_0)
{
 if (VAR_0 >= '0' && VAR_0 <= '9')
  return VAR_0 - '0';
 if (VAR_0 >= 'a' && VAR_0 <= 'f')
  return VAR_0 - 'a' + 10;
 return 0;
}
