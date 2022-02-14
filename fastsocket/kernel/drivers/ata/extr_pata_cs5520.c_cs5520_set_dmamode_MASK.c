
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;
struct ata_device {size_t dma_mode; } ;





 int FUNC_0 (struct ata_port*,struct ata_device*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int const) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 static const int VAR_2[3] = { 130, 129, 128 };
 FUNC_1(VAR_0, VAR_1, VAR_2[VAR_1->dma_mode]);
 FUNC_0(VAR_0, VAR_1);
}
