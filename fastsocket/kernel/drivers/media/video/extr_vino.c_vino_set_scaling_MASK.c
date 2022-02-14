
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int left; unsigned int top; unsigned int right; unsigned int bottom; } ;
struct vino_channel_settings {unsigned int decimation; int line_size; TYPE_1__ clipping; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,...) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct vino_channel_settings*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct vino_channel_settings *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_0->clipping.left;
 VAR_4 = VAR_0->clipping.top;
 VAR_5 = VAR_0->clipping.right - VAR_0->clipping.left;
 VAR_6 = VAR_0->clipping.bottom - VAR_0->clipping.top;

 VAR_7 = FUNC_1(VAR_5 / VAR_1, VAR_6 / VAR_2);

 FUNC_0("scaling w: %d, h: %d, curw: %d, curh: %d, d: %d\n",
  VAR_1, VAR_2, VAR_5, VAR_6, VAR_7);

 if (VAR_7 < 1) {
  VAR_7 = 1;
 } else if (VAR_7 > 8) {
  VAR_7 = 8;
 }

 VAR_0->decimation = VAR_7;
 FUNC_2(VAR_0, VAR_3, VAR_4, VAR_1 * VAR_7, VAR_2 * VAR_7);

 FUNC_0("scaling %d, %d, %d, %d / %d - %d\n", VAR_0->clipping.left,
  VAR_0->clipping.top, VAR_0->clipping.right, VAR_0->clipping.bottom,
  VAR_0->decimation, VAR_0->line_size);
}
