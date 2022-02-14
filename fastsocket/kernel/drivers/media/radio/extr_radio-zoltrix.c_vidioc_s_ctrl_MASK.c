
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zoltrix {int curvol; int stereo; int curfreq; } ;
struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct zoltrix* FUNC_0 (struct file*) ;
 int FUNC_1 (struct zoltrix*) ;
 scalar_t__ FUNC_2 (struct zoltrix*,int ) ;
 int FUNC_3 (struct zoltrix*,int) ;
 int FUNC_4 (struct zoltrix*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
    struct v4l2_control *VAR_6)
{
 struct zoltrix *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_6->id) {
 case 129:
  if (VAR_6->value)
   FUNC_1(VAR_7);
  else {
   FUNC_4(VAR_7);
   FUNC_3(VAR_7, VAR_7->curvol);
  }
  return 0;
 case 128:
  FUNC_3(VAR_7, VAR_6->value / 4096);
  return 0;
 }
 VAR_7->stereo = 1;
 if (FUNC_2(VAR_7, VAR_7->curfreq) != 0)
  return -VAR_0;
 return -VAR_0;
}
