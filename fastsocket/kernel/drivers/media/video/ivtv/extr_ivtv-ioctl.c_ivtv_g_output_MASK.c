
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; unsigned int active_output; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3, unsigned int *VAR_4)
{
 struct ivtv *VAR_5 = ((struct ivtv_open_id *)VAR_3)->itv;

 if (!(VAR_5->v4l2_cap & VAR_1))
  return -VAR_0;

 *VAR_4 = VAR_5->active_output;

 return 0;
}
