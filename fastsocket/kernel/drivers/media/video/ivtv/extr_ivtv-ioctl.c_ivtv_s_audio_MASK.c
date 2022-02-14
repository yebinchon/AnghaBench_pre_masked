
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {scalar_t__ nof_audio_inputs; scalar_t__ audio_input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ivtv*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 struct ivtv *VAR_4 = ((struct ivtv_open_id *)VAR_2)->itv;

 if (VAR_3->index >= VAR_4->nof_audio_inputs)
  return -VAR_0;

 VAR_4->audio_input = VAR_3->index;
 FUNC_0(VAR_4);

 return 0;
}
