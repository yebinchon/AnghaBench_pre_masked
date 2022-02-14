
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fps_cfg {int fps_div; } ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int fps_divider; } ;
struct TYPE_4__ {int size_h; int blk_l; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int32_t FUNC_1(struct fps_cfg *VAR_6)
{

 int32_t VAR_7 = 0;

 VAR_4->fps_divider = VAR_6->fps_div;

 VAR_7 = FUNC_0(VAR_3->addr,
  VAR_1,
  (((VAR_5[VAR_2].size_h +
   VAR_5[VAR_2].blk_l) *
   VAR_4->fps_divider / 0x400) & 0xFF00) >> 8);
 if (VAR_7 < 0)
  goto set_fps_done;

 VAR_7 = FUNC_0(VAR_3->addr,
  VAR_0,
  (((VAR_5[VAR_2].size_h +
   VAR_5[VAR_2].blk_l) *
   VAR_4->fps_divider / 0x400) & 0xFF00));

set_fps_done:
 return VAR_7;
}
