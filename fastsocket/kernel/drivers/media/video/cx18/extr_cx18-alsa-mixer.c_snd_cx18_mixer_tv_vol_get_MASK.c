
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_cx18_card {int v4l2_dev; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx18 {int sd_av; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct snd_cx18_card*) ;
 int FUNC_3 (struct snd_cx18_card*) ;
 struct snd_cx18_card* FUNC_4 (struct snd_kcontrol*) ;
 struct cx18* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_cx18_card *VAR_5 = FUNC_4(VAR_3);
 struct cx18 *VAR_6 = FUNC_5(VAR_5->v4l2_dev);
 struct v4l2_control VAR_7;
 int VAR_8;

 VAR_7.id = VAR_0;
 VAR_7.value = FUNC_1(VAR_4->value.integer.value[0]);

 FUNC_2(VAR_5);
 VAR_8 = FUNC_6(VAR_6->sd_av, VAR_1, VAR_2, &VAR_7);
 FUNC_3(VAR_5);

 if (!VAR_8)
  VAR_4->value.integer.value[0] = FUNC_0(VAR_7.value);
 return VAR_8;
}
