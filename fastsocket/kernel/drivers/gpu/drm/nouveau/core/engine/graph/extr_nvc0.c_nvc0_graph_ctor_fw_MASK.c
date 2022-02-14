
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvc0_graph_priv {int dummy; } ;
struct nvc0_graph_fuc {int * data; int size; } ;
struct nouveau_device {int chipset; TYPE_1__* pdev; } ;
struct firmware {int data; int size; } ;
typedef int f ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 struct nouveau_device* FUNC_1 (struct nvc0_graph_priv*) ;
 int FUNC_2 (struct nvc0_graph_priv*,char*,char const*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int *) ;
 int FUNC_5 (char*,int,char*,...) ;

int
FUNC_6(struct nvc0_graph_priv *VAR_2, const char *VAR_3,
     struct nvc0_graph_fuc *VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_1(VAR_2);
 const struct firmware *VAR_6;
 char VAR_7[32];
 int VAR_8;

 FUNC_5(VAR_7, sizeof(VAR_7), "nouveau/nv%02x_%s", VAR_5->chipset, VAR_3);
 VAR_8 = FUNC_4(&VAR_6, VAR_7, &VAR_5->pdev->dev);
 if (VAR_8) {
  FUNC_5(VAR_7, sizeof(VAR_7), "nouveau/%s", VAR_3);
  VAR_8 = FUNC_4(&VAR_6, VAR_7, &VAR_5->pdev->dev);
  if (VAR_8) {
   FUNC_2(VAR_2, "failed to load %s\n", VAR_3);
   return VAR_8;
  }
 }

 VAR_4->size = VAR_6->size;
 VAR_4->data = FUNC_0(VAR_6->data, VAR_4->size, VAR_1);
 FUNC_3(VAR_6);
 return (VAR_4->data != ((void*)0)) ? 0 : -VAR_0;
}
