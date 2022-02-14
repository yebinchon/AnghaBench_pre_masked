
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlfb_data {int base16d; int base16; char* buf; char* bufend; int bulk_mutex; TYPE_2__* info; } ;
struct TYPE_3__ {int yres; int xres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlfb_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlfb_data *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5, VAR_6;

 char *VAR_7;

 VAR_2 = VAR_1->base16d;

 FUNC_1(&VAR_1->bulk_mutex);

 VAR_3 = VAR_1->base16;

 VAR_7 = VAR_1->buf;

 for (VAR_5 = 0; VAR_5 < VAR_1->info->var.yres; VAR_5++) {

  if (VAR_1->bufend - VAR_7 < VAR_0) {
   VAR_6 = FUNC_0(VAR_1, VAR_7 - VAR_1->buf);
   VAR_7 = VAR_1->buf;
  }

  VAR_4 = VAR_1->info->var.xres;

  while (VAR_4) {

   if (VAR_1->bufend - VAR_7 < VAR_0) {
    VAR_6 =
        FUNC_0(VAR_1,
        VAR_7 - VAR_1->buf);
    VAR_7 = VAR_1->buf;

   }

   *VAR_7++ = 0xAF;
   *VAR_7++ = 0x6A;

   *VAR_7++ = (char)(VAR_2 >> 16);
   *VAR_7++ = (char)(VAR_2 >> 8);
   *VAR_7++ = (char)(VAR_2);

   if (VAR_4 > 255) {
    *VAR_7++ = 255;
    *VAR_7++ = (char)(VAR_3 >> 16);
    *VAR_7++ = (char)(VAR_3 >> 8);
    *VAR_7++ = (char)(VAR_3);

    VAR_4 -= 255;
    VAR_2 += 255 * 2;
    VAR_3 += 255 * 2;

   } else {
    *VAR_7++ = VAR_4;
    *VAR_7++ = (char)(VAR_3 >> 16);
    *VAR_7++ = (char)(VAR_3 >> 8);
    *VAR_7++ = (char)(VAR_3);

    VAR_2 += VAR_4 * 2;
    VAR_3 += VAR_4 * 2;
    VAR_4 = 0;
   }
  }
 }

 if (VAR_7 > VAR_1->buf)
  VAR_6 = FUNC_0(VAR_1, VAR_7 - VAR_1->buf);

 FUNC_2(&VAR_1->bulk_mutex);

 return 1;

}
