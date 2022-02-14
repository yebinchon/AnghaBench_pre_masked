
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct hexium {scalar_t__ cur_input; int video_dev; } ;
struct TYPE_4__ {int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_dev*) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_4 (struct saa7146_dev*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct saa7146_dev *VAR_6, struct saa7146_pci_extension_data *VAR_7)
{
 struct hexium *VAR_8 = (struct hexium *) VAR_6->ext_priv;

 FUNC_0((".\n"));

 FUNC_4(VAR_6, &VAR_5);
 VAR_5.ops.vidioc_enum_input = VAR_2;
 VAR_5.ops.vidioc_g_input = VAR_3;
 VAR_5.ops.vidioc_s_input = VAR_4;
 if (0 != FUNC_3(&VAR_8->video_dev, VAR_6, "hexium orion", VAR_0)) {
  FUNC_2("hexium_orion: cannot register capture v4l2 device. skipping.\n");
  return -1;
 }

 FUNC_2("hexium_orion: found 'hexium orion' frame grabber-%d.\n", VAR_1);
 VAR_1++;


 VAR_8->cur_input = 0;
 FUNC_1(VAR_6);

 return 0;
}
