
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freq; int channels; int samples; int * userdata; int callback; int format; } ;
typedef TYPE_1__ SDL_AudioSpec ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(int VAR_6, int VAR_7)
{
 SDL_AudioSpec VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_4)
  FUNC_4();

 VAR_8.freq = VAR_6;
 VAR_8.format = VAR_0;
 VAR_8.channels = VAR_7 ? 2 : 1;
 VAR_8.callback = VAR_3;
 VAR_8.userdata = ((void*)0);

 VAR_9 = VAR_6 >> 6;
 for (VAR_10 = 8; (1 << VAR_10) < VAR_9; VAR_10++)
  ;
 VAR_8.samples = 1 << VAR_10;

 VAR_11 = FUNC_1(&VAR_8, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_3(VAR_5, "SDL_OpenAudio: %s\n", FUNC_0());
  return -1;
 }

 VAR_2 = VAR_1 = 0;

 FUNC_2(0);
 VAR_4 = 1;

 return 0;
}
