
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_mxm {int dummy; } ;
struct TYPE_2__ {scalar_t__ debug; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct nouveau_mxm*) ;
 int FUNC_2 (struct nouveau_mxm*) ;
 int FUNC_3 (struct nouveau_mxm*) ;
 int FUNC_4 (struct nouveau_mxm*) ;
 int FUNC_5 (struct nouveau_mxm*,char*,...) ;
 TYPE_1__* FUNC_6 (struct nouveau_mxm*) ;
 int FUNC_7 (char*,...) ;

bool
FUNC_8(struct nouveau_mxm *VAR_1, u8 VAR_2,
      bool (*VAR_3)(struct nouveau_mxm *, u8 *, void *), void *VAR_4)
{
 u8 *VAR_5 = FUNC_1(VAR_1);
 u8 *VAR_6 = VAR_5 + FUNC_2(VAR_1);
 u8 *VAR_7 = VAR_6 + FUNC_3(VAR_1) - 1;
 while (VAR_6 < VAR_7) {
  u8 VAR_8 = VAR_6[0] & 0x0f;
  u8 VAR_9 = 0;
  u8 VAR_10 = 0;
  u8 VAR_11 = 0;

  switch (VAR_8) {
  case 0:
   if (FUNC_4(VAR_1) >= 0x0300)
    VAR_9 = 8;
   else
    VAR_9 = 6;
   break;
  case 1:
  case 2:
  case 3:
   VAR_9 = 4;
   break;
  case 4:
   VAR_9 = 4;
   VAR_10 = 2;
   VAR_11 = (FUNC_0(VAR_6[0]) & 0x01f00000) >> 20;
   break;
  case 5:
   VAR_9 = 8;
   break;
  case 6:
   if (FUNC_4(VAR_1) >= 0x0300) {
    VAR_9 = 4;
    VAR_10 = 8;
    VAR_11 = (VAR_6[1] & 0xf0) >> 4;
   } else {
    VAR_9 = 8;
   }
   break;
  case 7:
   VAR_9 = 8;
   VAR_10 = 4;
   VAR_11 = VAR_6[1] & 0x07;
   break;
  default:
   FUNC_5(VAR_1, "unknown descriptor type %d\n", VAR_8);
   return 0;
  }

  if (FUNC_6(VAR_1)->debug >= VAR_0 && (VAR_3 == ((void*)0))) {
   static const char * VAR_12[] = {
    "ODS", "SCCS", "TS", "IPS",
    "GSD", "VSS", "BCS", "FCS",
   };
   u8 *VAR_13 = VAR_6;
   int VAR_14, VAR_15;

   FUNC_5(VAR_1, "%4s: ", VAR_12[VAR_8]);
   for (VAR_15 = VAR_9 - 1; VAR_15 >= 0; VAR_15--)
    FUNC_7("%02x", VAR_13[VAR_15]);
   FUNC_7("\n");
   VAR_13 += VAR_9;

   for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++, VAR_13 += VAR_10) {
    FUNC_5(VAR_1, "      ");
    for (VAR_15 = VAR_10 - 1; VAR_15 >= 0; VAR_15--)
     FUNC_7("%02x", VAR_13[VAR_15]);
    FUNC_7("\n");
   }
  }

  if (VAR_2 & (1 << VAR_8)) {
   if (!VAR_3(VAR_1, VAR_6, VAR_4))
    return 0;
  }

  VAR_6 += VAR_9 + (VAR_11 * VAR_10);
 }

 return 1;
}
