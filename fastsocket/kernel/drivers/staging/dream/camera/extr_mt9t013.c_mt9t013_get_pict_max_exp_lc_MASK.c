
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pict_res; } ;
struct TYPE_5__ {TYPE_1__* reg_pat; } ;
struct TYPE_4__ {int frame_length_lines; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static uint32_t FUNC_0(void)
{
 uint16_t VAR_5;

 if (VAR_3->pict_res == VAR_0) {
  VAR_5 =
  VAR_4.reg_pat[VAR_2].frame_length_lines - 1;
 } else {
  VAR_5 =
  VAR_4.reg_pat[VAR_1].frame_length_lines - 1;
 }

 return VAR_5 * 24;
}
