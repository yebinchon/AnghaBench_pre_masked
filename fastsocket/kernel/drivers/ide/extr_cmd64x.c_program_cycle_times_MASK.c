
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {size_t dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;






 int FUNC_0 (char*,int,int const,...) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int const,int) ;
 int FUNC_2 (int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (ide_drive_t *VAR_1, int VAR_2, int VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_1->hwif->dev);
 int VAR_5 = 1000 / (VAR_0 ? VAR_0 : 33);
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 static const u8 VAR_10[] =
  {15, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
 static const u8 VAR_11[4] = {131, 130, 129, 128};

 FUNC_0("program_cycle_times parameters: total=%d, active=%d\n",
    VAR_2, VAR_3);

 VAR_6 = FUNC_2( VAR_2, VAR_5);
 VAR_7 = FUNC_2(VAR_3, VAR_5);
 VAR_8 = VAR_6 - VAR_7;





 if (VAR_8 > 16) {
  VAR_7 += VAR_8 - 16;
  VAR_8 = 16;
 }
 if (VAR_7 > 16)
   VAR_7 = 16;

 FUNC_0("Final counts: total=%d, active=%d, recovery=%d\n",
    VAR_6, VAR_7, VAR_8);




 VAR_8 = VAR_10[VAR_8];
  VAR_7 &= 0x0f;


 VAR_9 = (VAR_7 << 4) | VAR_8;
 (void) FUNC_1(VAR_4, VAR_11[VAR_1->dn], VAR_9);
 FUNC_0("Write 0x%02x to reg 0x%x\n", VAR_9, VAR_11[VAR_1->dn]);
}
