
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ is_enabled; } ;
struct TYPE_10__ {int flags; int queue; TYPE_1__* pool; TYPE_4__* out; } ;
struct TYPE_9__ {unsigned int connection_current; unsigned int connection_num; TYPE_3__** connection; } ;
struct TYPE_8__ {int queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_CONNECTION_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static MMAL_BOOL_T FUNC_6(MMAL_GRAPH_PRIVATE_T *VAR_4)
{
   MMAL_BUFFER_HEADER_T *VAR_5;
   MMAL_BOOL_T VAR_6 = 0;
   MMAL_STATUS_T VAR_7;
   unsigned int VAR_8, VAR_9;


   for (VAR_8 = 0, VAR_9 = VAR_4->connection_current;
        VAR_8 < VAR_4->connection_num; VAR_8++, VAR_9++)
   {
      MMAL_CONNECTION_T *VAR_10 =
         VAR_4->connection[VAR_9%VAR_4->connection_num];

      if ((VAR_10->flags & VAR_1) ||
          !VAR_10->pool)
         continue;


      while ((VAR_5 = FUNC_3(VAR_10->pool->queue)) != ((void*)0))
      {
         VAR_6 = 1;

         VAR_7 = FUNC_2(VAR_10->out, VAR_5);
         if (VAR_7 != VAR_2)
         {
            if (VAR_10->out->is_enabled)
               FUNC_0("mmal_port_send_buffer failed (%i)", VAR_7);
            FUNC_4(VAR_10->pool->queue, VAR_5);
            VAR_6 = 0;
            break;
         }
      }
   }


   for (VAR_8 = 0, VAR_9 = VAR_4->connection_current++;
        VAR_8 < VAR_4->connection_num; VAR_8++, VAR_9++)
   {
      MMAL_CONNECTION_T *VAR_11 =
         VAR_4->connection[VAR_9%VAR_4->connection_num];
      int64_t VAR_12 = FUNC_5();

      if (VAR_11->flags & VAR_1)
         continue;
      if (VAR_11->flags & VAR_0)
         continue;




      while (FUNC_5() - VAR_12 < VAR_3 &&
             (VAR_5 = FUNC_3(VAR_11->queue)) != ((void*)0))
      {
         VAR_6 = 1;

         FUNC_1(VAR_4, VAR_11, VAR_5);
      }
   }

   return VAR_6;
}
