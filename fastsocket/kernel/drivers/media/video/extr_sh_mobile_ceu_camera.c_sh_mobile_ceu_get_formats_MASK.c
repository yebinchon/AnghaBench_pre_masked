
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_camera_format_xlate {int buswidth; TYPE_2__* cam_fmt; TYPE_2__* host_fmt; } ;
struct TYPE_4__ {struct device* parent; } ;
struct soc_camera_device {TYPE_2__* formats; struct sh_mobile_ceu_cam* host_priv; TYPE_1__ dev; } ;
struct sh_mobile_ceu_cam {int * extra_fmt; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int fourcc; int name; int depth; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (struct device*,char*,int ,...) ;
 struct sh_mobile_ceu_cam* FUNC_2 (int,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_3, int VAR_4,
         struct soc_camera_format_xlate *VAR_5)
{
 struct device *VAR_6 = VAR_3->dev.parent;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 struct sh_mobile_ceu_cam *VAR_11;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 < 0)
  return 0;

 if (!VAR_3->host_priv) {
  VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   return -VAR_0;

  VAR_3->host_priv = VAR_11;
 } else {
  VAR_11 = VAR_3->host_priv;
 }


 if (!VAR_4)
  VAR_11->extra_fmt = ((void*)0);

 switch (VAR_3->formats[VAR_4].fourcc) {
 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_11->extra_fmt)
   goto add_single_format;
  VAR_11->extra_fmt = (void *)VAR_2;

  VAR_9 = FUNC_0(VAR_2);
  VAR_10 += VAR_9;
  for (VAR_8 = 0; VAR_5 && VAR_8 < VAR_9; VAR_8++) {
   VAR_5->host_fmt = &VAR_2[VAR_8];
   VAR_5->cam_fmt = VAR_3->formats + VAR_4;
   VAR_5->buswidth = VAR_3->formats[VAR_4].depth;
   VAR_5++;
   FUNC_1(VAR_6, "Providing format %s using %s\n",
    VAR_2[VAR_8].name,
    VAR_3->formats[VAR_4].name);
  }
 default:
add_single_format:

  VAR_10++;
  if (VAR_5) {
   VAR_5->host_fmt = VAR_3->formats + VAR_4;
   VAR_5->cam_fmt = VAR_3->formats + VAR_4;
   VAR_5->buswidth = VAR_3->formats[VAR_4].depth;
   VAR_5++;
   FUNC_1(VAR_6,
    "Providing format %s in pass-through mode\n",
    VAR_3->formats[VAR_4].name);
  }
 }

 return VAR_10;
}
