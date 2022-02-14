
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int left; unsigned int top; unsigned int right; unsigned int bottom; } ;
struct vino_channel_settings {size_t data_norm; unsigned int decimation; int line_size; TYPE_1__ clipping; } ;
struct TYPE_4__ {unsigned int width; unsigned int height; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct vino_channel_settings*) ;

__attribute__((used)) static void FUNC_2(struct vino_channel_settings *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = VAR_2[VAR_3->data_norm].width;
 VAR_9 = VAR_2[VAR_3->data_norm].height;
 VAR_10 = VAR_3->decimation;

 VAR_5 &= ~1;

 if (VAR_4 > VAR_8) {
  VAR_4 = 0;
 }
 if (VAR_5 > VAR_9) {
  VAR_5 = 0;
 }

 if (((VAR_6 / VAR_10) < VAR_1)
     || ((VAR_7 / VAR_10) < VAR_0)) {
  VAR_6 = VAR_1 * VAR_10;
  VAR_7 = VAR_0 * VAR_10;
 }

 if ((VAR_4 + VAR_6) > VAR_8) {
  VAR_6 = VAR_8 - VAR_4;
  if ((VAR_6 / VAR_10) < VAR_1)
   VAR_4 = VAR_8 - VAR_1 * VAR_10;
 }
 if ((VAR_5 + VAR_7) > VAR_9) {
  VAR_7 = VAR_9 - VAR_5;
  if ((VAR_7 / VAR_10) < VAR_0)
   VAR_5 = VAR_9 - VAR_0 * VAR_10;
 }

 VAR_3->clipping.left = VAR_4;
 VAR_3->clipping.top = VAR_5;
 VAR_3->clipping.right = VAR_4 + VAR_6;
 VAR_3->clipping.bottom = VAR_5 + VAR_7;

 FUNC_1(VAR_3);

 FUNC_0("clipping %d, %d, %d, %d / %d - %d\n",
  VAR_3->clipping.left, VAR_3->clipping.top, VAR_3->clipping.right,
  VAR_3->clipping.bottom, VAR_3->decimation, VAR_3->line_size);
}
