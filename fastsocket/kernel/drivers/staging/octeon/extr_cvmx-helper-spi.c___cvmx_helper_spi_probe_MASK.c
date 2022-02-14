
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enable; } ;
union cvmx_pko_reg_crc_enable {int u64; TYPE_1__ s; } ;
struct TYPE_4__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(int VAR_2)
{
 int VAR_3 = 0;

 if ((FUNC_3()->board_type != VAR_0) &&
     FUNC_2(VAR_2)) {
  VAR_3 = 10;
 } else {
  union cvmx_pko_reg_crc_enable VAR_4;
  VAR_3 = 16;






  VAR_4.u64 = FUNC_1(VAR_1);
  VAR_4.s.enable |= 0xffff << (VAR_2 * 16);
  FUNC_4(VAR_1, VAR_4.u64);
 }
 FUNC_0(VAR_2, VAR_3);
 return VAR_3;
}
