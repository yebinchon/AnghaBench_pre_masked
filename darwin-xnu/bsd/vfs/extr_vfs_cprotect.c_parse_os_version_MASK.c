
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp_key_os_version_t ;



__attribute__((used)) static cp_key_os_version_t
FUNC_0(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;

 int VAR_2 = 0;
 while (*VAR_1 >= '0' && *VAR_1 <= '9') {
  VAR_2 = VAR_2 * 10 + *VAR_1 - '0';
  ++VAR_1;
 }

 if (!VAR_2)
  return 0;

 int VAR_3 = *VAR_1++;
 if (!VAR_3)
  return 0;

 int VAR_4 = 0;
 while (*VAR_1 >= '0' && *VAR_1 <= '9') {
  VAR_4 = VAR_4 * 10 + *VAR_1 - '0';
  ++VAR_1;
 }

 if (!VAR_4)
  return 0;

 return (VAR_2 & 0xff) << 24 | VAR_3 << 16 | (VAR_4 & 0xffff);
}
