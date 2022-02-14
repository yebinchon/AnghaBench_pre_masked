
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int regs ;
struct TYPE_2__ {int bi_procfreq; int bi_plb_busfreq; int bi_opbfreq; int bi_pci_busfreq; scalar_t__* bi_enetaddr; scalar_t__* bi_enet1addr; int bi_flashsize; int bi_memsize; int bi_memstart; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*,scalar_t__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (void*,char*,int*,int) ;
 int FUNC_8 (int*,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_12(void)
{
 u32 VAR_3 = FUNC_9(VAR_0) & 0x7f;

 FUNC_4(VAR_2.bi_memstart, VAR_2.bi_memsize);

 FUNC_2(VAR_2.bi_procfreq, VAR_2.bi_procfreq, 0);
 FUNC_1("/plb", VAR_2.bi_plb_busfreq);
 FUNC_1("/plb/opb", VAR_2.bi_opbfreq);
 FUNC_1("/plb/ebc", VAR_2.bi_pci_busfreq);
 FUNC_1("/plb/opb/serial@ef600300", VAR_2.bi_procfreq / VAR_3);
 FUNC_1("/plb/opb/serial@ef600400", VAR_2.bi_procfreq / VAR_3);

 FUNC_3("ethernet0", VAR_2.bi_enetaddr);
 FUNC_3("ethernet1", VAR_2.bi_enet1addr);


 if ((VAR_2.bi_enet1addr[0] == 0) &&
     (VAR_2.bi_enet1addr[1] == 0) &&
     (VAR_2.bi_enet1addr[2] == 0) &&
     (VAR_2.bi_enet1addr[3] == 0) &&
     (VAR_2.bi_enet1addr[4] == 0) &&
     (VAR_2.bi_enet1addr[5] == 0)) {
  void *VAR_4;

  FUNC_10("Trimming devtree for single serial/eth board\n");

  VAR_4 = FUNC_6("/plb/opb/serial@ef600300");
  if (!VAR_4)
   FUNC_5("Can't find node for /plb/opb/serial@ef600300");
  FUNC_0(VAR_4);

  VAR_4 = FUNC_6("/plb/opb/ethernet@ef600900");
  if (!VAR_4)
   FUNC_5("Can't find node for /plb/opb/ethernet@ef600900");
  FUNC_0(VAR_4);
 }

 FUNC_8((u32 *)0xef600800, (u32 *)0xef600900);


 if (VAR_2.bi_flashsize < 0x800000) {
  u32 VAR_5[VAR_1];
  void *VAR_6 = FUNC_6("/plb/ebc/nor_flash@0");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for nor_flash!??");

  FUNC_10("Fixing devtree for 4M Flash\n");


  FUNC_7(VAR_6, "reg", VAR_5, sizeof(VAR_5));
  VAR_5[0] = 0;
  VAR_5[1] = 0xffc00000;
  VAR_5[2] = 0x00400000;
  FUNC_11(VAR_6, "reg", VAR_5, sizeof(VAR_5));


  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@0");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@0");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));

  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@1");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@1");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));

  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@2");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@2");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));

  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@3");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@3");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));

  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@4");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@4");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));

  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@6");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@6");
  FUNC_7(VAR_6, "reg", VAR_5, 2*sizeof(u32));
  VAR_5[0] -= 0x400000;
  FUNC_11(VAR_6, "reg", VAR_5, 2*sizeof(u32));


  VAR_6 = FUNC_6("/plb/ebc/nor_flash@0/partition@5");
  if (!VAR_6)
   FUNC_5("Can't find FDT node for partition@5");
  FUNC_0(VAR_6);
 }
}
