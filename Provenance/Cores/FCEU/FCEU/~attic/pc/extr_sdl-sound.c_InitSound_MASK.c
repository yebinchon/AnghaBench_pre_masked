
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spec ;
struct TYPE_4__ {int freq; int channels; int samples; scalar_t__ userdata; int callback; int format; } ;
typedef TYPE_1__ SDL_AudioSpec ;
typedef int FCEUGI ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_9(FCEUGI *VAR_11)
{
 SDL_AudioSpec VAR_12;
 if(!VAR_7) return(0);

 FUNC_7(&VAR_12,0,sizeof(VAR_12));
 if(FUNC_3(VAR_6)<0)
 {
  FUNC_8(FUNC_2());
  FUNC_1();
  return(0);
 }

 VAR_12.freq = VAR_10;
 VAR_12.format = VAR_0;
 VAR_12.channels = 1;
 VAR_12.samples = 256;
 VAR_12.callback = VAR_8;
 VAR_12.userdata = 0;

 VAR_4 = VAR_9 * VAR_10 / 1000;

 VAR_4 -= VAR_12.samples * 2;


 if(VAR_4 < VAR_12.samples) VAR_4 = VAR_12.samples;

 VAR_1 = FUNC_6(sizeof(int) * VAR_4);
 VAR_3 = VAR_5 = VAR_2 = 0;



 if(FUNC_4(&VAR_12,0)<0)
 {
  FUNC_8(FUNC_2());
  FUNC_1();
  return(0);
 }
 FUNC_5(0);
 FUNC_0(VAR_10);
 return(1);
}
