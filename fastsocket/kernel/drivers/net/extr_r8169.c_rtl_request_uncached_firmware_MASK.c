
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_fw {int fw; } ;
struct rtl8169_private {struct rtl_fw* rtl_fw; int dev; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_fw*) ;
 struct rtl_fw* FUNC_1 (int,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int ,char*,char const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (struct rtl8169_private*,struct rtl_fw*) ;
 char* FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_7(struct rtl8169_private *VAR_3)
{
 struct rtl_fw *VAR_4;
 const char *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5)
  goto out_no_firmware;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto err_warn;

 VAR_6 = FUNC_4(&VAR_4->fw, VAR_5, &VAR_3->pci_dev->dev);
 if (VAR_6 < 0)
  goto err_free;

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (VAR_6 < 0)
  goto err_release_firmware;

 VAR_3->rtl_fw = VAR_4;
out:
 return;

err_release_firmware:
 FUNC_3(VAR_4->fw);
err_free:
 FUNC_0(VAR_4);
err_warn:
 FUNC_2(VAR_3, VAR_2, VAR_3->dev, "unable to load firmware patch %s (%d)\n",
     VAR_5, VAR_6);
out_no_firmware:
 VAR_3->rtl_fw = ((void*)0);
 goto out;
}
