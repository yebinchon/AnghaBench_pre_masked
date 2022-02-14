
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; scalar_t__ version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mchip_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_capability *VAR_7)
{
 FUNC_2(VAR_7->driver, "meye");
 FUNC_2(VAR_7->card, "meye");
 FUNC_1(VAR_7->bus_info, "PCI:%s", FUNC_0(VAR_4.mchip_dev));

 VAR_7->version = (VAR_0 << 8) +
         VAR_1;

 VAR_7->capabilities = VAR_3 |
       VAR_2;

 return 0;
}
