
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; struct v4l2_capability* bus_info; int card; int driver; } ;
struct TYPE_5__ {int sensor_flags; } ;
struct TYPE_4__ {int product; int device_type; } ;
struct TYPE_6__ {TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {int dev; TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct v4l2_capability*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,struct v4l2_capability*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_6, struct camera_data *VAR_7)
{
 struct v4l2_capability *VAR_8 = VAR_6;

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));
 FUNC_3(VAR_8->driver, "cpia2");

 if (VAR_7->params.pnp_id.product == 0x151)
  FUNC_3(VAR_8->card, "QX5 Microscope");
 else
  FUNC_3(VAR_8->card, "CPiA2 Camera");
 switch (VAR_7->params.pnp_id.device_type) {
 case 129:
  FUNC_2(VAR_8->card, " (672/");
  break;
 case 128:
  FUNC_2(VAR_8->card, " (676/");
  break;
 default:
  FUNC_2(VAR_8->card, " (???/");
  break;
 }
 switch (VAR_7->params.version.sensor_flags) {
 case 134:
  FUNC_2(VAR_8->card, "404)");
  break;
 case 133:
  FUNC_2(VAR_8->card, "407)");
  break;
 case 132:
  FUNC_2(VAR_8->card, "409)");
  break;
 case 131:
  FUNC_2(VAR_8->card, "410)");
  break;
 case 130:
  FUNC_2(VAR_8->card, "500)");
  break;
 default:
  FUNC_2(VAR_8->card, "???)");
  break;
 }

 if (FUNC_4(VAR_7->dev, VAR_8->bus_info, sizeof(VAR_8->bus_info)) <0)
  FUNC_1(VAR_8->bus_info,0, sizeof(VAR_8->bus_info));

 VAR_8->version = FUNC_0(VAR_0, VAR_1,
         VAR_2);

 VAR_8->capabilities = VAR_5 |
      VAR_3 |
      VAR_4;

 return 0;
}
