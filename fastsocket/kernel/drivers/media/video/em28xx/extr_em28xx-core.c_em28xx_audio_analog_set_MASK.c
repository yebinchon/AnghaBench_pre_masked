
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ ac97; int has_audio; } ;
struct TYPE_5__ {int xclk; } ;
struct em28xx {int volume; int ctl_aoutput; scalar_t__ mute; TYPE_2__ audio_mode; TYPE_1__ board; } ;
struct TYPE_7__ {int mux; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct em28xx*,int ,int) ;
 int FUNC_5 (struct em28xx*,int ,int) ;
 int FUNC_6 (int) ;
 TYPE_3__* VAR_8 ;

int FUNC_7(struct em28xx *VAR_9)
{
 int VAR_10, VAR_11;
 u8 VAR_12;

 if (!VAR_9->audio_mode.has_audio)
  return 0;




 if (VAR_9->audio_mode.ac97 != VAR_5) {

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
   VAR_10 = FUNC_4(VAR_9, VAR_8[VAR_11].reg, 0x8000);
   if (VAR_10 < 0)
    FUNC_3("couldn't setup AC97 register %d\n",
         VAR_8[VAR_11].reg);
  }
 }

 VAR_12 = VAR_9->board.xclk & 0x7f;
 if (!VAR_9->mute)
  VAR_12 |= VAR_7;

 VAR_10 = FUNC_5(VAR_9, VAR_6, VAR_12);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_6(10);


 VAR_10 = FUNC_2(VAR_9);


 if (VAR_9->audio_mode.ac97 != VAR_5) {
  int VAR_13;

  FUNC_4(VAR_9, VAR_2, 0x4200);
  FUNC_4(VAR_9, VAR_0, 0x0031);
  FUNC_4(VAR_9, VAR_1, 0xbb80);


  VAR_13 = (0x1f - VAR_9->volume) | ((0x1f - VAR_9->volume) << 8);


  if (VAR_9->mute)
   VAR_13 |= 0x8000;


  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
   if (VAR_9->ctl_aoutput & VAR_8[VAR_11].mux)
    VAR_10 = FUNC_4(VAR_9, VAR_8[VAR_11].reg,
       VAR_13);
   if (VAR_10 < 0)
    FUNC_3("couldn't setup AC97 register %d\n",
         VAR_8[VAR_11].reg);
  }

  if (VAR_9->ctl_aoutput & VAR_4) {
   int VAR_14 = FUNC_1(VAR_9->ctl_aoutput);



   VAR_14 |= (VAR_14 << 8);

   FUNC_4(VAR_9, VAR_3, VAR_14);
  }
 }

 return VAR_10;
}
