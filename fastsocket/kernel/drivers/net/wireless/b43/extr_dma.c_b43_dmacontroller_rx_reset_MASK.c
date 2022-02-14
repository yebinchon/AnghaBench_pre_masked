
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {int wl; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct b43_wldev*,scalar_t__) ;
 int FUNC_1 (struct b43_wldev*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct b43_wldev *VAR_10, u16 VAR_11,
          enum b43_dmatype VAR_12)
{
 int VAR_13;
 u32 VAR_14;
 u16 VAR_15;

 FUNC_3();

 VAR_15 = (VAR_12 == VAR_8) ? VAR_4 : VAR_0;
 FUNC_1(VAR_10, VAR_11 + VAR_15, 0);
 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_15 = (VAR_12 == VAR_8) ? VAR_6 :
         VAR_2;
  VAR_14 = FUNC_0(VAR_10, VAR_11 + VAR_15);
  if (VAR_12 == VAR_8) {
   VAR_14 &= VAR_5;
   if (VAR_14 == VAR_7) {
    VAR_13 = -1;
    break;
   }
  } else {
   VAR_14 &= VAR_1;
   if (VAR_14 == VAR_3) {
    VAR_13 = -1;
    break;
   }
  }
  FUNC_4(1);
 }
 if (VAR_13 != -1) {
  FUNC_2(VAR_10->wl, "DMA RX reset timed out\n");
  return -VAR_9;
 }

 return 0;
}
