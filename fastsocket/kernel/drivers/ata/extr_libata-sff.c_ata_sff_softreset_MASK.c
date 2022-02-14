
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {unsigned int flags; TYPE_1__* ops; } ;
struct ata_link {int * device; struct ata_port* ap; } ;
struct TYPE_2__ {int (* sff_dev_select ) (struct ata_port*,int ) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ata_port*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (struct ata_link*,int ,char*,int) ;
 unsigned int FUNC_4 (int *,unsigned int,int*) ;
 scalar_t__ FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_port*,int ) ;

int FUNC_7(struct ata_link *VAR_3, unsigned int *VAR_4,
        unsigned long VAR_5)
{
 struct ata_port *VAR_6 = VAR_3->ap;
 unsigned int VAR_7 = VAR_6->flags & VAR_0;
 unsigned int VAR_8 = 0;
 int VAR_9;
 u8 VAR_10;

 FUNC_0("ENTER\n");


 if (FUNC_2(VAR_6, 0))
  VAR_8 |= (1 << 0);
 if (VAR_7 && FUNC_2(VAR_6, 1))
  VAR_8 |= (1 << 1);


 VAR_6->ops->sff_dev_select(VAR_6, 0);


 FUNC_0("about to softreset, devmask=%x\n", VAR_8);
 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_5);

 if (VAR_9 && (VAR_9 != -VAR_1 || FUNC_5(VAR_3))) {
  FUNC_3(VAR_3, VAR_2, "SRST failed (errno=%d)\n", VAR_9);
  return VAR_9;
 }


 VAR_4[0] = FUNC_4(&VAR_3->device[0],
       VAR_8 & (1 << 0), &VAR_10);
 if (VAR_7 && VAR_10 != 0x81)
  VAR_4[1] = FUNC_4(&VAR_3->device[1],
        VAR_8 & (1 << 1), &VAR_10);

 FUNC_0("EXIT, classes[0]=%u [1]=%u\n", VAR_4[0], VAR_4[1]);
 return 0;
}
