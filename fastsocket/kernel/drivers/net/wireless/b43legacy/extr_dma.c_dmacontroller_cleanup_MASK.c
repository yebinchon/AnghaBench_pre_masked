
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dmaring {int type; int mmio_base; int dev; scalar_t__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_dmaring*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_dmaring *VAR_2)
{
 if (VAR_2->tx) {
  FUNC_2(VAR_2->dev, VAR_2->mmio_base,
       VAR_2->type);
  FUNC_0(VAR_2, VAR_1, 0);
 } else {
  FUNC_1(VAR_2->dev, VAR_2->mmio_base,
       VAR_2->type);
  FUNC_0(VAR_2, VAR_0, 0);
 }
}
