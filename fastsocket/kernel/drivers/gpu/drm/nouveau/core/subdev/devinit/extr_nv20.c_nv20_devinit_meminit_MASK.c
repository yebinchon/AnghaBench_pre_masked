
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nv20_devinit_priv {int dummy; } ;
struct nouveau_devinit {int dummy; } ;
struct nouveau_device {int chipset; int pdev; } ;
struct io_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (int ) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 struct nouveau_device* FUNC_4 (struct nv20_devinit_priv*) ;
 int FUNC_5 (struct nv20_devinit_priv*,char*) ;
 int FUNC_6 (struct nv20_devinit_priv*,int ,int,int) ;
 int FUNC_7 (struct nv20_devinit_priv*,int) ;
 int FUNC_8 (struct nv20_devinit_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct nouveau_devinit *VAR_3)
{
 struct nv20_devinit_priv *VAR_4 = (void *)VAR_3;
 struct nouveau_device *VAR_5 = FUNC_4(VAR_4);
 uint32_t VAR_6 = (VAR_5->chipset >= 0x25 ? 0x300 : 0x900);
 uint32_t VAR_7, VAR_8;
 struct io_mapping *VAR_9;


 VAR_9 = FUNC_1(FUNC_4(VAR_4)->pdev);
 if (!VAR_9) {
  FUNC_5(VAR_4, "failed to map fb\n");
  return;
 }

 FUNC_8(VAR_4, VAR_1, VAR_2);


 FUNC_6(VAR_4, VAR_0, 0, VAR_6);

 VAR_7 = FUNC_7(VAR_4, 0x10020c);
 for (VAR_8 = VAR_7; VAR_8 > 0x2000000; VAR_8 -= 0x2000000)
  FUNC_3(VAR_9, VAR_8 - 4, VAR_8);

 VAR_7 = FUNC_7(VAR_4, 0x10020c);
 if (VAR_7 != FUNC_2(VAR_9, VAR_7 - 4))

  FUNC_6(VAR_4, VAR_0, VAR_6, 0);

 FUNC_0(VAR_9);
}
