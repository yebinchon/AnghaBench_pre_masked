
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_dmaring {scalar_t__ type; int mmio_base; int dev; scalar_t__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct b43_dmaring*,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct b43_dmaring *VAR_7)
{
 if (VAR_7->tx) {
  FUNC_2(VAR_7->dev, VAR_7->mmio_base,
        VAR_7->type);
  if (VAR_7->type == VAR_6) {
   FUNC_0(VAR_7, VAR_5, 0);
   FUNC_0(VAR_7, VAR_4, 0);
  } else
   FUNC_0(VAR_7, VAR_1, 0);
 } else {
  FUNC_1(VAR_7->dev, VAR_7->mmio_base,
        VAR_7->type);
  if (VAR_7->type == VAR_6) {
   FUNC_0(VAR_7, VAR_3, 0);
   FUNC_0(VAR_7, VAR_2, 0);
  } else
   FUNC_0(VAR_7, VAR_0, 0);
 }
}
