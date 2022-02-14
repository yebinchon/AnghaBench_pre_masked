
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nv10_devinit_priv {int dummy; } ;
struct nouveau_devinit {int dummy; } ;
struct io_mapping {int dummy; } ;
struct TYPE_2__ {int chipset; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (int ) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 TYPE_1__* FUNC_4 (struct nv10_devinit_priv*) ;
 int FUNC_5 (struct nv10_devinit_priv*,char*) ;
 int FUNC_6 (struct nv10_devinit_priv*,int ,int,int const) ;
 int FUNC_7 (struct nv10_devinit_priv*,int) ;
 int FUNC_8 (struct nv10_devinit_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct nouveau_devinit *VAR_3)
{
 struct nv10_devinit_priv *VAR_4 = (void *)VAR_3;
 const int VAR_5[] = { 0x10, 0x00, 0x20 };
 const int VAR_6 = FUNC_4(VAR_4)->chipset >= 0x17 ? 3 : 2;
 uint32_t VAR_7 = 0xdeadbeef;
 struct io_mapping *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 VAR_8 = FUNC_1(FUNC_4(VAR_4)->pdev);
 if (!VAR_8) {
  FUNC_5(VAR_4, "failed to map fb\n");
  return;
 }

 FUNC_8(VAR_4, VAR_1, VAR_2);


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_6(VAR_4, VAR_0, 0x30, VAR_5[VAR_9]);

  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
    FUNC_3(VAR_8, 0x1c, 0);

   FUNC_3(VAR_8, 0x1c, VAR_7);
   FUNC_3(VAR_8, 0x3c, 0);

   if (FUNC_2(VAR_8, 0x1c) == VAR_7)
    goto mem_width_found;
  }
 }

mem_width_found:
 VAR_7 <<= 1;


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  int VAR_12 = FUNC_7(VAR_4, 0x10020c) - 0x100000;

  FUNC_3(VAR_8, VAR_12, VAR_7);
  FUNC_3(VAR_8, 0, 0);

  FUNC_2(VAR_8, 0);
  FUNC_2(VAR_8, 0);
  FUNC_2(VAR_8, 0);
  FUNC_2(VAR_8, 0);

  if (FUNC_2(VAR_8, VAR_12) == VAR_7)
   goto amount_found;
 }


 FUNC_6(VAR_4, VAR_0, 0x1000, 0);

amount_found:
 FUNC_0(VAR_8);
}
