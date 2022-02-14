
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int urb_size; int * urb_buffer; int * urb_dma; TYPE_1__* dev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int udev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int,int,int *) ;
 int FUNC_2 (struct uvc_streaming*) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_4(struct uvc_streaming *VAR_4,
 unsigned int VAR_5, unsigned int VAR_6, gfp_t VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;


 if (VAR_4->urb_size)
  return VAR_4->urb_size / VAR_6;




 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;


 for (; VAR_8 > 1; VAR_8 /= 2) {
  for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
   VAR_4->urb_size = VAR_6 * VAR_8;
   VAR_4->urb_buffer[VAR_9] = FUNC_1(
    VAR_4->dev->udev, VAR_4->urb_size,
    VAR_7 | VAR_3, &VAR_4->urb_dma[VAR_9]);
   if (!VAR_4->urb_buffer[VAR_9]) {
    FUNC_2(VAR_4);
    break;
   }
  }

  if (VAR_9 == VAR_2) {
   FUNC_3(VAR_1, "Allocated %u URB buffers "
    "of %ux%u bytes each.\n", VAR_2, VAR_8,
    VAR_6);
   return VAR_8;
  }
 }

 FUNC_3(VAR_1, "Failed to allocate URB buffers (%u bytes "
  "per packet).\n", VAR_6);
 return 0;
}
