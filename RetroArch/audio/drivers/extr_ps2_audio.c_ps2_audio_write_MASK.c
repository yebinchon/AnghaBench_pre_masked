
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int running; } ;
typedef TYPE_1__ ps2_audio_t ;


 int FUNC_0 (void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   int VAR_3;
   ps2_audio_t* VAR_4 = (ps2_audio_t*)VAR_0;

   if (!VAR_4->running)
      return -1;

   VAR_3 = FUNC_0(VAR_1, VAR_2);

   return VAR_3;
}
