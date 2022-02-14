
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_device {TYPE_3__* link; } ;
struct at91_ide_info {int cs; } ;
struct TYPE_6__ {TYPE_2__* ap; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {struct at91_ide_info* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (struct ata_device*,unsigned char*,unsigned int,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_device *VAR_3,
  unsigned char *VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct at91_ide_info *VAR_7 = VAR_3->link->ap->host->private_data;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 FUNC_5(VAR_9);
 VAR_10 = FUNC_1(FUNC_0(VAR_7->cs));


 FUNC_2(FUNC_0(VAR_7->cs),
   (VAR_10 & ~VAR_0) | VAR_1);

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);


 FUNC_2(FUNC_0(VAR_7->cs),
   (VAR_10 & ~VAR_0) | VAR_2);

 FUNC_4(VAR_9);
 return VAR_8;
}
