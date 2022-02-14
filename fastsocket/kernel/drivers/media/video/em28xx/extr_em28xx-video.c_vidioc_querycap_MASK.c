
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_3__ {scalar_t__ has_audio; } ;
struct em28xx {size_t model; scalar_t__ tuner_type; TYPE_1__ audio_mode; scalar_t__ vbi_dev; int udev; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_10, void *VAR_11,
     struct v4l2_capability *VAR_12)
{
 struct em28xx_fh *VAR_13 = VAR_11;
 struct em28xx *VAR_14 = VAR_13->dev;

 FUNC_0(VAR_12->driver, "em28xx", sizeof(VAR_12->driver));
 FUNC_0(VAR_12->card, VAR_9[VAR_14->model].name, sizeof(VAR_12->card));
 FUNC_1(VAR_14->udev, VAR_12->bus_info, sizeof(VAR_12->bus_info));

 VAR_12->version = VAR_0;

 VAR_12->capabilities =
   VAR_4 |
   VAR_8 |
   VAR_3 | VAR_5;

 if (VAR_14->vbi_dev)
  VAR_12->capabilities |= VAR_7;

 if (VAR_14->audio_mode.has_audio)
  VAR_12->capabilities |= VAR_2;

 if (VAR_14->tuner_type != VAR_1)
  VAR_12->capabilities |= VAR_6;

 return 0;
}
