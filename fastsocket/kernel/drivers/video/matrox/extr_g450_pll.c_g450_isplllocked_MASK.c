
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {int dummy; } ;


 int FUNC_0 (struct matrox_fb_info const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(const struct matrox_fb_info *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < 1000; VAR_2++) {
  if (FUNC_0(VAR_0, VAR_1) & 0x40) {
   unsigned int VAR_3 = 0;
   int VAR_4;

   for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
    VAR_3 += FUNC_0(VAR_0, VAR_1) & 0x40;
   }
   return VAR_3 >= (90 * 0x40);
  }

 }
 return 0;
}
