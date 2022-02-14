
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int ac97; } ;
struct TYPE_4__ {scalar_t__ mute_gpio; scalar_t__ has_msp34xx; scalar_t__ is_em2800; } ;
struct em28xx {int ctl_ainput; TYPE_2__ audio_mode; int ctl_input; TYPE_1__ board; scalar_t__ mute; } ;
struct TYPE_6__ {scalar_t__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct em28xx*,scalar_t__) ;
 int FUNC_2 (struct em28xx*,int ,int ,int) ;
 int FUNC_3 (struct em28xx*,int ,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct em28xx*) ;

__attribute__((used)) static int FUNC_6(struct em28xx *VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 if (VAR_6->board.is_em2800) {
  if (VAR_6->ctl_ainput == 129)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_0;

  VAR_7 = FUNC_3(VAR_6, VAR_2, &VAR_8, 1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 if (VAR_6->board.has_msp34xx)
  VAR_8 = VAR_4;
 else {
  switch (VAR_6->ctl_ainput) {
  case 129:
   VAR_8 = VAR_4;
   break;
  default:
   VAR_8 = VAR_3;
   break;
  }
 }

 if (VAR_6->board.mute_gpio && VAR_6->mute)
  FUNC_1(VAR_6, VAR_6->board.mute_gpio);
 else
  FUNC_1(VAR_6, FUNC_0(VAR_6->ctl_input)->gpio);

 VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_8, 0xc0);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_4(5);

 switch (VAR_6->audio_mode.ac97) {
 case 128:
  break;
 default:
  VAR_7 = FUNC_5(VAR_6);
 }

 return VAR_7;
}
