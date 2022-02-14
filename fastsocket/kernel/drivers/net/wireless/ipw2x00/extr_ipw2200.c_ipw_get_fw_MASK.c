
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_priv {TYPE_1__* pci_dev; } ;
struct ipw_fw {int ver; int fw_size; int ucode_size; int boot_size; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int,int,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_1,
        const struct firmware **VAR_2, const char *VAR_3)
{
 struct ipw_fw *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_3(VAR_2, VAR_3, &VAR_1->pci_dev->dev);
 if (VAR_5 < 0) {
  FUNC_1("%s request_firmware failed: Reason %d\n", VAR_3, VAR_5);
  return VAR_5;
 }

 if ((*VAR_2)->size < sizeof(*VAR_4)) {
  FUNC_1("%s is too small (%zd)\n", VAR_3, (*VAR_2)->size);
  return -VAR_0;
 }

 VAR_4 = (void *)(*VAR_2)->data;

 if ((*VAR_2)->size < sizeof(*VAR_4) + FUNC_2(VAR_4->boot_size) +
     FUNC_2(VAR_4->ucode_size) + FUNC_2(VAR_4->fw_size)) {
  FUNC_1("%s is too small or corrupt (%zd)\n",
     VAR_3, (*VAR_2)->size);
  return -VAR_0;
 }

 FUNC_0("Read firmware '%s' image v%d.%d (%zd bytes)\n",
         VAR_3,
         FUNC_2(VAR_4->ver) >> 16,
         FUNC_2(VAR_4->ver) & 0xff,
         (*VAR_2)->size - sizeof(*VAR_4));
 return 0;
}
