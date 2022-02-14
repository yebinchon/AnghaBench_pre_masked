
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* chip_info; } ;
struct TYPE_4__ {scalar_t__ output_interface; int tmds_chip_slave_addr; } ;
struct TYPE_5__ {scalar_t__ gfx_chip_name; TYPE_1__ tmds_chip_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_19 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 TYPE_3__* VAR_20 ;

void FUNC_5(void)
{
 u8 VAR_21;

 if (VAR_20->chip_info->
  tmds_chip_info.output_interface == VAR_9) {
  FUNC_3(VAR_12, VAR_16,
   FUNC_2(VAR_16, VAR_12) | 0xC0);
  if (VAR_20->chip_info->gfx_chip_name == VAR_14)
   FUNC_0(0x88, 0x3b);
  else


   FUNC_3(VAR_5, VAR_15,
   FUNC_2(VAR_15, VAR_5) & 0xDF);
 }

 if (VAR_20->chip_info->
  tmds_chip_info.output_interface == VAR_10) {
  FUNC_3(VAR_12, VAR_16,
   FUNC_2(VAR_16, VAR_12) | 0x30);


  if (VAR_20->chip_info->gfx_chip_name == VAR_14) {
   FUNC_0(0x88, 0x3b);
  } else {


   FUNC_3(VAR_5, VAR_15,
   FUNC_2(VAR_15, VAR_5) & 0xDF);
  }


  if (VAR_19 == 1) {
   FUNC_4(VAR_5, VAR_15, 0x1f, 0x1f);
   FUNC_4(VAR_4, VAR_15, 0x00, VAR_2 + VAR_0);
   if (VAR_17 == 24) {
    if (VAR_18 == 1)
     VAR_21 = 0x3F;
    else
     VAR_21 = 0x37;
    FUNC_1(VAR_20->chip_info->
          tmds_chip_info.
          tmds_chip_slave_addr,
          0x08, VAR_21);
   }
  }
 }

 if (VAR_20->chip_info->
  tmds_chip_info.output_interface == VAR_7) {
  FUNC_3(VAR_13, VAR_16,
   FUNC_2(VAR_16, VAR_13) | 0x0C);
  FUNC_3(VAR_5, VAR_15,
   FUNC_2(VAR_15, VAR_5) & 0xDF);
 }

 if (VAR_20->chip_info->
  tmds_chip_info.output_interface == VAR_8) {
  FUNC_3(VAR_13, VAR_16,
   FUNC_2(VAR_16, VAR_13) | 0x03);
  FUNC_3(VAR_5, VAR_15,
   FUNC_2(VAR_15, VAR_5) & 0xDF);
 }
 if (VAR_20->chip_info->
  tmds_chip_info.output_interface == VAR_11) {

  FUNC_4(VAR_5, VAR_15, 0, VAR_3);


  FUNC_4(VAR_6, VAR_15, 0, VAR_1);
 }
}
