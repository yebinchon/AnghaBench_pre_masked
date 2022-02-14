
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_timing {int dummy; } ;
struct ata_port {int dummy; } ;
struct ata_device {scalar_t__ class; scalar_t__ dma_mode; scalar_t__ pio_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,struct ata_timing*,int ) ;
 struct ata_device* FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,scalar_t__,struct ata_timing*,unsigned long,int) ;
 int FUNC_4 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 struct ata_device *VAR_5 = FUNC_2(VAR_4);
 struct ata_timing VAR_6;
 unsigned long VAR_7 = 1000000000 / 33333;

 FUNC_3(VAR_4, VAR_4->pio_mode, &VAR_6, VAR_7, 1);
 if (VAR_5) {
  struct ata_timing VAR_8;
  FUNC_3(VAR_5, VAR_5->pio_mode, &VAR_8, VAR_7, 1);
  FUNC_4(&VAR_8, &VAR_6, &VAR_6, VAR_2|VAR_1);
  if (VAR_5->dma_mode) {
   FUNC_3(VAR_5, VAR_5->dma_mode, &VAR_8, VAR_7, 1);
   FUNC_4(&VAR_8, &VAR_6, &VAR_6, VAR_2|VAR_1);
  }
 }


 if (VAR_4->class != VAR_0)
  FUNC_0(VAR_3, VAR_4, 0x00);
 FUNC_1(VAR_3, VAR_4, &VAR_6, 0);
 if (VAR_4->class == VAR_0)
  FUNC_0(VAR_3, VAR_4, 0x05);

}
