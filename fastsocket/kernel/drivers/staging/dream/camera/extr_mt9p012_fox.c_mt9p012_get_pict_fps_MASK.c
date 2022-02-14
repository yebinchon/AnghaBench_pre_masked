
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ prev_res; } ;
struct TYPE_5__ {TYPE_1__* reg_pat; } ;
struct TYPE_4__ {int frame_length_lines; int line_length_pck; int pll_multiplier; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_0(uint16_t VAR_5, uint16_t *VAR_6)
{

 uint32_t VAR_7;
 uint32_t VAR_8;

 if (VAR_3->prev_res == VAR_0) {
  VAR_7 = (uint32_t)
  (((VAR_4.reg_pat[VAR_2].frame_length_lines *
  VAR_4.reg_pat[VAR_2].line_length_pck) * 0x00000400) /
  (VAR_4.reg_pat[VAR_1].frame_length_lines *
  VAR_4.reg_pat[VAR_1].line_length_pck));

  VAR_8 =
  (uint32_t) ((VAR_4.reg_pat[VAR_1].pll_multiplier *
  0x00000400) / (VAR_4.reg_pat[VAR_2].pll_multiplier));
 } else {

  VAR_7 = 0x00000400;
  VAR_8 = 0x00000400;
 }


 *VAR_6 = (uint16_t) (VAR_5 * VAR_7 * VAR_8 / 0x00000400 /
  0x00000400);
}
