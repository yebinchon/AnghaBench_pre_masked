
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {int frame_size; int num_frames; int * frame_buffer; int * buffers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct camera_data *VAR_0)
{
 if(VAR_0->buffers) {
  FUNC_0(VAR_0->buffers);
  VAR_0->buffers = ((void*)0);
 }
 if(VAR_0->frame_buffer) {
  FUNC_1(VAR_0->frame_buffer, VAR_0->frame_size*VAR_0->num_frames);
  VAR_0->frame_buffer = ((void*)0);
 }
}
