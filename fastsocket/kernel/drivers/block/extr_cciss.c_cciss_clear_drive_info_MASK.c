
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raid_level; int vendor; int rev; int model; int serial_no; scalar_t__ cylinders; scalar_t__ sectors; scalar_t__ heads; scalar_t__ block_size; scalar_t__ nr_blocks; } ;
typedef TYPE_1__ drive_info_struct ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(drive_info_struct *VAR_0)
{

 VAR_0->nr_blocks = 0;
 VAR_0->block_size = 0;
 VAR_0->heads = 0;
 VAR_0->sectors = 0;
 VAR_0->cylinders = 0;
 VAR_0->raid_level = -1;
 FUNC_0(VAR_0->serial_no, 0, sizeof(VAR_0->serial_no));
 FUNC_0(VAR_0->model, 0, sizeof(VAR_0->model));
 FUNC_0(VAR_0->rev, 0, sizeof(VAR_0->rev));
 FUNC_0(VAR_0->vendor, 0, sizeof(VAR_0->vendor));




}
