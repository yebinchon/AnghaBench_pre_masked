
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;
struct ata_device {int dma_mode; } ;


 int FUNC_0 (struct ata_port*,struct ata_device*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, 0x50, VAR_1->dma_mode, 3);
}
