
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_ioports {int lbal_addr; int nsect_addr; } ;
struct ata_port {TYPE_1__* ops; struct ata_ioports ioaddr; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int (* sff_dev_select ) (struct ata_port*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (struct ata_port*,int) ;
 int FUNC_5 (struct ata_port*,int) ;
 int FUNC_6 (struct ata_port*,int) ;

int FUNC_7(struct ata_link *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_1->ap;
 struct ata_ioports *VAR_5 = &VAR_4->ioaddr;
 unsigned int VAR_6 = VAR_2 & (1 << 0);
 unsigned int VAR_7 = VAR_2 & (1 << 1);
 int VAR_8, VAR_9 = 0;
 FUNC_0(VAR_4, 150);


 VAR_8 = FUNC_1(VAR_1, VAR_3);



 if (VAR_8)
  return VAR_8;




 if (VAR_7) {
  int VAR_10;

  VAR_4->ops->sff_dev_select(VAR_4, 1);





  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   u8 VAR_11, VAR_12;

   VAR_11 = FUNC_2(VAR_5->nsect_addr);
   VAR_12 = FUNC_2(VAR_5->lbal_addr);
   if ((VAR_11 == 1) && (VAR_12 == 1))
    break;
   FUNC_0(VAR_4, 50);
  }

  VAR_8 = FUNC_1(VAR_1, VAR_3);
  if (VAR_8) {
   if (VAR_8 != -VAR_0)
    return VAR_8;
   VAR_9 = VAR_8;
  }
 }


 VAR_4->ops->sff_dev_select(VAR_4, 0);
 if (VAR_7)
  VAR_4->ops->sff_dev_select(VAR_4, 1);
 if (VAR_6)
  VAR_4->ops->sff_dev_select(VAR_4, 0);

 return VAR_9;
}
