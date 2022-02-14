
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_addr; int nsect_addr; } ;
struct ata_port {int pflags; TYPE_2__ ioaddr; } ;
struct ata_device {int id; TYPE_1__* link; } ;
typedef unsigned char __le32 ;
struct TYPE_3__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct ata_device*,unsigned char*,unsigned int,int) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned char*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned char*,unsigned int) ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static unsigned int FUNC_13(struct ata_device *VAR_2,
   unsigned char *VAR_3, unsigned int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4 & 3;
 struct ata_port *VAR_7 = VAR_2->link->ap;


 if (FUNC_0(VAR_2->id) && (VAR_6 == 0 || VAR_6 == 3)
     && (VAR_7->pflags & VAR_0)) {
  unsigned long VAR_8;

  FUNC_10(VAR_8);


  FUNC_5(VAR_7->ioaddr.nsect_addr);
  FUNC_5(VAR_7->ioaddr.nsect_addr);
  FUNC_5(VAR_7->ioaddr.nsect_addr);


  if (VAR_5 == VAR_1)
   FUNC_4(VAR_7->ioaddr.data_addr, VAR_3, VAR_4 >> 2);
  else
   FUNC_7(VAR_7->ioaddr.data_addr, VAR_3, VAR_4 >> 2);

  if (FUNC_12(VAR_6)) {
   __le32 VAR_9;
   if (VAR_5 == VAR_1) {
    VAR_9 = FUNC_2(FUNC_3(VAR_7->ioaddr.data_addr));
    FUNC_11(VAR_3 + VAR_4 - VAR_6, &VAR_9, VAR_6);
   } else {
    FUNC_11(&VAR_9, VAR_3 + VAR_4 - VAR_6, VAR_6);
    FUNC_6(FUNC_8(VAR_9), VAR_7->ioaddr.data_addr);
   }
   VAR_4 += 4 - VAR_6;
  }
  FUNC_9(VAR_8);
 } else
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_4;
}
