
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_addr; } ;
struct ata_port {TYPE_2__ ioaddr; } ;
struct ata_device {int id; TYPE_1__* link; } ;
typedef unsigned char __le32 ;
struct TYPE_3__ {struct ata_port* ap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct ata_device*,unsigned char*,unsigned int,int) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned char*,unsigned int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,unsigned char*,unsigned int) ;
 int FUNC_7 (unsigned char) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static unsigned int FUNC_10(struct ata_device *VAR_1,
   unsigned char *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct ata_port *VAR_5 = VAR_1->link->ap;
 int VAR_6 = VAR_3 & 3;

 if (FUNC_0(VAR_1->id)) {
  if (VAR_4 == VAR_0)
   FUNC_4(VAR_5->ioaddr.data_addr, VAR_2, VAR_3 >> 2);
  else
   FUNC_6(VAR_5->ioaddr.data_addr, VAR_2, VAR_3 >> 2);

  if (FUNC_9(VAR_6)) {
   __le32 VAR_7;
   if (VAR_4 == VAR_0) {
    VAR_7 = FUNC_2(FUNC_3(VAR_5->ioaddr.data_addr));
    FUNC_8(VAR_2 + VAR_3 - VAR_6, &VAR_7, VAR_6);
   } else {
    FUNC_8(&VAR_7, VAR_2 + VAR_3 - VAR_6, VAR_6);
    FUNC_5(FUNC_7(VAR_7), VAR_5->ioaddr.data_addr);
   }
   VAR_3 += 4 - VAR_6;
  }
 } else
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_3;
}
