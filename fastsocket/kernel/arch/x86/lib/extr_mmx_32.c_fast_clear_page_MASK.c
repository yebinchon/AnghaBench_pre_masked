
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 int VAR_1;

 FUNC_0();

 __asm__ __volatile__ (
  "  pxor %%mm0, %%mm0\n" : :
 );

 for (VAR_1 = 0; VAR_1 < 4096/128; VAR_1++) {
  __asm__ __volatile__ (
  "  movq %%mm0, (%0)\n"
  "  movq %%mm0, 8(%0)\n"
  "  movq %%mm0, 16(%0)\n"
  "  movq %%mm0, 24(%0)\n"
  "  movq %%mm0, 32(%0)\n"
  "  movq %%mm0, 40(%0)\n"
  "  movq %%mm0, 48(%0)\n"
  "  movq %%mm0, 56(%0)\n"
  "  movq %%mm0, 64(%0)\n"
  "  movq %%mm0, 72(%0)\n"
  "  movq %%mm0, 80(%0)\n"
  "  movq %%mm0, 88(%0)\n"
  "  movq %%mm0, 96(%0)\n"
  "  movq %%mm0, 104(%0)\n"
  "  movq %%mm0, 112(%0)\n"
  "  movq %%mm0, 120(%0)\n"
   : : "r" (VAR_0) : "memory");
  VAR_0 += 128;
 }

 FUNC_1();
}
