
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_host {int dummy; } ;
struct soc_camera_format_xlate {int buswidth; TYPE_2__* cam_fmt; TYPE_2__* host_fmt; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_2__* formats; TYPE_1__ dev; } ;
struct TYPE_4__ {int depth; int fourcc; int name; } ;




 int FUNC_0 (struct soc_camera_host*,int) ;
 int FUNC_1 (int ,char*,int ,...) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct soc_camera_device*,int) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_1, int VAR_2,
      struct soc_camera_format_xlate *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_3(VAR_1->dev.parent);
 int VAR_5 = 0, VAR_6, VAR_7;

 VAR_6 = VAR_1->formats[VAR_2].depth;

 if (!FUNC_0(VAR_4, VAR_6))
  return 0;

 VAR_7 = FUNC_2(VAR_1, VAR_6);
 if (VAR_7 < 0)
  return 0;

 switch (VAR_1->formats[VAR_2].fourcc) {
 case 129:
  VAR_5++;
  if (VAR_3) {
   VAR_3->host_fmt = &VAR_0[0];
   VAR_3->cam_fmt = VAR_1->formats + VAR_2;
   VAR_3->buswidth = VAR_6;
   VAR_3++;
   FUNC_1(VAR_1->dev.parent,
    "Providing format %s using %s\n",
    VAR_0[0].name,
    VAR_1->formats[VAR_2].name);
  }
  goto passthrough;
 case 128:
  VAR_5++;
  if (VAR_3) {
   VAR_3->host_fmt = &VAR_0[1];
   VAR_3->cam_fmt = VAR_1->formats + VAR_2;
   VAR_3->buswidth = VAR_6;
   VAR_3++;
   FUNC_1(VAR_1->dev.parent,
    "Providing format %s using %s\n",
    VAR_0[0].name,
    VAR_1->formats[VAR_2].name);
  }
 default:
passthrough:

  VAR_5++;
  if (VAR_3) {
   VAR_3->host_fmt = VAR_1->formats + VAR_2;
   VAR_3->cam_fmt = VAR_1->formats + VAR_2;
   VAR_3->buswidth = VAR_6;
   VAR_3++;
   FUNC_1(VAR_1->dev.parent,
    "Providing format %s in pass-through mode\n",
    VAR_1->formats[VAR_2].name);
  }
 }

 return VAR_5;
}
