
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_video_queue {unsigned int count; int mem; TYPE_1__* buffer; } ;
struct TYPE_2__ {scalar_t__ vma_use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct uvc_video_queue *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->count; ++VAR_2) {
  if (VAR_1->buffer[VAR_2].vma_use_count != 0)
   return -VAR_0;
 }

 if (VAR_1->count) {
  FUNC_0(VAR_1->mem);
  VAR_1->count = 0;
 }

 return 0;
}
