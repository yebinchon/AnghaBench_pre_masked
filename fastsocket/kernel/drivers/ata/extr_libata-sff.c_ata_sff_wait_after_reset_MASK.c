
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
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (struct ata_port*,int) ;
 int FUNC_5 (struct ata_port*,int) ;
 int FUNC_6 (struct ata_port*,int) ;

int FUNC_7(struct ata_link *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 struct ata_port *VAR_5 = VAR_2->ap;
 struct ata_ioports *VAR_6 = &VAR_5->ioaddr;
 unsigned int VAR_7 = VAR_3 & (1 << 0);
 unsigned int VAR_8 = VAR_3 & (1 << 1);
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_5, VAR_0);


 VAR_9 = FUNC_1(VAR_2, VAR_4);



 if (VAR_9)
  return VAR_9;




 if (VAR_8) {
  int VAR_11;

  VAR_5->ops->sff_dev_select(VAR_5, 1);





  for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
   u8 VAR_12, VAR_13;

   VAR_12 = FUNC_2(VAR_6->nsect_addr);
   VAR_13 = FUNC_2(VAR_6->lbal_addr);
   if ((VAR_12 == 1) && (VAR_13 == 1))
    break;
   FUNC_0(VAR_5, 50);
  }

  VAR_9 = FUNC_1(VAR_2, VAR_4);
  if (VAR_9) {
   if (VAR_9 != -VAR_1)
    return VAR_9;
   VAR_10 = VAR_9;
  }
 }


 VAR_5->ops->sff_dev_select(VAR_5, 0);
 if (VAR_8)
  VAR_5->ops->sff_dev_select(VAR_5, 1);
 if (VAR_7)
  VAR_5->ops->sff_dev_select(VAR_5, 0);

 return VAR_10;
}
