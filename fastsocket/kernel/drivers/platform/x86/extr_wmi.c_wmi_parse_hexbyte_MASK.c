
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static int FUNC_0(const u8 *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;


 VAR_1 = VAR_0[0];
 if (VAR_1 - '0' <= '9' - '0') {
  VAR_2 = VAR_1 - '0';
 } else if (VAR_1 - 'a' <= 'f' - 'a') {
  VAR_2 = VAR_1 - 'a' + 10;
 } else if (VAR_1 - 'A' <= 'F' - 'A') {
  VAR_2 = VAR_1 - 'A' + 10;
 } else {
  return -1;
 }
 VAR_2 <<= 4;


 VAR_1 = VAR_0[1];
 if (VAR_1 - '0' <= '9' - '0')
  return VAR_2 | (VAR_1 - '0');
 if (VAR_1 - 'a' <= 'f' - 'a')
  return VAR_2 | (VAR_1 - 'a' + 10);
 if (VAR_1 - 'A' <= 'F' - 'A')
  return VAR_2 | (VAR_1 - 'A' + 10);
 return -1;
}
