
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct amradio_device {int muted; scalar_t__ removed; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct file*) ;
 struct amradio_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct amradio_device *VAR_5 = FUNC_1(FUNC_0(VAR_2));


 if (VAR_5->removed)
  return -VAR_1;

 switch (VAR_4->id) {
 case 128:
  VAR_4->value = VAR_5->muted;
  return 0;
 }
 return -VAR_0;
}
