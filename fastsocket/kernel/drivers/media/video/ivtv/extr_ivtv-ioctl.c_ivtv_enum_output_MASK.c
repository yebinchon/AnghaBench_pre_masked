
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_output {int index; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct ivtv*,int ,struct v4l2_output*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_output *VAR_2)
{
 struct ivtv *VAR_3 = ((struct ivtv_open_id *)VAR_1)->itv;

 return FUNC_0(VAR_3, VAR_2->index, VAR_2);
}
