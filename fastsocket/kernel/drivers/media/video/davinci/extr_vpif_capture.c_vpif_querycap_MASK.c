
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_capture_config {char* card_name; } ;
struct v4l2_capability {int capabilities; int card; int bus_info; int driver; int version; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpif_capture_config* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_capability *VAR_6)
{
 struct vpif_capture_config *VAR_7 = VAR_3->platform_data;

 VAR_6->version = VAR_2;
 VAR_6->capabilities = VAR_1 | VAR_0;
 FUNC_0(VAR_6->driver, "vpif capture", sizeof(VAR_6->driver));
 FUNC_0(VAR_6->bus_info, "DM646x Platform", sizeof(VAR_6->bus_info));
 FUNC_0(VAR_6->card, VAR_7->card_name, sizeof(VAR_6->card));

 return 0;
}
