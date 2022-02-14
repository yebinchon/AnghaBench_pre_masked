
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(int *VAR_0)
{
 u8 VAR_1 = 0;
 if (*VAR_0 <= 32) {
  *VAR_0 = 32;
  VAR_1 = 1;
 } else if (*VAR_0 <= 128) {
  *VAR_0 = 128;
  VAR_1 = 2;
 } else if (*VAR_0 <= 512) {
  *VAR_0 = 512;
  VAR_1 = 3;
 }
 return (VAR_1);
}
