
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ata_host {unsigned int n_ports; int lock; int * ports; int dev; scalar_t__* iomap; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct ata_host *VAR_5 = VAR_4;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_5->iomap[VAR_1] + VAR_2);

 if (FUNC_5(VAR_8 == 0xffffffff || VAR_8 == 0)) {
  if (VAR_8)
   FUNC_1(VAR_0, VAR_5->dev,
    ": IRQ status == 0xffffffff, "
    "PCI fault or device removal?\n");
  goto out;
 }

 FUNC_3(&VAR_5->lock);

 for (VAR_6 = 0; VAR_6 < VAR_5->n_ports; VAR_6++) {
  u8 VAR_9 = (VAR_8 >> (8 * VAR_6)) & 0xff;
  if (VAR_9) {
   FUNC_6(VAR_9, VAR_5->ports[VAR_6]);
   VAR_7++;
  }
 }

 FUNC_4(&VAR_5->lock);
out:
 return FUNC_0(VAR_7);
}
