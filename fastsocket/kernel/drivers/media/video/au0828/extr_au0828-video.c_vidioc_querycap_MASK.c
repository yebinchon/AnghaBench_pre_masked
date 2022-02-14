
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct TYPE_3__ {char* name; } ;
struct TYPE_4__ {char* name; } ;
struct au0828_dev {TYPE_1__ v4l2_dev; TYPE_2__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
      struct v4l2_capability *VAR_9)
{
 struct au0828_fh *VAR_10 = VAR_8;
 struct au0828_dev *VAR_11 = VAR_10->dev;

 FUNC_0(VAR_9->driver, "au0828", sizeof(VAR_9->driver));
 FUNC_0(VAR_9->card, VAR_11->board.name, sizeof(VAR_9->card));
 FUNC_0(VAR_9->bus_info, VAR_11->v4l2_dev.name, sizeof(VAR_9->bus_info));

 VAR_9->version = VAR_0;


 VAR_9->capabilities = VAR_6 |
  VAR_5 |
  VAR_1 |
  VAR_2 |
  VAR_3 |
  VAR_4;
 return 0;
}
