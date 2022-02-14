
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

__attribute__((used)) static bool FUNC_5(void *VAR_1)
{
   bool VAR_2;
   pa_t *VAR_3 = (pa_t*)VAR_1;
   if (VAR_3->is_paused)
      return 1;

   FUNC_0("[PulseAudio]: Pausing.\n");

   VAR_3->success = 1;
   FUNC_2(VAR_3->mainloop);
   FUNC_1(VAR_3->stream, 1, VAR_0, VAR_3);
   FUNC_4(VAR_3->mainloop);
   VAR_2 = VAR_3->success;
   FUNC_3(VAR_3->mainloop);
   VAR_3->is_paused = 1;
   return VAR_2;
}
