
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sndcard; } ;
struct em28xx {int has_alsa_audio; TYPE_1__ adev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct em28xx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;

 if (VAR_0->has_alsa_audio != 1) {



  return 0;
 }

 if (VAR_0->adev.sndcard) {
  FUNC_0(VAR_0->adev.sndcard);
  VAR_0->adev.sndcard = ((void*)0);
 }

 return 0;
}
