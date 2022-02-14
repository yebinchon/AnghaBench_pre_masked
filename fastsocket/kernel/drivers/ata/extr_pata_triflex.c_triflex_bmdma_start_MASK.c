
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {TYPE_1__* dev; int ap; } ;
struct TYPE_2__ {int dma_mode; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_0)
{
 FUNC_1(VAR_0->ap, VAR_0->dev, VAR_0->dev->dma_mode);
 FUNC_0(VAR_0);
}
