
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {scalar_t__ gfx_chip_name; scalar_t__ gfx_chip_revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 TYPE_2__* VAR_23 ;

__attribute__((used)) static void FUNC_2(void)
{

 FUNC_1(VAR_8, VAR_21, 0x80, VAR_6);

 FUNC_0(VAR_14, VAR_21, 0xff);

 FUNC_1(VAR_9, VAR_21, 0x10, VAR_4);

 FUNC_1(VAR_11, VAR_21, 0x40, VAR_5);

 FUNC_1(VAR_16, VAR_21, 0x10, VAR_4);

 FUNC_1(VAR_15, VAR_21, 0x06, VAR_0 + VAR_1 + VAR_2);


 FUNC_0(VAR_13, VAR_21, 0xe3);

 FUNC_0(VAR_10, VAR_21, 0x00);

 FUNC_0(VAR_12, VAR_21, 0x00);


 if ((VAR_23->chip_info->gfx_chip_name == VAR_19)
  || (VAR_23->chip_info->gfx_chip_name == VAR_20))
  FUNC_1(VAR_15, VAR_21, 0x08, VAR_3);
 if ((VAR_23->chip_info->gfx_chip_name == VAR_18)
     && (VAR_23->chip_info->gfx_chip_revision == VAR_7))
  FUNC_1(VAR_17, VAR_22, 0x02, VAR_1);

}
