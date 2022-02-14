
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float audio_mixer_volume; } ;
struct TYPE_6__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
typedef int msg ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_1 (float,float) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (TYPE_2__*,float,float) ;
 TYPE_2__* VAR_4 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_7 (char*,int,char*,char*,float) ;

__attribute__((used)) static void FUNC_8(float VAR_5)
{
   char VAR_6[128];
   settings_t *VAR_7 = VAR_4;
   float VAR_8 = VAR_7->floats.audio_mixer_volume + VAR_5;

   VAR_8 = FUNC_0(VAR_8, -80.0f);
   VAR_8 = FUNC_1(VAR_8, 12.0f);

   FUNC_4(VAR_7, VAR_7->floats.audio_mixer_volume, VAR_8);

   FUNC_7(VAR_6, sizeof(VAR_6), "%s: %.1f dB",
         FUNC_5(VAR_3),
         VAR_8);
   FUNC_6(VAR_6, 1, 180, 1, ((void*)0), VAR_2, VAR_1);
   FUNC_2("%s\n", VAR_6);

   FUNC_3(VAR_0, VAR_8);
}
