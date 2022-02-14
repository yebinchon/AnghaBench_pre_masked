
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tuner {int mode; int radio_freq; int tv_freq; int fe; scalar_t__ std; scalar_t__ standby; } ;
struct dvb_tuner_ops {int (* get_status ) (int *,int*) ;} ;
struct analog_demod_ops {unsigned long (* has_signal ) (struct dvb_frontend*) ;} ;
struct TYPE_2__ {struct analog_demod_ops analog_ops; struct dvb_tuner_ops tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct tuner* analog_demod_priv; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,int*) ;
 unsigned long FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_2)
{
 struct tuner *VAR_3 = VAR_2->analog_demod_priv;
 unsigned long VAR_4, VAR_5;
 struct dvb_tuner_ops *VAR_6 = &VAR_2->ops.tuner_ops;
 struct analog_demod_ops *VAR_7 = &VAR_2->ops.analog_ops;
 const char *VAR_8;

 switch (VAR_3->mode) {
 case 128:
  VAR_8 = "radio";
  break;
 case 129:
  VAR_8 = "digital TV";
  break;
 case 130:
 default:
  VAR_8 = "analog TV";
  break;
 }
 if (VAR_3->mode == 128) {
  VAR_4 = VAR_3->radio_freq / 16000;
  VAR_5 = (VAR_3->radio_freq % 16000) * 100 / 16000;
 } else {
  VAR_4 = VAR_3->tv_freq / 16;
  VAR_5 = (VAR_3->tv_freq % 16) * 100 / 16;
 }
 FUNC_2("Tuner mode:      %s%s\n", VAR_8,
     VAR_3->standby ? " on standby mode" : "");
 FUNC_2("Frequency:       %lu.%02lu MHz\n", VAR_4, VAR_5);
 FUNC_2("Standard:        0x%08lx\n", (unsigned long)VAR_3->std);
 if (VAR_3->mode != 128)
  return;
 if (VAR_6->get_status) {
  u32 VAR_9;

  VAR_6->get_status(&VAR_3->fe, &VAR_9);
  if (VAR_9 & VAR_0)
   FUNC_2("Tuner is locked.\n");
  if (VAR_9 & VAR_1)
   FUNC_2("Stereo:          yes\n");
 }
 if (VAR_7->has_signal)
  FUNC_2("Signal strength: %d\n",
      VAR_7->has_signal(VAR_2));
}
