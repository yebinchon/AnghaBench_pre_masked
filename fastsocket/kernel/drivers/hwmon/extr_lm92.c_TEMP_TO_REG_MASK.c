
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s16 ;



__attribute__((used)) static inline s16 FUNC_0(int VAR_0)
{
 if (VAR_0 <= -60000)
  return -60000 * 10 / 625 * 8;
 if (VAR_0 >= 160000)
  return 160000 * 10 / 625 * 8;
 return VAR_0 * 10 / 625 * 8;
}
