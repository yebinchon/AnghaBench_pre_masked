
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long smem_len; } ;
struct fb_info {char* screen_base; TYPE_1__ fix; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct fb_info *VAR_2, const char *VAR_3,
    size_t VAR_4, loff_t * VAR_5)
{
 unsigned long VAR_6 = *VAR_5;
 int VAR_7;


 if (VAR_6 > VAR_2->fix.smem_len)
  return -VAR_1;
 if (VAR_4 >= VAR_2->fix.smem_len)
  VAR_4 = VAR_2->fix.smem_len;
 VAR_7 = 0;
 if (VAR_4 + VAR_6 > VAR_2->fix.smem_len) {
  VAR_4 = VAR_2->fix.smem_len - VAR_6;
  VAR_7 = -VAR_1;
 }

 if (VAR_4) {
  char *VAR_8;

  VAR_8 = VAR_2->screen_base;
  VAR_4 -= FUNC_0(VAR_8 + VAR_6, VAR_3, VAR_4);
  *VAR_5 += VAR_4;
  VAR_7 = -VAR_0;
 }
 if (VAR_4)
  return VAR_4;
 return VAR_7;
}
