
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ bar; } ;
struct nvc0_fifo_priv {int spoon_nr; TYPE_2__ user; int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvc0_fifo_priv*,char*,int) ;
 int FUNC_3 (struct nvc0_fifo_priv*,int,int,int) ;
 int FUNC_4 (struct nvc0_fifo_priv*,int) ;
 int FUNC_5 (struct nvc0_fifo_priv*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_0)
{
 struct nvc0_fifo_priv *VAR_1 = (void *)VAR_0;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_5(VAR_1, 0x000204, 0xffffffff);
 FUNC_5(VAR_1, 0x002204, 0xffffffff);

 VAR_1->spoon_nr = FUNC_0(FUNC_4(VAR_1, 0x002204));
 FUNC_2(VAR_1, "%d subfifo(s)\n", VAR_1->spoon_nr);


 if (VAR_1->spoon_nr >= 3) {
  FUNC_5(VAR_1, 0x002208, ~(1 << 0));
  FUNC_5(VAR_1, 0x00220c, ~(1 << 1));
  FUNC_5(VAR_1, 0x002210, ~(1 << 1));
  FUNC_5(VAR_1, 0x002214, ~(1 << 1));
  FUNC_5(VAR_1, 0x002218, ~(1 << 2));
  FUNC_5(VAR_1, 0x00221c, ~(1 << 1));
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->spoon_nr; VAR_3++) {
  FUNC_3(VAR_1, 0x04013c + (VAR_3 * 0x2000), 0x10000100, 0x00000000);
  FUNC_5(VAR_1, 0x040108 + (VAR_3 * 0x2000), 0xffffffff);
  FUNC_5(VAR_1, 0x04010c + (VAR_3 * 0x2000), 0xfffffeff);
 }

 FUNC_3(VAR_1, 0x002200, 0x00000001, 0x00000001);
 FUNC_5(VAR_1, 0x002254, 0x10000000 | VAR_1->user.bar.offset >> 12);

 FUNC_5(VAR_1, 0x002a00, 0xffffffff);
 FUNC_5(VAR_1, 0x002100, 0xffffffff);
 FUNC_5(VAR_1, 0x002140, 0x3fffffff);
 FUNC_5(VAR_1, 0x002628, 0x00000001);
 return 0;
}
