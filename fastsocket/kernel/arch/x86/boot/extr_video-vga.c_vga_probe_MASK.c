
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vga_modes ;
struct mode_info {int dummy; } ;
struct biosregs {int ax; int bl; int al; int bx; } ;
typedef int ega_modes ;
typedef int cga_modes ;
struct TYPE_4__ {int orig_video_isVGA; int orig_video_ega_bx; } ;
struct TYPE_6__ {TYPE_1__ screen_info; } ;
struct TYPE_5__ {char const* card_name; struct mode_info* modes; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__ VAR_4 ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

 TYPE_2__ VAR_5 ;

__attribute__((used)) static int FUNC_2(void)
{
 static const char *VAR_6[] = {
  "CGA/MDA/HGC", "EGA", "VGA"
 };
 static struct mode_info *VAR_7[] = {
  130,
  129,
  128,
 };
 static int VAR_8[] = {
  sizeof(130)/sizeof(struct mode_info),
  sizeof(129)/sizeof(struct mode_info),
  sizeof(128)/sizeof(struct mode_info),
 };

 struct biosregs VAR_9, VAR_10;

 FUNC_0(&VAR_9);

 VAR_9.ax = 0x1200;
 VAR_9.bl = 0x10;
 FUNC_1(0x10, &VAR_9, &VAR_10);


 VAR_4.screen_info.orig_video_ega_bx = VAR_10.bx;



 if (VAR_10.bl != 0x10) {

  VAR_9.ax = 0x1a00;
  FUNC_1(0x10, &VAR_9, &VAR_10);

  if (VAR_10.al == 0x1a) {
   VAR_3 = VAR_2;

   VAR_4.screen_info.orig_video_isVGA = 1;

  } else {
   VAR_3 = VAR_1;
  }
 } else {
  VAR_3 = VAR_0;
 }

 VAR_5.modes = VAR_7[VAR_3];
 VAR_5.card_name = VAR_6[VAR_3];
 return VAR_8[VAR_3];
}
