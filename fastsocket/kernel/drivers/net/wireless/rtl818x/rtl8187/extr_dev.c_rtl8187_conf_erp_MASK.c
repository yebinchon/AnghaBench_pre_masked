
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8187_priv {int slot_time; int* aifsn; TYPE_1__* map; scalar_t__ is_rtl8187b; } ;
struct TYPE_2__ {int SIFS; int SLOT; int DIFS; int CARRIER_SENSE_COUNTER; int EIFS; int BRSR; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (struct rtl8187_priv*,int*,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8187_priv *VAR_2, bool VAR_3,
        bool VAR_4)
{
 if (VAR_2->is_rtl8187b) {
  u8 VAR_5, VAR_6;
  u16 VAR_7;
  int VAR_8;

  if (VAR_3) {
   VAR_2->slot_time = 0x9;
   VAR_5 = 0x1c;
   VAR_6 = 0x53;
  } else {
   VAR_2->slot_time = 0x14;
   VAR_5 = 0x32;
   VAR_6 = 0x5b;
  }
  FUNC_1(VAR_2, &VAR_2->map->SIFS, 0x22);
  FUNC_1(VAR_2, &VAR_2->map->SLOT, VAR_2->slot_time);
  FUNC_1(VAR_2, &VAR_2->map->DIFS, VAR_5);





  FUNC_1(VAR_2, (u8 *)&VAR_2->map->BRSR + 1, VAR_6);






  VAR_7 = 112 + 48 + VAR_5;
  if (VAR_4)
   VAR_7 += 72;
  else
   VAR_7 += 144;
  FUNC_1(VAR_2, &VAR_2->map->CARRIER_SENSE_COUNTER,
     FUNC_0(VAR_7, 4));

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   FUNC_1(VAR_2, (u8 *) VAR_1[VAR_8],
      VAR_2->aifsn[VAR_8] * VAR_2->slot_time +
      VAR_0);
 } else {
  FUNC_1(VAR_2, &VAR_2->map->SIFS, 0x22);
  if (VAR_3) {
   FUNC_1(VAR_2, &VAR_2->map->SLOT, 0x9);
   FUNC_1(VAR_2, &VAR_2->map->DIFS, 0x14);
   FUNC_1(VAR_2, &VAR_2->map->EIFS, 91 - 0x14);
  } else {
   FUNC_1(VAR_2, &VAR_2->map->SLOT, 0x14);
   FUNC_1(VAR_2, &VAR_2->map->DIFS, 0x24);
   FUNC_1(VAR_2, &VAR_2->map->EIFS, 91 - 0x24);
  }
 }
}
