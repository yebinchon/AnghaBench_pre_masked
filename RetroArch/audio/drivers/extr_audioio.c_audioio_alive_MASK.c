
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pause; } ;
struct audio_info {TYPE_1__ play; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct audio_info*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1)
{
   struct audio_info VAR_2;
   int *VAR_3 = (int*)VAR_1;

   if (FUNC_0(*VAR_3, VAR_0, &VAR_2) < 0)
      return 0;

   return !VAR_2.play.pause;
}
