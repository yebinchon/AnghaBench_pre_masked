
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* reg; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
struct TYPE_7__ {double scale; double hscale40; double hscale32; } ;
struct TYPE_6__ {int x; int y; int z; int u; int v; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 VAR_3[0].x = VAR_3[0].y =
 VAR_3[0].z = VAR_3[1].z = 0;

 VAR_6 = (int)(240.0 * VAR_1.scale + 0.5);
 if (VAR_0.video.reg[12] & 1) {
  VAR_5 = (int)(320.0 * VAR_1.scale * VAR_1.hscale40 + 0.5);
  VAR_4 = 320;
 } else {
  VAR_5 = (int)(256.0 * VAR_1.scale * VAR_1.hscale32 + 0.5);
  VAR_4 = 256;
 }

 if (VAR_5 & 1) VAR_5++;
 if (VAR_6 & 1) VAR_6++;

 if (VAR_5 >= 480) {
  VAR_3[0].u = (VAR_5-480)/2;
  VAR_3[1].u = VAR_4 - (VAR_5-480)/2 - 1;
  VAR_5 = 480;
  VAR_7 = 0;
 } else {
  VAR_3[0].u = 0;
  VAR_3[1].u = VAR_4;
  VAR_7 = 240 - VAR_5/2;
 }
 if (VAR_5 > 320 && VAR_5 <= 480) VAR_9 = 1;

 if (VAR_6 >= 272) {
  VAR_3[0].v = (VAR_6-272)/2;
  VAR_3[1].v = 240 - (VAR_6-272)/2;
  VAR_6 = 272;
  VAR_8 = 0;
 } else {
  VAR_3[0].v = 0;
  VAR_3[1].v = 240;
  VAR_8 = 136 - VAR_6/2;
 }

 VAR_3[1].x = VAR_5;
 VAR_3[1].y = VAR_6;
 if (VAR_7 < 0) VAR_7 = 0;
 if (VAR_8 < 0) VAR_8 = 0;
 if (VAR_9) {
  VAR_3[0].u++;
  VAR_3[0].x++;
  VAR_3[1].u--;
  VAR_3[1].x--;
 }
 VAR_2 = (VAR_8*512 + VAR_7) * 2;







}
