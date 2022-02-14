
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* __ptr_t ;



void FUNC_0 (__ptr_t VAR_0, size_t VAR_1)
{
 union { void *vp; unsigned long *ulp; unsigned char *ucp; } VAR_2;
 int VAR_3;

 VAR_2.vp = VAR_0;

 for (VAR_3 = VAR_1 >> 5; VAR_3 > 0; VAR_3--) {
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
 }

 if (VAR_1 & 1 << 4) {
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
 }

 if (VAR_1 & 1 << 3) {
  *VAR_2.ulp++ = 0;
  *VAR_2.ulp++ = 0;
 }

 if (VAR_1 & 1 << 2)
  *VAR_2.ulp++ = 0;

 if (VAR_1 & 1 << 1) {
  *VAR_2.ucp++ = 0;
  *VAR_2.ucp++ = 0;
 }

 if (VAR_1 & 1)
  *VAR_2.ucp++ = 0;
}
