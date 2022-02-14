
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct via_isa_bridge {int flags; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dma_mode; } ;
struct TYPE_2__ {struct via_isa_bridge* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 const struct via_isa_bridge *VAR_4 = VAR_2->host->private_data;
 int VAR_5 = (VAR_4->flags & VAR_0) ? 0 : 1;
 int VAR_6 = VAR_4->flags & VAR_1;
 static u8 VAR_7[5] = { 1, 1, 2, 3, 4 };
 static u8 VAR_8[5] = { 0, 33, 66, 100, 133 };

 FUNC_0(VAR_2, VAR_3, VAR_3->dma_mode, VAR_7[VAR_6], VAR_5, VAR_8[VAR_6]);
}
