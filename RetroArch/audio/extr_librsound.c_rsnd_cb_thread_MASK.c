
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ssize_t ;
struct TYPE_14__ {size_t chunk_size; } ;
struct TYPE_13__ {int thread; } ;
struct TYPE_12__ {int socket; } ;
struct TYPE_15__ {size_t cb_max_size; size_t (* audio_callback ) (int *,size_t,int ) ;int max_latency; int has_written; int total_written; int conn_type; int channels; int rate; int samplesize; TYPE_3__ backend_info; int start_time; int cb_data; int (* error_callback ) (int ) ;TYPE_2__ thread; TYPE_1__ conn; scalar_t__ thread_active; } ;
typedef TYPE_4__ rsound_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;
 size_t FUNC_9 (int ,int *,size_t,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ) ;
 size_t FUNC_13 (int *,size_t,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(void *VAR_1)
{
   rsound_t *VAR_2 = VAR_1;
   size_t VAR_3 = VAR_2->backend_info.chunk_size;
   if (VAR_2->cb_max_size != 0 && VAR_2->cb_max_size < VAR_3)
      VAR_3 = VAR_2->cb_max_size;

   uint8_t VAR_4[VAR_2->backend_info.chunk_size];

   while (VAR_2->thread_active)
   {
      size_t VAR_5 = 0;

      while (VAR_5 < VAR_2->backend_info.chunk_size)
      {
         size_t VAR_6 = VAR_3 < VAR_2->backend_info.chunk_size - VAR_5 ? VAR_3 : VAR_2->backend_info.chunk_size - VAR_5;

         FUNC_3(VAR_2);
         ssize_t VAR_7 = VAR_2->audio_callback(VAR_4 + VAR_5, VAR_6, VAR_2->cb_data);
         FUNC_4(VAR_2);

         if (VAR_7 < 0)
         {
            FUNC_8(VAR_2);
            FUNC_12(VAR_2->thread.thread);
            VAR_2->error_callback(VAR_2->cb_data);
            return;
         }

         VAR_5 += VAR_7;

         if (VAR_7 < (ssize_t)VAR_6)
         {
            if ((int)FUNC_5(VAR_2) < VAR_2->max_latency / 2)
            {
               FUNC_0("[RSound] Callback thread: Requested %d bytes, got %d.\n", (int)VAR_6, (int)VAR_7);
               FUNC_1(VAR_4 + VAR_5, 0, VAR_6 - VAR_7);
               VAR_5 += VAR_6 - VAR_7;
            }
            else
            {



               FUNC_2(1);
            }
         }
      }

      ssize_t VAR_8 = FUNC_9(VAR_2->conn.socket, VAR_4, VAR_2->backend_info.chunk_size, 1);
      if (VAR_8 != (ssize_t)VAR_2->backend_info.chunk_size)
      {
         FUNC_8(VAR_2);
         FUNC_12(VAR_2->thread.thread);
         VAR_2->error_callback(VAR_2->cb_data);
         return;
      }


      if (!VAR_2->has_written)
      {
         VAR_2->start_time = FUNC_7();
         VAR_2->has_written = 1;
      }

      VAR_2->total_written += VAR_2->backend_info.chunk_size;

      if ( (VAR_2->conn_type & VAR_0) && (VAR_2->total_written > VAR_2->channels * VAR_2->rate * VAR_2->samplesize) )
      {
         FUNC_10(VAR_2);
         FUNC_11(VAR_2);
      }

      if (VAR_2->has_written)
         FUNC_6(VAR_2);
   }
}
