
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_data {int field_count; char* dst; int lines_size; TYPE_1__* vbi; scalar_t__ prev_left; scalar_t__ lines_copied; struct front_face* front; } ;
struct front_face {int curr_frame; } ;
struct TYPE_2__ {scalar_t__ copied; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct video_data *VAR_0, bool VAR_1)
{
 struct front_face *VAR_2 = VAR_0->front;

 VAR_0->field_count = VAR_1;
 VAR_0->lines_copied = 0;
 VAR_0->prev_left = 0 ;
 VAR_0->dst = (char *)FUNC_0(VAR_2->curr_frame)
     + VAR_1 * VAR_0->lines_size;
 VAR_0->vbi->copied = 0;
}
