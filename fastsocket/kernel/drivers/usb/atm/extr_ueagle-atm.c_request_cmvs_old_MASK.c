
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uea_softc {TYPE_1__* usb_dev; } ;
struct uea_cmvs_v1 {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct uea_softc*,char*,int) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,int *) ;
 int FUNC_4 (int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct uea_softc *VAR_2,
   void **VAR_3, const struct firmware **VAR_4)
{
 int VAR_5, VAR_6;
 u8 *VAR_7;
 char VAR_8[VAR_1];

 FUNC_1(VAR_2, VAR_8, 1);
 VAR_5 = FUNC_3(VAR_4, VAR_8, &VAR_2->usb_dev->dev);
 if (VAR_5 < 0) {
  FUNC_4(FUNC_0(VAR_2),
         "requesting firmware %s failed with error %d\n",
         VAR_8, VAR_5);
  return VAR_5;
 }

 VAR_7 = (u8 *) (*VAR_4)->data;
 VAR_6 = (*VAR_4)->size;
 if (VAR_6 < 1)
  goto err_fw_corrupted;

 if (VAR_6 != *VAR_7 * sizeof(struct uea_cmvs_v1) + 1)
  goto err_fw_corrupted;

 *VAR_3 = (void *)(VAR_7 + 1);
 return *VAR_7;

err_fw_corrupted:
 FUNC_4(FUNC_0(VAR_2), "firmware %s is corrupted\n", VAR_8);
 FUNC_2(*VAR_4);
 return -VAR_0;
}
