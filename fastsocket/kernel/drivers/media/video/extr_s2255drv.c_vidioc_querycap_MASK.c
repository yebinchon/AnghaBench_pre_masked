
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct s2255_fh {struct s2255_dev* dev; } ;
struct s2255_dev {int udev; } ;
struct file {struct s2255_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
      struct v4l2_capability *VAR_5)
{
 struct s2255_fh *VAR_6 = VAR_3->private_data;
 struct s2255_dev *VAR_7 = VAR_6->dev;
 FUNC_0(VAR_5->driver, "s2255", sizeof(VAR_5->driver));
 FUNC_0(VAR_5->card, "s2255", sizeof(VAR_5->card));
 FUNC_1(VAR_7->udev, VAR_5->bus_info, sizeof(VAR_5->bus_info));
 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_2 | VAR_1;
 return 0;
}
