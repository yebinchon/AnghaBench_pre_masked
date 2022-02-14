
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_link {TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* scr_read ) (struct ata_link*,int,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,int,int *) ;
 scalar_t__ FUNC_2 (struct ata_link*) ;
 int FUNC_3 (struct ata_link*,int,int *) ;

int FUNC_4(struct ata_link *VAR_1, int VAR_2, u32 *VAR_3)
{
 if (FUNC_0(VAR_1)) {
  if (FUNC_2(VAR_1))
   return VAR_1->ap->ops->scr_read(VAR_1, VAR_2, VAR_3);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
