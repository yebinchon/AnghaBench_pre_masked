
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct mca_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int (* mca_write_pos ) (struct mca_device*,int,unsigned char) ;} ;
struct mca_bus {TYPE_2__ f; } ;


 int FUNC_0 (struct mca_device*,int,unsigned char) ;
 struct mca_bus* FUNC_1 (int ) ;

void FUNC_2(struct mca_device *VAR_0, int VAR_1,
     unsigned char VAR_2)
{
 struct mca_bus *VAR_3 = FUNC_1(VAR_0->dev.parent);

 VAR_3->f.mca_write_pos(VAR_0, VAR_1, VAR_2);
}
