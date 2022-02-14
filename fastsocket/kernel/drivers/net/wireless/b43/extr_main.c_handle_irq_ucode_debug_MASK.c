
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int opensource; } ;
struct b43_wldev {int wl; TYPE_1__ fw; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ,unsigned int) ;
 int FUNC_2 (struct b43_wldev*,int ,unsigned int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (char*,char*,int ,int,int,int *,int,int) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_10)
{
 unsigned int VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 __le16 *VAR_16;


 if (!VAR_10->fw.opensource)
  return;


 VAR_13 = FUNC_1(VAR_10, VAR_5, VAR_2);

 switch (VAR_13) {
 case 128:
  FUNC_0(VAR_10);
  break;
 case 130:
  if (!VAR_0)
   break;
  VAR_16 = FUNC_7(4096, VAR_8);
  if (!VAR_16) {
   FUNC_3(VAR_10->wl, "SHM-dump: Failed to allocate memory\n");
   goto out;
  }
  for (VAR_11 = 0; VAR_11 < 4096; VAR_11 += 2) {
   u16 VAR_17 = FUNC_1(VAR_10, VAR_6, VAR_11);
   VAR_16[VAR_11 / 2] = FUNC_5(VAR_17);
  }
  FUNC_4(VAR_10->wl, "Shared memory dump:\n");
  FUNC_8(VAR_9, "", VAR_7,
          16, 2, VAR_16, 4096, 1);
  FUNC_6(VAR_16);
  break;
 case 131:
  if (!VAR_0)
   break;
  FUNC_4(VAR_10->wl, "Microcode register dump:\n");
  for (VAR_11 = 0, VAR_12 = 0; VAR_11 < 64; VAR_11++) {
   u16 VAR_18 = FUNC_1(VAR_10, VAR_5, VAR_11);
   if (VAR_12 == 0)
    FUNC_9(VAR_9);
   FUNC_9("r%02u: 0x%04X  ", VAR_11, VAR_18);
   VAR_12++;
   if (VAR_12 == 6) {
    FUNC_9("\n");
    VAR_12 = 0;
   }
  }
  FUNC_9("\n");
  break;
 case 129:
  if (!VAR_0)
   break;
  VAR_14 = FUNC_1(VAR_10, VAR_5,
        VAR_3);
  VAR_15 = FUNC_1(VAR_10, VAR_5,
          VAR_4);
  FUNC_4(VAR_10->wl, "The firmware just executed the MARKER(%u) "
   "at line number %u\n",
   VAR_14, VAR_15);
  break;
 default:
  FUNC_3(VAR_10->wl, "Debug-IRQ triggered for unknown reason: %u\n",
         VAR_13);
 }
out:

 FUNC_2(VAR_10, VAR_5,
   VAR_2, VAR_1);
}
