
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct legacy_data {int* clock; int timing; scalar_t__ fast; } ;
struct ata_timing {int recover; int active; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t devno; int pio_mode; } ;
struct TYPE_2__ {struct legacy_data* private_data; } ;


 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct ata_timing VAR_2;
 struct legacy_data *VAR_3 = VAR_0->host->private_data;
 int VAR_4, VAR_5;
 u8 VAR_6;


 FUNC_0(VAR_1, VAR_1->pio_mode, &VAR_2, 30303, 1000);

 if (VAR_3->fast) {
  VAR_4 = 8 - FUNC_1(VAR_2.active, 1, 8);
  VAR_5 = 18 - FUNC_1(VAR_2.recover, 3, 18);
 } else {
  VAR_4 = 9 - FUNC_1(VAR_2.active, 2, 9);
  VAR_5 = 15 - FUNC_1(VAR_2.recover, 0, 15);
 }
 VAR_6 = (VAR_5 << 4) | VAR_4 | 0x08;

 VAR_3->clock[VAR_1->devno] = VAR_6;

 FUNC_2(VAR_6, VAR_3->timing);
}
