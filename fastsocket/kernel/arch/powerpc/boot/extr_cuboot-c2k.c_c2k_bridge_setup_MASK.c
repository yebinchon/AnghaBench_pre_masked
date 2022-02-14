
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct mv64x60_cpu2pci_win {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (void*,int*,int,unsigned long*) ;
 int FUNC_1 (char*,...) ;
 void* FUNC_2 (char*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (void*,char*,int*,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (scalar_t__,int,int,int,unsigned long,int,struct mv64x60_cpu2pci_win*) ;
 int FUNC_7 (scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__*,int,int ,int,int) ;
 struct mv64x60_cpu2pci_win* VAR_9 ;
 struct mv64x60_cpu2pci_win* VAR_10 ;
 scalar_t__* FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(u32 VAR_11)
{
 u32 VAR_12, VAR_13[30], VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19[2];
 unsigned long VAR_20;
 int VAR_21;
 void *VAR_22, *VAR_23;
 u8 *VAR_24, VAR_25;
 struct mv64x60_cpu2pci_win *VAR_26;
 int VAR_27;

 VAR_24 = FUNC_9();
 VAR_25 = FUNC_10();

 if (VAR_25)
  VAR_15 = VAR_6
   | VAR_7
   | VAR_2
   | VAR_4;
 else
  VAR_15 = VAR_5
   | VAR_7
   | VAR_1
   | VAR_3;

 FUNC_7(VAR_8, VAR_24, VAR_25);
 VAR_23 = FUNC_3(((void*)0), "marvell,mv64360");
 if (VAR_23 == ((void*)0))
  FUNC_1("Error: Missing marvell,mv64360 device tree node\n\r");

 VAR_14 = FUNC_5((u32 *)(VAR_8 + VAR_0));
 VAR_14 |= 0x007ffe00;
 FUNC_11((u32 *)(VAR_8 + VAR_0), VAR_14);


 VAR_22 = ((void*)0);
 for (VAR_27 = 0; ; VAR_27++) {
  char VAR_28[] = "pci ";

  VAR_28[FUNC_12(VAR_28)-1] = VAR_27+'0';

  VAR_22 = FUNC_2(VAR_28);
  if (VAR_22 == ((void*)0))
   break;

  if (VAR_27 >= 2)
   FUNC_1("Error: Only 2 PCI controllers are supported at" " this time.\n");


  FUNC_8(VAR_8, VAR_24, VAR_27, 0,
    VAR_11, VAR_15);

  VAR_21 = FUNC_4(VAR_22, "ranges", VAR_13, sizeof(VAR_13));
  if (VAR_21 == 0)
   FUNC_1("Error: Can't find marvell,mv64360-pci ranges"
    " property\n\r");



  for (VAR_12 = 0; VAR_12 < VAR_21; VAR_12 += 6) {
   switch (VAR_13[VAR_12] & 0xff000000) {
   case 0x01000000:
    VAR_26 = VAR_9;
    break;
   case 0x02000000:
    VAR_26 = VAR_10;
    break;
   default:
    continue;
   }

   VAR_16 = VAR_13[VAR_12+1];
   VAR_17 = VAR_13[VAR_12+2];
   VAR_20 = VAR_13[VAR_12+3];
   VAR_18 = VAR_13[VAR_12+5];

   VAR_19[0] = VAR_20;
   VAR_19[1] = VAR_18;

   if (!FUNC_0(VAR_22, VAR_19, sizeof(VAR_19), &VAR_20))
    FUNC_1("Error: Can't translate PCI address " "0x%x\n\r", (u32)VAR_20);


   FUNC_6(VAR_8, VAR_27,
    VAR_16, VAR_17, VAR_20, VAR_18, VAR_26);
  }

  VAR_14 &= ~(3<<(9+VAR_27*5));

  FUNC_11((u32 *)(VAR_8 + VAR_0),
   VAR_14);
 };
}
