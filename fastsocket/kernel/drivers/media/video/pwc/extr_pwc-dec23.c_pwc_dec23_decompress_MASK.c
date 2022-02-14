
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_4__ {int y; int x; } ;
struct pwc_device {TYPE_3__ view; int vbandlength; TYPE_2__ image; int decompress_data; TYPE_1__ offset; } ;


 int FUNC_0 (int ,void const*,unsigned char*,unsigned char*,unsigned char*,int ,int) ;
 int FUNC_1 (int ,void const*,unsigned char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (void*,int ,int) ;

void FUNC_3(const struct pwc_device *VAR_1,
     const void *VAR_2,
     void *VAR_3,
     int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_1->image.y / 4;
 VAR_7 = VAR_1->view.x * 4;

 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_3, 0, VAR_1->view.x * VAR_1->view.y);


 } else {

  unsigned char *VAR_8;
  unsigned char *VAR_9;
  unsigned char *VAR_10;
  unsigned int VAR_11;

  VAR_11 = VAR_1->view.x * VAR_1->view.y;


  VAR_6 = VAR_1->view.x * VAR_1->offset.y;
  VAR_8 = VAR_3 + VAR_6 + VAR_1->offset.x;


  VAR_6 = (VAR_1->view.x * VAR_1->offset.y) / 4 + VAR_1->offset.x / 2;
  VAR_9 = VAR_3 + VAR_11 + VAR_6;
  VAR_10 = VAR_3 + VAR_11 + VAR_11 / 4 + VAR_6;

  while (VAR_5--) {

   FUNC_0(VAR_1->decompress_data,
      VAR_2,
      VAR_8, VAR_9, VAR_10,
      VAR_1->image.x, VAR_1->view.x);
   VAR_2 += VAR_1->vbandlength;
   VAR_8 += VAR_7;
   VAR_9 += VAR_1->view.x;
   VAR_10 += VAR_1->view.x;

  }

 }

}
