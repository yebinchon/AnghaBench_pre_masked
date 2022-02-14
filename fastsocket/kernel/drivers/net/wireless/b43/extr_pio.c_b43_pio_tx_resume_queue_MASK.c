
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_pio_txqueue {int rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_pio_txqueue*,int ) ;
 int FUNC_1 (struct b43_pio_txqueue*,int ) ;
 int FUNC_2 (struct b43_pio_txqueue*,int ,int) ;
 int FUNC_3 (struct b43_pio_txqueue*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43_pio_txqueue *VAR_4)
{
 if (VAR_4->rev >= 8) {
  FUNC_3(VAR_4, VAR_0,
      FUNC_1(VAR_4, VAR_0)
      & ~VAR_1);
 } else {
  FUNC_2(VAR_4, VAR_2,
      FUNC_0(VAR_4, VAR_2)
      & ~VAR_3);
 }
}
