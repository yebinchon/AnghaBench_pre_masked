
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * device; } ;
struct ata_port {unsigned int flags; TYPE_1__ link; } ;
struct ata_link {struct ata_port* ap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *,unsigned int,int*) ;
 unsigned int FUNC_2 (struct ata_port*,unsigned int) ;
 int FUNC_3 (struct ata_port*,int ) ;
 scalar_t__ FUNC_4 (struct ata_port*,int) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_3, unsigned int *VAR_4,
     unsigned long VAR_5)
{
 struct ata_port *VAR_6 = VAR_3->ap;
 unsigned int VAR_7 = VAR_6->flags & VAR_0;
 unsigned int VAR_8 = 0, VAR_9;
 u8 VAR_10;


 if (FUNC_4(VAR_6, 0))
  VAR_8 |= (1 << 0);
 if (VAR_7 && FUNC_4(VAR_6, 1))
  VAR_8 |= (1 << 1);


 FUNC_3(VAR_6, 0);


 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6, VAR_2, "SRST failed (err_mask=0x%x)\n",
    VAR_9);
  return -VAR_1;
 }


 VAR_4[0] = FUNC_1(&VAR_6->link.device[0],
    VAR_8 & (1 << 0), &VAR_10);
 if (VAR_7 && VAR_10 != 0x81)
  VAR_4[1] = FUNC_1(&VAR_6->link.device[1],
     VAR_8 & (1 << 1), &VAR_10);

 return 0;
}
