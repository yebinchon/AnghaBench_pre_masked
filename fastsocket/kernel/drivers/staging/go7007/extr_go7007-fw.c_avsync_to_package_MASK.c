
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int fps_scale; int sensor_framerate; TYPE_1__* board_info; } ;
typedef int __le16 ;
struct TYPE_2__ {int audio_rate; } ;


 int FUNC_0 (int *,int*,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_0, __le16 *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->board_info->audio_rate * 1001 * VAR_0->fps_scale;
 int VAR_4 = VAR_3 / VAR_0->sensor_framerate;
 int VAR_5 = VAR_4 * 215 / 100;
 int VAR_6 = FUNC_1(VAR_0->sensor_framerate,
     VAR_3 % VAR_0->sensor_framerate);
 int VAR_7 = (VAR_3 % VAR_0->sensor_framerate) / VAR_6;
 int VAR_8 = (VAR_0->sensor_framerate - VAR_3 % VAR_0->sensor_framerate) / VAR_6;
 u16 VAR_9[] = {
  0x200e, 0,
  0xbf98, (u16)((-VAR_5) & 0xffff),
  0xbf99, (u16)((-VAR_5) >> 16),
  0xbf92, 0,
  0xbf93, 0,
  0xbff4, VAR_7 > VAR_8 ? VAR_7 : VAR_8,
  0xbff5, VAR_7 < VAR_8 ? VAR_7 : VAR_8,
  0xbff6, VAR_7 < VAR_8 ? VAR_4 : VAR_4 + 1,
  0xbff7, VAR_7 > VAR_8 ? VAR_4 : VAR_4 + 1,
  0xbff8, 0,
  0xbff9, 0,
  0xbffa, VAR_5 & 0xffff,
  0xbffb, VAR_5 >> 16,
  0xbf94, 0,
  0xbf95, 0,
  0, 0,
 };

 return FUNC_0(VAR_1, VAR_9, 1, VAR_2);
}
