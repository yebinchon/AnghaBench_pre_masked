
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ff_effect* old; struct ff_effect* effect; } ;
struct TYPE_8__ {TYPE_3__ upload; } ;
struct uinput_request {int id; int retval; int done; TYPE_4__ u; int code; } ;
struct uinput_device {int dummy; } ;
struct input_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ waveform; } ;
struct TYPE_6__ {TYPE_1__ periodic; } ;
struct ff_effect {scalar_t__ type; TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct uinput_device* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct uinput_device*,struct uinput_request*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_4, struct ff_effect *VAR_5, struct ff_effect *VAR_6)
{
 struct uinput_device *VAR_7 = FUNC_1(VAR_4);
 struct uinput_request VAR_8;
 int VAR_9;
 if (VAR_5->type == VAR_2 &&
   VAR_5->u.periodic.waveform == VAR_1)
  return -VAR_0;

 VAR_8.id = -1;
 FUNC_0(&VAR_8.done);
 VAR_8.code = VAR_3;
 VAR_8.u.upload.effect = VAR_5;
 VAR_8.u.upload.old = VAR_6;

 VAR_9 = FUNC_2(VAR_7, &VAR_8);
 if (!VAR_9) {
  FUNC_3(&VAR_8.done);
  VAR_9 = VAR_8.retval;
 }

 return VAR_9;
}
