
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float audio_volume; } ;
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
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_8 (char*,int,char*,char*,float) ;

__attribute__((used)) static void FUNC_9(float VAR_6)
{
   char VAR_7[128];
   settings_t *VAR_8 = VAR_4;
   float VAR_9 = VAR_8->floats.audio_volume + VAR_6;

   VAR_9 = FUNC_0(VAR_9, -80.0f);
   VAR_9 = FUNC_1(VAR_9, 12.0f);

   FUNC_4(VAR_8, VAR_8->floats.audio_volume, VAR_9);

   FUNC_8(VAR_7, sizeof(VAR_7), "%s: %.1f dB",
         FUNC_6(VAR_3),
         VAR_9);






      FUNC_7(VAR_7, 1, 180, 1, ((void*)0), VAR_2, VAR_1);

   FUNC_2("%s\n", VAR_7);

   FUNC_3(VAR_0, VAR_9);
}
