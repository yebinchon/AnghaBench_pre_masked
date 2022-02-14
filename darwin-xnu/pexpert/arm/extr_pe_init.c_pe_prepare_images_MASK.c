
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {int v_rotate; int v_scale; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {size_t dx; size_t dy; size_t width; size_t height; size_t count; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (size_t) ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 if ((1 & VAR_0.video.v_rotate) != 0) {




  uint32_t VAR_4 = VAR_1.dx;
  VAR_1.dx = VAR_1.dy;
  VAR_1.dy = VAR_4;
 }
}
