
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cond; int cond_mutex; int mutex; int thread; } ;
struct TYPE_9__ {int chunk_size; } ;
struct TYPE_8__ {int socket; } ;
struct TYPE_11__ {int conn_type; int total_written; int channels; int rate; int samplesize; int has_written; TYPE_3__ thread; scalar_t__ thread_active; int start_time; TYPE_2__ backend_info; TYPE_1__ conn; int fifo_buffer; } ;
typedef TYPE_4__ rsound_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14 ( void * VAR_1 )
{

   rsound_t *VAR_2 = VAR_1;
   int VAR_3;
   char VAR_4[VAR_2->backend_info.chunk_size];



   for (;;)
   {
      for(;;)
      {
         FUNC_1();



         if ( (VAR_2->conn_type & VAR_0) && (VAR_2->total_written > VAR_2->channels * VAR_2->rate * VAR_2->samplesize) )
         {
            FUNC_7(VAR_2);
            FUNC_8(VAR_2);
         }


         FUNC_11(VAR_2->thread.mutex);
         if ( FUNC_3(VAR_2->fifo_buffer) < VAR_2->backend_info.chunk_size || !VAR_2->thread_active )
         {
            FUNC_12(VAR_2->thread.mutex);
            break;
         }
         FUNC_12(VAR_2->thread.mutex);

         FUNC_1();
         FUNC_11(VAR_2->thread.mutex);
         FUNC_2(VAR_2->fifo_buffer, VAR_4, sizeof(VAR_4));
         FUNC_12(VAR_2->thread.mutex);
         VAR_3 = FUNC_6(VAR_2->conn.socket, VAR_4, sizeof(VAR_4), 1);


         if ( VAR_3 != (int)VAR_2->backend_info.chunk_size )
         {
            FUNC_1();
            FUNC_5(VAR_2);


            FUNC_9(VAR_2->thread.cond);


            FUNC_13(VAR_2->thread.thread);
            return;
         }


         if ( !VAR_2->has_written )
         {
            FUNC_11(VAR_2->thread.mutex);
            VAR_2->start_time = FUNC_4();
            VAR_2->has_written = 1;
            FUNC_12(VAR_2->thread.mutex);
         }


         FUNC_11(VAR_2->thread.mutex);
         VAR_2->total_written += VAR_3;
         FUNC_12(VAR_2->thread.mutex);


         FUNC_9(VAR_2->thread.cond);

      }



      if ( VAR_2->thread_active )
      {



         FUNC_11(VAR_2->thread.cond_mutex);
         FUNC_9(VAR_2->thread.cond);

         if ( VAR_2->thread_active )
         {
            FUNC_0("[RSound] Thread going to sleep.\n");
            FUNC_10(VAR_2->thread.cond, VAR_2->thread.cond_mutex);
            FUNC_0("[RSound] Thread woke up.\n");
         }

         FUNC_12(VAR_2->thread.cond_mutex);
         FUNC_0("[RSound] Thread unlocked cond_mutex.\n");
      }

      else
      {
         FUNC_9(VAR_2->thread.cond);
         return;
      }

   }
}
