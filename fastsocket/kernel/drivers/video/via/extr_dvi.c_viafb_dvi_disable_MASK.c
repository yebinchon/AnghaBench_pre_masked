
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* chip_info; } ;
struct TYPE_5__ {scalar_t__ output_interface; } ;
struct TYPE_4__ {TYPE_2__ tmds_chip_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_3__* VAR_10 ;

void FUNC_2(void)
{
 if (VAR_10->chip_info->
  tmds_chip_info.output_interface == VAR_3)
  FUNC_1(VAR_6, VAR_9,
  FUNC_0(VAR_9, VAR_6) & (~0xC0));

 if (VAR_10->chip_info->
  tmds_chip_info.output_interface == VAR_4)
  FUNC_1(VAR_6, VAR_9,
  FUNC_0(VAR_9, VAR_6) & (~0x30));

 if (VAR_10->chip_info->
  tmds_chip_info.output_interface == VAR_1)
  FUNC_1(VAR_7, VAR_9,
  FUNC_0(VAR_9, VAR_7) & (~0x0C));

 if (VAR_10->chip_info->
  tmds_chip_info.output_interface == VAR_2)
  FUNC_1(VAR_7, VAR_9,
  FUNC_0(VAR_9, VAR_7) & (~0x03));

 if (VAR_10->chip_info->
  tmds_chip_info.output_interface == VAR_5)

  FUNC_1(VAR_0, VAR_8,
  FUNC_0(VAR_8, VAR_0) | 0x08);
}
