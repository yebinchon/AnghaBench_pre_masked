
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct legacy_data {int* clock; scalar_t__ timing; scalar_t__ fast; } ;
struct ata_timing {int recover; int active; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t devno; scalar_t__ class; int pio_mode; } ;
struct TYPE_2__ {struct legacy_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct ata_timing VAR_3;
 struct legacy_data *VAR_4 = VAR_1->host->private_data;
 int VAR_5, VAR_6;
 u8 VAR_7;


 FUNC_0(VAR_2, VAR_2->pio_mode, &VAR_3, 30303, 1000);

 if (VAR_4->fast) {
  VAR_5 = 8 - FUNC_1(VAR_3.active, 1, 8);
  VAR_6 = 18 - FUNC_1(VAR_3.recover, 3, 18);
 } else {
  VAR_5 = 9 - FUNC_1(VAR_3.active, 2, 9);
  VAR_6 = 15 - FUNC_1(VAR_3.recover, 0, 15);
 }
 VAR_7 = (VAR_6 << 4) | VAR_5 | 0x08;
 VAR_4->clock[VAR_2->devno] = VAR_7;
 FUNC_2(VAR_7, VAR_4->timing + 2 * VAR_2->devno);

 if (VAR_2->class != VAR_0)
  FUNC_2(0x5F, VAR_4->timing + 3);
}
