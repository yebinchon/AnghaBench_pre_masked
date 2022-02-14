
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {int cylinders; int heads; int sectors; } ;
struct dasd_block {int blocks; int s2b_shift; int bp_block; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dasd_block *VAR_1,
      struct hd_geometry *VAR_2)
{
 if (FUNC_0(VAR_1->bp_block) != 0)
  return -VAR_0;
 VAR_2->cylinders = (VAR_1->blocks << VAR_1->s2b_shift) >> 10;
 VAR_2->heads = 16;
 VAR_2->sectors = 128 >> VAR_1->s2b_shift;
 return 0;
}
