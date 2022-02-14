
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int i_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ivtv*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7, struct v4l2_tuner *VAR_8)
{
 struct ivtv *VAR_9 = ((struct ivtv_open_id *)VAR_7)->itv;

 if (VAR_8->index != 0)
  return -VAR_0;

 FUNC_0(VAR_9, VAR_5, VAR_4, VAR_8);

 if (FUNC_2(VAR_1, &VAR_9->i_flags)) {
  FUNC_1(VAR_8->name, "ivtv Radio Tuner", sizeof(VAR_8->name));
  VAR_8->type = VAR_3;
 } else {
  FUNC_1(VAR_8->name, "ivtv TV Tuner", sizeof(VAR_8->name));
  VAR_8->type = VAR_2;
 }

 return 0;
}
