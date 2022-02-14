
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long data; int function; } ;
struct TYPE_5__ {struct saa7134_dev* dev; TYPE_3__ timeout; int queue; } ;
struct saa7134_dev {int ctl_mute; size_t board; TYPE_1__ video_q; scalar_t__ automute; int tda9887_conf; scalar_t__ ctl_automute; scalar_t__ ctl_invert; scalar_t__ ctl_volume; scalar_t__ ctl_saturation; scalar_t__ ctl_hue; scalar_t__ ctl_contrast; scalar_t__ ctl_bright; } ;
struct TYPE_8__ {scalar_t__ default_value; } ;
struct TYPE_6__ {scalar_t__ video_out; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct saa7134_dev*) ;

int FUNC_4(struct saa7134_dev *VAR_16)
{

 if (VAR_11 < 2 || VAR_11 > VAR_10)
  VAR_11 = 2;
 if (VAR_12 < 0 || VAR_12 > VAR_13)
  VAR_12 = VAR_13;
 VAR_12 = (VAR_12 + VAR_1 - 1) & VAR_0;


 VAR_16->ctl_bright = FUNC_1(VAR_4)->default_value;
 VAR_16->ctl_contrast = FUNC_1(VAR_5)->default_value;
 VAR_16->ctl_hue = FUNC_1(VAR_6)->default_value;
 VAR_16->ctl_saturation = FUNC_1(VAR_9)->default_value;
 VAR_16->ctl_volume = FUNC_1(VAR_3)->default_value;
 VAR_16->ctl_mute = 1;
 VAR_16->ctl_invert = FUNC_1(VAR_8)->default_value;
 VAR_16->ctl_automute = FUNC_1(VAR_7)->default_value;

 if (VAR_16->tda9887_conf && VAR_16->ctl_automute)
  VAR_16->tda9887_conf |= VAR_2;
 VAR_16->automute = 0;

 FUNC_0(&VAR_16->video_q.queue);
 FUNC_2(&VAR_16->video_q.timeout);
 VAR_16->video_q.timeout.function = VAR_15;
 VAR_16->video_q.timeout.data = (unsigned long)(&VAR_16->video_q);
 VAR_16->video_q.dev = VAR_16;

 if (VAR_14[VAR_16->board].video_out)
  FUNC_3(VAR_16);

 return 0;
}
