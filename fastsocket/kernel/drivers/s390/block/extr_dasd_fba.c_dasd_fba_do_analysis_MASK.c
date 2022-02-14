
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blk_size; int blk_bdsa; } ;
struct dasd_fba_private {TYPE_1__ rdc_data; } ;
struct dasd_block {int bp_block; scalar_t__ s2b_shift; int blocks; TYPE_2__* base; } ;
struct TYPE_4__ {scalar_t__ private; } ;


 int FUNC_0 (int ,TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dasd_block *VAR_1)
{
 struct dasd_fba_private *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = (struct dasd_fba_private *) VAR_1->base->private;
 VAR_4 = FUNC_1(VAR_2->rdc_data.blk_size);
 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1->base, "unknown blocksize %d",
       VAR_2->rdc_data.blk_size);
  return VAR_4;
 }
 VAR_1->blocks = VAR_2->rdc_data.blk_bdsa;
 VAR_1->bp_block = VAR_2->rdc_data.blk_size;
 VAR_1->s2b_shift = 0;
 for (VAR_3 = 512; VAR_3 < VAR_2->rdc_data.blk_size; VAR_3 = VAR_3 << 1)
  VAR_1->s2b_shift++;
 return 0;
}
