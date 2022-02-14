
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {TYPE_1__* cfg; int v4l2_dev; } ;
struct v4l2_capability {int capabilities; int card; int bus_info; int driver; int version; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* card_name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
          struct v4l2_capability *VAR_7)
{
 struct vpfe_device *VAR_8 = FUNC_2(VAR_5);

 FUNC_1(1, VAR_4, &VAR_8->v4l2_dev, "vpfe_querycap\n");

 VAR_7->version = VAR_3;
 VAR_7->capabilities = VAR_2 | VAR_1;
 FUNC_0(VAR_7->driver, VAR_0, sizeof(VAR_7->driver));
 FUNC_0(VAR_7->bus_info, "VPFE", sizeof(VAR_7->bus_info));
 FUNC_0(VAR_7->card, VAR_8->cfg->card_name, sizeof(VAR_7->card));
 return 0;
}
