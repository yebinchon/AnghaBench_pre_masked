
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_geometry {int heads; int cylinders; int sectors; } ;
struct TYPE_4__ {int trk_per_cyl; int no_cyl; } ;
struct dasd_eckd_private {TYPE_2__ rdc_data; } ;
struct dasd_block {int bp_block; TYPE_1__* base; } ;
struct TYPE_3__ {scalar_t__ private; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dasd_block *VAR_0, struct hd_geometry *VAR_1)
{
 struct dasd_eckd_private *VAR_2;

 VAR_2 = (struct dasd_eckd_private *) VAR_0->base->private;
 if (FUNC_0(VAR_0->bp_block) == 0) {
  VAR_1->sectors = FUNC_1(&VAR_2->rdc_data,
           0, VAR_0->bp_block);
 }
 VAR_1->cylinders = VAR_2->rdc_data.no_cyl;
 VAR_1->heads = VAR_2->rdc_data.trk_per_cyl;
 return 0;
}
