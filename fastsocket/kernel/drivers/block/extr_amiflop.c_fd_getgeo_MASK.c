
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hd_geometry {int sectors; int cylinders; int heads; } ;
struct block_device {int bd_dev; } ;
struct TYPE_6__ {TYPE_2__* type; TYPE_1__* dtype; } ;
struct TYPE_5__ {int sect_mult; int tracks; int heads; } ;
struct TYPE_4__ {int sects; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->bd_dev) & 3;

 VAR_2->heads = VAR_0[VAR_3].type->heads;
 VAR_2->sectors = VAR_0[VAR_3].dtype->sects * VAR_0[VAR_3].type->sect_mult;
 VAR_2->cylinders = VAR_0[VAR_3].type->tracks;
 return 0;
}
