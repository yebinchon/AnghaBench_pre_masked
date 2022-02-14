
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwc_device {int len_per_image; int * image_data; TYPE_2__* decompress_data; TYPE_2__* fbuf; TYPE_1__* sbuf; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {TYPE_2__* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pwc_device *VAR_3)
{
 int VAR_4;

 FUNC_0("Entering free_buffers(%p).\n", VAR_3);

 if (VAR_3 == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->sbuf[VAR_4].data != ((void*)0)) {
   FUNC_0("Freeing ISO buffer at %p.\n", VAR_3->sbuf[VAR_4].data);
   FUNC_1(VAR_3->sbuf[VAR_4].data);
   VAR_3->sbuf[VAR_4].data = ((void*)0);
  }


 if (VAR_3->fbuf != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_3->fbuf[VAR_4].data != ((void*)0)) {
    FUNC_0("Freeing frame buffer %d at %p.\n", VAR_4, VAR_3->fbuf[VAR_4].data);
    FUNC_3(VAR_3->fbuf[VAR_4].data);
    VAR_3->fbuf[VAR_4].data = ((void*)0);
   }
  }
  FUNC_1(VAR_3->fbuf);
  VAR_3->fbuf = ((void*)0);
 }


 if (VAR_3->decompress_data != ((void*)0)) {
  FUNC_0("Freeing decompression buffer at %p.\n", VAR_3->decompress_data);
  FUNC_1(VAR_3->decompress_data);
  VAR_3->decompress_data = ((void*)0);
 }


 if (VAR_3->image_data != ((void*)0)) {
  FUNC_0("Freeing image buffer at %p.\n", VAR_3->image_data);
  FUNC_2(VAR_3->image_data, VAR_2 * VAR_3->len_per_image);
 }
 VAR_3->image_data = ((void*)0);

 FUNC_0("Leaving free_buffers().\n");
}
