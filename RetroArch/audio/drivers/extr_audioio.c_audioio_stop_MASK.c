
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pause; } ;
struct audio_info {TYPE_1__ play; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct audio_info*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_3)
{
   struct audio_info VAR_4;
   int *VAR_5 = (int*)VAR_3;






   if (FUNC_0(*VAR_5, VAR_1, &VAR_4) < 0)
      return 0;

   VAR_4.play.pause = 1;

   return FUNC_0(*VAR_5, VAR_2, &VAR_4) == 0;
}
