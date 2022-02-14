
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct slic_config {int FruFormat; int OEMFruFormat; int NwClkCtrls; int PMECapab; int NetIntPin1; int DramRomFn; int DbgDevId; int Pcistatus; int MaxLat; int MinGrant; TYPE_1__* macinfo; int RevisionId; int DeviceId; int VendorId; int OemFru; int atk_fru; } ;
struct sliccard {int card_size; int adapters_allocated; int pingstatus; int gennumber; struct adapter** adapter; int adapters_activated; int slotnumber; int busnumber; struct slic_config config; } ;
struct seq_file {struct sliccard* private; } ;
struct adapter {scalar_t__ irq; int linkspeed; int linkduplex; int linkstate; int state; int physport; } ;
struct TYPE_2__ {int * macaddrA; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;




 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (struct seq_file*,char*,unsigned char,unsigned char,unsigned char,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_9, void *VAR_10)
{
 FUNC_4(VAR_9, "driver_version           : %s\n", VAR_6);
 FUNC_4(VAR_9, "Microcode versions:           \n");
 FUNC_4(VAR_9, "    Gigabit (gb)         : %s %s\n",
      VAR_3, VAR_2);
 FUNC_4(VAR_9, "    Gigabit Receiver     : %s %s\n",
      VAR_1, VAR_0);
 FUNC_4(VAR_9, "Vendor                   : %s\n", VAR_8);
 FUNC_4(VAR_9, "Product Name             : %s\n", VAR_7);
 return 0;
}
