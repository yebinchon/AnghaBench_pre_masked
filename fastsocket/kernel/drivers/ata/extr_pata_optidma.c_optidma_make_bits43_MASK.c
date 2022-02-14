
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_device {int dma_mode; size_t pio_mode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ata_device*) ;

__attribute__((used)) static u8 FUNC_1(struct ata_device *VAR_2)
{
 static const u8 VAR_3[5] = {
  0, 0, 0, 1, 2
 };
 if (!FUNC_0(VAR_2))
  return 0;
 if (VAR_2->dma_mode)
  return VAR_2->dma_mode - VAR_0;
 return VAR_3[VAR_2->pio_mode - VAR_1];
}
