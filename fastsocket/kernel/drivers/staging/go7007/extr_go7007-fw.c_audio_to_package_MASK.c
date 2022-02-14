
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {TYPE_1__* board_info; } ;
typedef int __le16 ;
struct TYPE_2__ {int audio_flags; int audio_bclk_div; int audio_main_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_2, __le16 *VAR_3, int VAR_4)
{
 int VAR_5 = ((VAR_2->board_info->audio_flags &
    VAR_0 ? 1 : 0) << 11) |
   ((VAR_2->board_info->audio_flags &
    VAR_1 ? 1 : 0) << 8) |
   (((VAR_2->board_info->audio_bclk_div / 4) - 1) << 4) |
   (VAR_2->board_info->audio_main_div - 1);
 u16 VAR_6[] = {
  0x200d, 0,
  0x9002, 0,
  0x9002, 0,
  0x9031, 0,
  0x9032, 0,
  0x9033, 0,
  0x9034, 0,
  0x9035, 0,
  0x9036, 0,
  0x9037, 0,
  0x9040, 0,
  0x9000, VAR_5,
  0x9001, (VAR_2->board_info->audio_flags & 0xffff) |
     (1 << 9),
  0x9000, ((VAR_2->board_info->audio_flags &
      VAR_0 ?
      1 : 0) << 10) |
     VAR_5,
  0, 0,
  0, 0,
  0x2005, 0,
  0x9041, 0,
  0x9042, 256,
  0x9043, 0,
  0x9044, 16,
  0x9045, 16,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
 };

 return FUNC_0(VAR_3, VAR_6, 2, VAR_4);
}
