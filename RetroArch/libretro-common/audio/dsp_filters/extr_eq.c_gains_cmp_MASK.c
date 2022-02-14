
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eq_gain {scalar_t__ freq; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
   const struct eq_gain *VAR_2 = (const struct eq_gain*)VAR_0;
   const struct eq_gain *VAR_3 = (const struct eq_gain*)VAR_1;
   if (VAR_2->freq < VAR_3->freq)
      return -1;
   if (VAR_2->freq > VAR_3->freq)
      return 1;
   return 0;
}
