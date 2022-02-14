
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct fps_cfg {int fps_div; int f_mult; int pict_fps_div; } ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int fps_divider; int pict_fps_divider; } ;
struct TYPE_6__ {TYPE_1__* reg_pat; } ;
struct TYPE_5__ {int frame_length_lines; int line_length_pck; } ;


 int FUNC_0 (char*,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int32_t FUNC_2(struct fps_cfg *VAR_9)
{

 int32_t VAR_10 = 0;

 VAR_7->fps_divider = VAR_9->fps_div;
 VAR_7->pict_fps_divider = VAR_9->pict_fps_div;

 VAR_10 = FUNC_1(VAR_6->addr,
   VAR_3,
   VAR_1);
 if (VAR_10 < 0)
  return -VAR_0;

 FUNC_0("mt9t013_set_fps: fps_div is %d, frame_rate is %d\n",
   VAR_9->fps_div,
   (uint16_t) (VAR_8.reg_pat[VAR_5].
      frame_length_lines *
     VAR_9->fps_div/0x00000400));

 FUNC_0("mt9t013_set_fps: fps_mult is %d, frame_rate is %d\n",
   VAR_9->f_mult,
   (uint16_t)(VAR_8.reg_pat[VAR_5].
     line_length_pck *
     VAR_9->f_mult / 0x00000400));

 VAR_10 = FUNC_1(VAR_6->addr,
   VAR_4,
   (uint16_t) (
   VAR_8.reg_pat[VAR_5].line_length_pck *
   VAR_9->f_mult / 0x00000400));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6->addr,
   VAR_3,
   VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_10;
}
