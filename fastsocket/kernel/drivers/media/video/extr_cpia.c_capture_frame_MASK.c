
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_mmap {size_t frame; } ;
struct cam_data {size_t curframe; TYPE_1__* frame; int frame_buf; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_data*) ;
 int FUNC_1 (struct cam_data*) ;

__attribute__((used)) static int FUNC_2(struct cam_data *VAR_1, struct video_mmap *VAR_2)
{
 if (!VAR_1->frame_buf) {

  int VAR_3;
  if ((VAR_3 = FUNC_0(VAR_1)))
   return VAR_3;
 }

 VAR_1->curframe = VAR_2->frame;
 VAR_1->frame[VAR_1->curframe].state = VAR_0;
 return FUNC_1(VAR_1);
}
