
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int size_h; int blk_l; int size_w; int blk_p; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(uint16_t VAR_3, uint16_t *VAR_4)
{

 uint32_t VAR_5;

 VAR_5 = (uint32_t)
  ((VAR_2[VAR_1].size_h +
   VAR_2[VAR_1].blk_l) *
   (VAR_2[VAR_1].size_w +
   VAR_2[VAR_1].blk_p)) * 0x00000400 /
  ((VAR_2[VAR_0].size_h +
   VAR_2[VAR_0].blk_l) *
   (VAR_2[VAR_0].size_w +
   VAR_2[VAR_0].blk_p));


 *VAR_4 = (uint16_t)(VAR_3 * VAR_5 / 0x00000400);
}
