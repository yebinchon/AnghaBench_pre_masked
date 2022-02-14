
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ivtv*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct file *VAR_3, void *VAR_4, struct v4l2_frequency *VAR_5)
{
 struct ivtv *VAR_6 = ((struct ivtv_open_id *)VAR_4)->itv;

 if (VAR_5->tuner != 0)
  return -VAR_0;

 FUNC_2(VAR_6);
 FUNC_0("v4l2 ioctl: set frequency %d\n", VAR_5->frequency);
 FUNC_1(VAR_6, VAR_2, VAR_1, VAR_5);
 FUNC_3(VAR_6);
 return 0;
}
