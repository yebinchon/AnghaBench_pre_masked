
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwc_frame_buf {int dummy; } ;
struct pwc_device {int len_per_image; TYPE_3__* images; void* image_data; int type; TYPE_2__* fbuf; TYPE_1__* sbuf; } ;
struct TYPE_6__ {int offset; scalar_t__ vma_use_count; } ;
struct TYPE_5__ {int * data; } ;
struct TYPE_4__ {int * data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pwc_device*) ;
 int FUNC_5 (struct pwc_device*) ;
 int VAR_8 ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct pwc_device *VAR_9)
{
 int VAR_10, VAR_11;
 void *VAR_12;

 FUNC_1(">> pwc_allocate_buffers(pdev = 0x%p)\n", VAR_9);

 if (VAR_9 == ((void*)0))
  return -VAR_1;


 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_9->sbuf[VAR_10].data == ((void*)0)) {
   VAR_12 = FUNC_3(VAR_3, VAR_2);
   if (VAR_12 == ((void*)0)) {
    FUNC_2("Failed to allocate iso buffer %d.\n", VAR_10);
    return -VAR_0;
   }
   FUNC_1("Allocated iso buffer at %p.\n", VAR_12);
   VAR_9->sbuf[VAR_10].data = VAR_12;
  }
 }


 if (VAR_9->fbuf == ((void*)0)) {
  VAR_12 = FUNC_3(VAR_7 * sizeof(struct pwc_frame_buf), VAR_2);
  if (VAR_12 == ((void*)0)) {
   FUNC_2("Failed to allocate frame buffer structure.\n");
   return -VAR_0;
  }
  FUNC_1("Allocated frame buffer structure at %p.\n", VAR_12);
  VAR_9->fbuf = VAR_12;
 }


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_9->fbuf[VAR_10].data == ((void*)0)) {
   VAR_12 = FUNC_7(VAR_6);
   if (VAR_12 == ((void*)0)) {
    FUNC_2("Failed to allocate frame buffer %d.\n", VAR_10);
    return -VAR_0;
   }
   FUNC_1("Allocated frame buffer %d at %p.\n", VAR_10, VAR_12);
   VAR_9->fbuf[VAR_10].data = VAR_12;
  }
 }


 if (FUNC_0(VAR_9->type))
  VAR_11 = FUNC_4(VAR_9);
 else
  VAR_11 = FUNC_5(VAR_9);

 if (VAR_11) {
  FUNC_2("Failed to allocate decompress table.\n");
  return VAR_11;
 }


 VAR_12 = FUNC_6(VAR_8 * VAR_9->len_per_image);
 if (VAR_12 == ((void*)0)) {
  FUNC_2("Failed to allocate image buffer(s). needed (%d)\n",
    VAR_8 * VAR_9->len_per_image);
  return -VAR_0;
 }
 FUNC_1("Allocated image buffer at %p.\n", VAR_12);
 VAR_9->image_data = VAR_12;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9->images[VAR_10].offset = VAR_10 * VAR_9->len_per_image;
  VAR_9->images[VAR_10].vma_use_count = 0;
 }
 for (; VAR_10 < VAR_4; VAR_10++) {
  VAR_9->images[VAR_10].offset = 0;
 }

 VAR_12 = ((void*)0);

 FUNC_1("<< pwc_allocate_buffers()\n");
 return 0;
}
