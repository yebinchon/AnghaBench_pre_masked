
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ata_timing {int setup; int recover; int active; } ;
struct TYPE_3__ {int nsect_addr; int lbal_addr; int data_addr; int device_addr; int error_addr; } ;
struct ata_port {TYPE_2__* host; TYPE_1__ ioaddr; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_4__ {struct ata_port* private_data; } ;


 int VAR_0 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 size_t FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 struct ata_timing VAR_6;
 struct ata_device *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;
 int VAR_9[4] = { 50000, 40000, 33000, 25000 };
 u8 VAR_10;
 u8 VAR_11;


 VAR_11 = FUNC_7(0xAC) & 0xC0;


 FUNC_4(VAR_1->ioaddr.error_addr);
 FUNC_4(VAR_1->ioaddr.error_addr);
 FUNC_6(3, VAR_1->ioaddr.nsect_addr);


 VAR_8 = 1000000000 / VAR_9[VAR_11];


 FUNC_1(VAR_2, VAR_2->pio_mode, &VAR_6, VAR_8, 1000);


 if (VAR_7) {
  struct ata_timing VAR_12;
  FUNC_1(VAR_7, VAR_7->pio_mode, &VAR_12, VAR_8, 1000);

  FUNC_2(&VAR_6, &VAR_12, &VAR_6, VAR_0);
 }

 VAR_3 = FUNC_3(VAR_6.active, 2, 17) - 2;
 VAR_4 = FUNC_3(VAR_6.recover, 1, 16) - 1;
 VAR_5 = FUNC_3(VAR_6.setup, 1, 4) - 1;


 VAR_10 = FUNC_5(VAR_1->ioaddr.lbal_addr);
 VAR_10 &= 0x7F;
 VAR_10 |= (VAR_2->devno << 7);
 FUNC_6(VAR_10, VAR_1->ioaddr.lbal_addr);


 FUNC_6(VAR_3 << 4 | VAR_4, VAR_1->ioaddr.error_addr);



 VAR_10 = FUNC_5(VAR_1->ioaddr.device_addr);
 VAR_10 &= 0xC0;
 VAR_10 |= VAR_2->devno;
 VAR_10 |= (VAR_5 << 4) | 0x04;
 FUNC_6(VAR_10, VAR_1->ioaddr.device_addr);


 FUNC_6(VAR_3 << 4 | VAR_4, VAR_1->ioaddr.data_addr);


 VAR_10 = FUNC_5(VAR_1->ioaddr.lbal_addr);
 VAR_10 &= 0x73;
 VAR_10 |= 0x84;
 FUNC_6(VAR_10, VAR_1->ioaddr.lbal_addr);


 FUNC_6(0x83, VAR_1->ioaddr.nsect_addr);


 VAR_1->host->private_data = VAR_1;
}
