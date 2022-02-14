
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long smem_len; } ;
struct fb_info {char* screen_base; TYPE_1__ fix; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct fb_info *VAR_1, char *VAR_2, size_t VAR_3, loff_t * VAR_4)
{
 unsigned long VAR_5 = *VAR_4;

 if (VAR_5 >= VAR_1->fix.smem_len)
  return 0;
 if (VAR_3 >= VAR_1->fix.smem_len)
  VAR_3 = VAR_1->fix.smem_len;
 if (VAR_3 + VAR_5 > VAR_1->fix.smem_len)
  VAR_3 = VAR_1->fix.smem_len - VAR_5;

 if (VAR_3) {
  char *VAR_6;

  VAR_6 = VAR_1->screen_base;
  VAR_3 -= FUNC_0(VAR_2, VAR_6 + VAR_5, VAR_3);
  if (!VAR_3)
   return -VAR_0;
  *VAR_4 += VAR_3;
 }
 return VAR_3;
}
