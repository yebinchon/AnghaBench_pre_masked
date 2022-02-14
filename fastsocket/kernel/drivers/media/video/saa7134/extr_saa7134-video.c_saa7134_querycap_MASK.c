
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {unsigned int tuner_type; size_t board; scalar_t__ has_rds; int pci; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_12, void *VAR_13,
     struct v4l2_capability *VAR_14)
{
 struct saa7134_fh *VAR_15 = VAR_13;
 struct saa7134_dev *VAR_16 = VAR_15->dev;

 unsigned int VAR_17 = VAR_16->tuner_type;

 FUNC_2(VAR_14->driver, "saa7134");
 FUNC_3(VAR_14->card, VAR_10[VAR_16->board].name,
  sizeof(VAR_14->card));
 FUNC_1(VAR_14->bus_info, "PCI:%s", FUNC_0(VAR_16->pci));
 VAR_14->version = VAR_0;
 VAR_14->capabilities =
  VAR_8 |
  VAR_7 |
  VAR_4 |
  VAR_5 |
  VAR_6;
 if (VAR_16->has_rds)
  VAR_14->capabilities |= VAR_3;
 if (VAR_11 <= 0)
  VAR_14->capabilities |= VAR_9;

 if ((VAR_17 == VAR_1) || (VAR_17 == VAR_2))
  VAR_14->capabilities &= ~VAR_6;
 return 0;
}
