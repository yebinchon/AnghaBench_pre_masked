
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct TYPE_4__ {int pci; } ;
struct bttv {scalar_t__ tuner_type; scalar_t__ has_saa6588; TYPE_2__ c; TYPE_1__* video_dev; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_12, void *VAR_13,
    struct v4l2_capability *VAR_14)
{
 struct bttv_fh *VAR_15 = VAR_13;
 struct bttv *VAR_16 = VAR_15->btv;

 if (0 == VAR_11)
  return -VAR_1;

 FUNC_2(VAR_14->driver, "bttv", sizeof(VAR_14->driver));
 FUNC_2(VAR_14->card, VAR_16->video_dev->name, sizeof(VAR_14->card));
 FUNC_1(VAR_14->bus_info, sizeof(VAR_14->bus_info),
   "PCI:%s", FUNC_0(VAR_16->c.pci));
 VAR_14->version = VAR_0;
 VAR_14->capabilities =
  VAR_8 |
  VAR_7 |
  VAR_4 |
  VAR_5;
 if (VAR_10 <= 0)
  VAR_14->capabilities |= VAR_9;





 if (VAR_16->has_saa6588)
  VAR_14->capabilities |= VAR_3;
 if (VAR_16->tuner_type != VAR_2)
  VAR_14->capabilities |= VAR_6;
 return 0;
}
