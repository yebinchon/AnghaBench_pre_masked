
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlfb_data {int base16; char* buf; char* bufend; int bulk_mutex; TYPE_2__* info; scalar_t__ backing_buffer; } ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlfb_data*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct dlfb_data *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
  int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 char *VAR_14;

 if (VAR_3 + VAR_7 > VAR_2->info->var.xres)
  return -VAR_1;

 if (VAR_4 + VAR_8 > VAR_2->info->var.yres)
  return -VAR_1;

 FUNC_2(&VAR_2->bulk_mutex);

 VAR_9 =
     VAR_2->base16 + (VAR_2->info->var.xres * 2 * VAR_4) + (VAR_3 * 2);
 VAR_10 = (VAR_2->info->var.xres * 2 * VAR_6) + (VAR_5 * 2);

 VAR_14 = VAR_2->buf;

 for (VAR_12 = VAR_6; VAR_12 < VAR_6 + VAR_8; VAR_12++) {

  FUNC_1(VAR_2->backing_buffer + VAR_9 - VAR_2->base16,
         VAR_2->backing_buffer + VAR_10, VAR_7 * 2);

  if (VAR_2->bufend - VAR_14 < VAR_0) {
   VAR_13 = FUNC_0(VAR_2, VAR_14 - VAR_2->buf);
   VAR_14 = VAR_2->buf;
  }

  VAR_11 = VAR_7;

  while (VAR_11) {

   if (VAR_2->bufend - VAR_14 < VAR_0) {
    VAR_13 =
        FUNC_0(VAR_2,
        VAR_14 - VAR_2->buf);
    VAR_14 = VAR_2->buf;
   }

   *VAR_14++ = 0xAF;
   *VAR_14++ = 0x6A;

   *VAR_14++ = (char)(VAR_9 >> 16);
   *VAR_14++ = (char)(VAR_9 >> 8);
   *VAR_14++ = (char)(VAR_9);

   if (VAR_11 > 255) {
    *VAR_14++ = 255;
    *VAR_14++ = (char)(VAR_10 >> 16);
    *VAR_14++ = (char)(VAR_10 >> 8);
    *VAR_14++ = (char)(VAR_10);

    VAR_11 -= 255;
    VAR_9 += 255 * 2;
    VAR_10 += 255 * 2;

   } else {
    *VAR_14++ = VAR_11;
    *VAR_14++ = (char)(VAR_10 >> 16);
    *VAR_14++ = (char)(VAR_10 >> 8);
    *VAR_14++ = (char)(VAR_10);

    VAR_9 += VAR_11 * 2;
    VAR_10 += VAR_11 * 2;
    VAR_11 = 0;
   }
  }

  VAR_9 += (VAR_2->info->var.xres * 2) - (VAR_7 * 2);
  VAR_10 += (VAR_2->info->var.xres * 2) - (VAR_7 * 2);
 }

 if (VAR_14 > VAR_2->buf)
  VAR_13 = FUNC_0(VAR_2, VAR_14 - VAR_2->buf);

 FUNC_3(&VAR_2->bulk_mutex);

 return 1;
}
