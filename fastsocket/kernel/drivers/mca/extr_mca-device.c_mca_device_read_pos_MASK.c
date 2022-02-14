
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct mca_device {unsigned char* pos; TYPE_1__ dev; } ;
struct TYPE_4__ {unsigned char (* mca_read_pos ) (struct mca_device*,int) ;} ;
struct mca_bus {TYPE_2__ f; } ;


 unsigned char FUNC_0 (struct mca_device*,int) ;
 struct mca_bus* FUNC_1 (int ) ;

unsigned char FUNC_2(struct mca_device *VAR_0, int VAR_1)
{
 struct mca_bus *VAR_2 = FUNC_1(VAR_0->dev.parent);

 return VAR_2->f.mca_read_pos(VAR_0, VAR_1);

 return VAR_0->pos[VAR_1];
}
