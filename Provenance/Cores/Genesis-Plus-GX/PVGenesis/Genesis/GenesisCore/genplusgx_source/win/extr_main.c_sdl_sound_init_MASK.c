
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; char* current_pos; scalar_t__ current_emulated_samples; } ;
struct TYPE_5__ {int channels; int samples; int callback; int format; int freq; } ;
typedef TYPE_1__ SDL_AudioSpec ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5()
{
  int VAR_6;
  SDL_AudioSpec VAR_7, VAR_8;

  if(FUNC_1(VAR_1) < 0) {
    FUNC_0(((void*)0), "SDL Audio initialization failed", "Error", 0);
    return 0;
  }

  VAR_7.freq = VAR_2;
  VAR_7.format = VAR_0;
  VAR_7.channels = 2;
  VAR_7.samples = VAR_3;
  VAR_7.callback = VAR_5;

  if(FUNC_2(&VAR_7, &VAR_8) == -1) {
    FUNC_0(((void*)0), "SDL Audio open failed", "Error", 0);
    return 0;
  }

  if(VAR_7.samples != VAR_8.samples) {
    FUNC_0(((void*)0), "SDL Audio wrong setup", "Error", 0);
    return 0;
  }

  VAR_4.current_emulated_samples = 0;
  VAR_6 = VAR_3 * 2 * sizeof(short) * 20;
  VAR_4.buffer = (char*)FUNC_3(VAR_6);
  if(!VAR_4.buffer) {
    FUNC_0(((void*)0), "Can't allocate audio buffer", "Error", 0);
    return 0;
  }
  FUNC_4(VAR_4.buffer, 0, VAR_6);
  VAR_4.current_pos = VAR_4.buffer;
  return 1;
}
