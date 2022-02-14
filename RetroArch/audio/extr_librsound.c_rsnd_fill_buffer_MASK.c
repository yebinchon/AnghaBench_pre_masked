
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cond; int mutex; int cond_mutex; } ;
struct TYPE_5__ {TYPE_1__ thread; int fifo_buffer; int thread_active; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static size_t FUNC_7(rsound_t *VAR_0, const char *VAR_1, size_t VAR_2)
{


   for (;;)
   {

      if ( !VAR_0->thread_active )
         return 0;

      FUNC_5(VAR_0->thread.mutex);
      if ( FUNC_2(VAR_0->fifo_buffer) >= VAR_2 )
      {
         FUNC_6(VAR_0->thread.mutex);
         break;
      }
      FUNC_6(VAR_0->thread.mutex);


      FUNC_5(VAR_0->thread.cond_mutex);
      FUNC_3(VAR_0->thread.cond);

      FUNC_0("[RSound] rsnd_fill_buffer: Going to sleep.\n");
      FUNC_4(VAR_0->thread.cond, VAR_0->thread.cond_mutex);
      FUNC_0("[RSound] rsnd_fill_buffer: Woke up.\n");
      FUNC_6(VAR_0->thread.cond_mutex);
   }

   FUNC_5(VAR_0->thread.mutex);
   FUNC_1(VAR_0->fifo_buffer, VAR_1, VAR_2);
   FUNC_6(VAR_0->thread.mutex);




   FUNC_3(VAR_0->thread.cond);

   return VAR_2;
}
