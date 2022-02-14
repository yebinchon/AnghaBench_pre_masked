
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 UINT64 *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = *(UINT64 **)VAR_0;
 VAR_3 = *(UINT64 **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (*VAR_2 > *VAR_3)
 {
  return 1;
 }
 else if (*VAR_2 < *VAR_3)
 {
  return -1;
 }
 else
 {
  return 0;
 }
}
