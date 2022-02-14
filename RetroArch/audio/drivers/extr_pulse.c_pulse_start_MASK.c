
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_paused; int success; int mainloop; int stream; } ;
typedef TYPE_1__ pa_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_5(void *VAR_1, bool VAR_2)
{
   bool VAR_3;
   pa_t *VAR_4 = (pa_t*)VAR_1;
   if (!VAR_4->is_paused)
      return 1;

   FUNC_0("[PulseAudio]: Unpausing.\n");

   VAR_4->success = 1;
   FUNC_2(VAR_4->mainloop);
   FUNC_1(VAR_4->stream, 0, VAR_0, VAR_4);
   FUNC_4(VAR_4->mainloop);
   VAR_3 = VAR_4->success;
   FUNC_3(VAR_4->mainloop);
   VAR_4->is_paused = 0;
   return VAR_3;
}
