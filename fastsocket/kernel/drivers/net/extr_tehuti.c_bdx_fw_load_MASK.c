
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {int size; scalar_t__ data; } ;
struct bdx_priv {TYPE_2__* ndev; TYPE_1__* pdev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bdx_priv*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bdx_priv*,int ,int) ;
 int FUNC_5 (struct bdx_priv*,char*,int ) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct bdx_priv *VAR_6)
{
 const struct firmware *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;
 int VAR_10;

 VAR_1;
 VAR_8 = FUNC_2(VAR_6, VAR_2);
 if (!FUNC_2(VAR_6, VAR_3) && VAR_8) {
  VAR_10 = FUNC_8(&VAR_7, "tehuti/firmware.bin", &VAR_6->pdev->dev);
  if (VAR_10)
   goto out;
  FUNC_5(VAR_6, (char *)VAR_7->data, VAR_7->size);
  FUNC_6(100);
 }
 for (VAR_9 = 0; VAR_9 < 200; VAR_9++) {
  if (FUNC_2(VAR_6, VAR_3)) {
   VAR_10 = 0;
   goto out;
  }
  FUNC_6(2);
 }
 VAR_10 = -VAR_0;
out:
 if (VAR_8)
  FUNC_4(VAR_6, VAR_2, 1);
 if (VAR_7)
  FUNC_7(VAR_7);

 if (VAR_10) {
  FUNC_1("%s: firmware loading failed\n", VAR_6->ndev->name);
  if (VAR_10 == -VAR_0)
   FUNC_0("VPC = 0x%x VIC = 0x%x INIT_STATUS = 0x%x i=%d\n",
       FUNC_2(VAR_6, VAR_5),
       FUNC_2(VAR_6, VAR_4),
       FUNC_2(VAR_6, VAR_3), VAR_9);
  FUNC_3(VAR_10);
 } else {
  FUNC_0("%s: firmware loading success\n", VAR_6->ndev->name);
  FUNC_3(0);
 }
}
