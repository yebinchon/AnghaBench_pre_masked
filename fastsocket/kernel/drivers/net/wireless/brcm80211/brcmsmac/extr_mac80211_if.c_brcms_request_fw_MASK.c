
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware_hdr {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int* hdr_num_entries; int fw_cnt; TYPE_1__** fw_hdr; TYPE_1__** fw_bin; } ;
struct brcms_info {int ucode; TYPE_2__ fw; int wiphy; } ;
struct brcms_firmware {int dummy; } ;
struct bcma_device {struct device dev; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (struct brcms_info*) ;
 int FUNC_1 (struct brcms_info*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__**,char*,struct device*) ;
 int FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (int ,char*,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct brcms_info *VAR_4, struct bcma_device *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 char VAR_8[100];
 int VAR_9;

 FUNC_2(&VAR_4->fw, 0, sizeof(struct brcms_firmware));
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_3[VAR_9] == ((void*)0))
   break;
  FUNC_4(VAR_8, "%s-%d.fw", VAR_3[VAR_9],
   VAR_2);
  VAR_6 = FUNC_3(&VAR_4->fw.fw_bin[VAR_9], VAR_8, VAR_7);
  if (VAR_6) {
   FUNC_5(VAR_4->wiphy, "%s: fail to load firmware %s\n",
      VAR_0, VAR_8);
   return VAR_6;
  }
  FUNC_4(VAR_8, "%s_hdr-%d.fw", VAR_3[VAR_9],
   VAR_2);
  VAR_6 = FUNC_3(&VAR_4->fw.fw_hdr[VAR_9], VAR_8, VAR_7);
  if (VAR_6) {
   FUNC_5(VAR_4->wiphy, "%s: fail to load firmware %s\n",
      VAR_0, VAR_8);
   return VAR_6;
  }
  VAR_4->fw.hdr_num_entries[VAR_9] =
      VAR_4->fw.fw_hdr[VAR_9]->size / (sizeof(struct firmware_hdr));
 }
 VAR_4->fw.fw_cnt = VAR_9;
 VAR_6 = FUNC_1(VAR_4, &VAR_4->ucode);
 FUNC_0(VAR_4);
 return VAR_6;
}
