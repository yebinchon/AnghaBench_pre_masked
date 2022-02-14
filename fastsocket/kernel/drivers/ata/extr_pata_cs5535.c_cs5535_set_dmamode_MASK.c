
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {int dummy; } ;
struct ata_device {int dma_mode; int devno; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 static const u32 VAR_5[5] = {
  0x7F7436A1, 0x7F733481, 0x7F723261, 0x7F713161, 0x7F703061
 };
 static const u32 VAR_6[3] = {
  0x7F0FFFF3, 0x7F035352, 0x7F024241
 };
 u32 VAR_7, VAR_8;
 int VAR_9 = VAR_4->dma_mode;

 FUNC_0(VAR_0 + 2 * VAR_4->devno, VAR_7, VAR_8);
 VAR_7 &= 0x80000000UL;
 if (VAR_9 >= VAR_2)
  VAR_7 |= VAR_5[VAR_9 - VAR_2];
 else
  VAR_7 |= VAR_6[VAR_9 - VAR_1];
 FUNC_1(VAR_0 + 2 * VAR_4->devno, VAR_7, 0);
}
