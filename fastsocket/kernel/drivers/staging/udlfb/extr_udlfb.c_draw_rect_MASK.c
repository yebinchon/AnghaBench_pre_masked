
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlfb_data {int base16; char* buf; char* backing_buffer; char* bufend; int bulk_mutex; TYPE_2__* info; } ;
typedef unsigned char red ;
typedef int green ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlfb_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct dlfb_data *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
   unsigned char VAR_7, unsigned char VAR_8, unsigned char VAR_9)
{

 int VAR_10, VAR_11, VAR_12;
 int VAR_13;
 unsigned short VAR_14 =
     (((((VAR_7) & 0xF8) | ((VAR_8) >> 5)) & 0xFF) << 8) +
     (((((VAR_8) & 0x1C) << 3) | ((VAR_9) >> 3)) & 0xFF);
 int VAR_15 = VAR_5;

 char *VAR_16;

 if (VAR_3 + VAR_5 > VAR_2->info->var.xres)
  return -VAR_1;

 if (VAR_4 + VAR_6 > VAR_2->info->var.yres)
  return -VAR_1;

 FUNC_1(&VAR_2->bulk_mutex);

 VAR_12 = VAR_2->base16 + (VAR_2->info->var.xres * 2 * VAR_4) + (VAR_3 * 2);

 VAR_16 = VAR_2->buf;

 for (VAR_10 = VAR_4; VAR_10 < VAR_4 + VAR_6; VAR_10++) {

  for (VAR_11 = 0; VAR_11 < VAR_5 * 2; VAR_11 += 2) {
   VAR_2->backing_buffer[VAR_12 - VAR_2->base16 + VAR_11] =
       (char)(VAR_14 >> 8);
   VAR_2->backing_buffer[VAR_12 - VAR_2->base16 + VAR_11 +
       1] = (char)(VAR_14);
  }
  if (VAR_2->bufend - VAR_16 < VAR_0) {
   VAR_13 = FUNC_0(VAR_2, VAR_16 - VAR_2->buf);
   VAR_16 = VAR_2->buf;
  }

  VAR_15 = VAR_5;

  while (VAR_15) {

   if (VAR_2->bufend - VAR_16 < VAR_0) {
    VAR_13 =
        FUNC_0(VAR_2,
        VAR_16 - VAR_2->buf);
    VAR_16 = VAR_2->buf;
   }

   *VAR_16++ = 0xAF;
   *VAR_16++ = 0x69;

   *VAR_16++ = (char)(VAR_12 >> 16);
   *VAR_16++ = (char)(VAR_12 >> 8);
   *VAR_16++ = (char)(VAR_12);

   if (VAR_15 > 255) {
    *VAR_16++ = 255;
    *VAR_16++ = 255;
    VAR_15 -= 255;
    VAR_12 += 255 * 2;
   } else {
    *VAR_16++ = VAR_15;
    *VAR_16++ = VAR_15;
    VAR_12 += VAR_15 * 2;
    VAR_15 = 0;
   }

   *VAR_16++ = (char)(VAR_14 >> 8);
   *VAR_16++ = (char)(VAR_14);

  }

  VAR_12 += (VAR_2->info->var.xres * 2) - (VAR_5 * 2);

 }

 if (VAR_16 > VAR_2->buf)
  VAR_13 = FUNC_0(VAR_2, VAR_16 - VAR_2->buf);

 FUNC_2(&VAR_2->bulk_mutex);

 return 1;
}
