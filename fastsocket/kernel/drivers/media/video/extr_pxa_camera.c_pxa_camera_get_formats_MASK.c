
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct soc_mbus_pixelfmt {int name; int bits_per_sample; } ;
struct soc_camera_format_xlate {int code; struct soc_mbus_pixelfmt const* host_fmt; } ;
struct TYPE_2__ {struct device* parent; } ;
struct soc_camera_device {struct pxa_cam* host_priv; TYPE_1__ dev; } ;
struct pxa_cam {int dummy; } ;
struct device {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct device*,char*,unsigned int,int) ;
 int VAR_2 ;
 struct pxa_cam* FUNC_2 (int,int ) ;
 struct soc_mbus_pixelfmt const* VAR_3 ;
 int FUNC_3 (struct soc_mbus_pixelfmt const*) ;
 int FUNC_4 (struct soc_camera_device*,int ) ;
 struct v4l2_subdev* FUNC_5 (struct soc_camera_device*) ;
 struct soc_mbus_pixelfmt* FUNC_6 (int) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ,unsigned int,int*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct soc_camera_device *VAR_5, unsigned int VAR_6,
      struct soc_camera_format_xlate *VAR_7)
{
 struct v4l2_subdev *VAR_8 = FUNC_5(VAR_5);
 struct device *VAR_9 = VAR_5->dev.parent;
 int VAR_10 = 0, VAR_11;
 struct pxa_cam *VAR_12;
 enum v4l2_mbus_pixelcode VAR_13;
 const struct soc_mbus_pixelfmt *VAR_14;

 VAR_11 = FUNC_7(VAR_8, VAR_4, VAR_2, VAR_6, &VAR_13);
 if (VAR_11 < 0)

  return 0;

 VAR_14 = FUNC_6(VAR_13);
 if (!VAR_14) {
  FUNC_1(VAR_9, "Invalid format code #%u: %d\n", VAR_6, VAR_13);
  return 0;
 }


 VAR_11 = FUNC_4(VAR_5, VAR_14->bits_per_sample);
 if (VAR_11 < 0)
  return 0;

 if (!VAR_5->host_priv) {
  VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;

  VAR_5->host_priv = VAR_12;
 } else {
  VAR_12 = VAR_5->host_priv;
 }

 switch (VAR_13) {
 case 131:
  VAR_10++;
  if (VAR_7) {
   VAR_7->host_fmt = &VAR_3[0];
   VAR_7->code = VAR_13;
   VAR_7++;
   FUNC_0(VAR_9, "Providing format %s using code %d\n",
    VAR_3[0].name, VAR_13);
  }
 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
  if (VAR_7)
   FUNC_0(VAR_9, "Providing format %s packed\n",
    VAR_14->name);
  break;
 default:
  if (!FUNC_3(VAR_14))
   return 0;
  if (VAR_7)
   FUNC_0(VAR_9,
    "Providing format %s in pass-through mode\n",
    VAR_14->name);
 }


 VAR_10++;
 if (VAR_7) {
  VAR_7->host_fmt = VAR_14;
  VAR_7->code = VAR_13;
  VAR_7++;
 }

 return VAR_10;
}
