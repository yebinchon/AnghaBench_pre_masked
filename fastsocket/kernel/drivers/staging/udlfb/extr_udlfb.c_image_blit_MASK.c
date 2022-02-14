
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct dlfb_data {int base16; char* buf; char* bufend; char* backing_buffer; int bulk_mutex; TYPE_2__* info; } ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlfb_data*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct dlfb_data *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
    char *VAR_7)
{

 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_5;
 int VAR_12;

 int VAR_13, VAR_14;

 char *VAR_15;

 if (VAR_3 + VAR_5 > VAR_2->info->var.xres)
  return -VAR_1;

 if (VAR_4 + VAR_6 > VAR_2->info->var.yres)
  return -VAR_1;

 FUNC_2(&VAR_2->bulk_mutex);

 VAR_10 =
     VAR_2->base16 + ((VAR_2->info->var.xres * 2 * VAR_4) + (VAR_3 * 2));

 VAR_7 += (VAR_2->info->var.xres * 2 * VAR_4) + (VAR_3 * 2);



 VAR_15 = VAR_2->buf;

 for (VAR_8 = VAR_4; VAR_8 < VAR_4 + VAR_6; VAR_8++) {

  if (VAR_2->bufend - VAR_15 < VAR_0) {
   VAR_12 = FUNC_0(VAR_2, VAR_15 - VAR_2->buf);
   VAR_15 = VAR_2->buf;
  }

  VAR_11 = VAR_5;



  while (VAR_11) {

   if (VAR_2->bufend - VAR_15 < VAR_0) {
    VAR_12 =
        FUNC_0(VAR_2,
        VAR_15 - VAR_2->buf);
    VAR_15 = VAR_2->buf;
   }

   VAR_14 = VAR_11;
   if (VAR_14 > 255)
    VAR_14 = 255;


   VAR_13 = -1;
   for (VAR_9 = 0; VAR_9 < VAR_14 * 2; VAR_9++) {
    if (VAR_2->backing_buffer
        [VAR_10 - VAR_2->base16 + VAR_9] != VAR_7[VAR_9]) {
     VAR_13 = VAR_9 / 2;
     break;
    }
   }

   if (VAR_13 >= 0) {
    char *VAR_16;

    VAR_16 =
        FUNC_4((uint16_t *) (VAR_7 +
         VAR_13 * 2),
         VAR_15,
         VAR_14 - VAR_13);

    if (VAR_16 <
        VAR_15 + 6 + 2 * (VAR_14 - VAR_13)) {
     VAR_15[0] = 0xAF;
     VAR_15[1] = 0x69;

     VAR_15[2] =
         (char)((VAR_10 +
          VAR_13 * 2) >> 16);
     VAR_15[3] =
         (char)((VAR_10 + VAR_13 * 2) >> 8);
     VAR_15[4] =
         (char)(VAR_10 + VAR_13 * 2);
     VAR_15[5] = VAR_14 - VAR_13;

     VAR_15 = VAR_16;

    } else {

     *VAR_15++ = 0xAF;
     *VAR_15++ = 0x68;

     *VAR_15++ =
         (char)((VAR_10 +
          VAR_13 * 2) >> 16);
     *VAR_15++ =
         (char)((VAR_10 + VAR_13 * 2) >> 8);
     *VAR_15++ =
         (char)(VAR_10 + VAR_13 * 2);
     *VAR_15++ = VAR_14 - VAR_13;

     for (VAR_9 = VAR_13 * 2;
          VAR_9 < VAR_14 * 2; VAR_9 += 2) {
      *VAR_15++ = VAR_7[VAR_9 + 1];
      *VAR_15++ = VAR_7[VAR_9];
     }
    }
   }

   VAR_10 += VAR_14 * 2;
   VAR_7 += VAR_14 * 2;
   VAR_11 -= VAR_14;
  }

  FUNC_1(VAR_2->backing_buffer + (VAR_10 - VAR_2->base16) -
         (VAR_5 * 2), VAR_7 - (VAR_5 * 2), VAR_5 * 2);

  VAR_10 += (VAR_2->info->var.xres * 2) - (VAR_5 * 2);
  VAR_7 += (VAR_2->info->var.xres * 2) - (VAR_5 * 2);

 }

 if (VAR_15 > VAR_2->buf) {
  VAR_12 = FUNC_0(VAR_2, VAR_15 - VAR_2->buf);
 }

 FUNC_3(&VAR_2->bulk_mutex);

 return VAR_10;

}
