
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ active; } ;
struct delta_frame {int* have_real; TYPE_2__** real_input; } ;
struct TYPE_8__ {size_t self_ptr; size_t connections_size; scalar_t__* read_frame_count; scalar_t__ self_frame_count; size_t* client_devices; int * read_ptr; struct delta_frame* buffer; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;
typedef TYPE_2__* netplay_input_state_t ;
struct TYPE_9__ {size_t client_num; int size; int data; struct TYPE_9__* next; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_4 (TYPE_2__**,size_t,int,int,int) ;
 int FUNC_5 (TYPE_1__*,struct delta_frame*,int *,int *,size_t,int) ;

void FUNC_6(netplay_t *VAR_2)
{
   struct delta_frame *VAR_3, *VAR_4 = &VAR_2->buffer[VAR_2->self_ptr];
   size_t VAR_5;
   for (VAR_5 = 0; VAR_5 < VAR_2->connections_size; VAR_5++)
   {
      struct netplay_connection *VAR_6 = &VAR_2->connections[VAR_5];
      if (VAR_6->active &&
          VAR_6->mode == VAR_1)
      {
         uint32_t VAR_7, VAR_8;
         uint32_t VAR_9 = (uint32_t)(VAR_5 + 1);



         if (VAR_2->read_frame_count[VAR_9] > VAR_2->self_frame_count)
            continue;


         if (!VAR_4->have_real[VAR_9])
         {
            VAR_7 = VAR_2->client_devices[VAR_9];


            VAR_3 = &VAR_2->buffer[FUNC_1(VAR_2->self_ptr)];
            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            {
               netplay_input_state_t VAR_10, VAR_11;
               if (!(VAR_7 & (1<<VAR_8)))
                  continue;
               VAR_11 = VAR_3->real_input[VAR_8];
               while (VAR_11 && VAR_11->client_num != VAR_9)
                  VAR_11 = VAR_11->next;
               if (!VAR_11)
               {

                  FUNC_4(&VAR_4->real_input[VAR_8],
                        VAR_9,
                        FUNC_3(VAR_2, 1 << VAR_8), 1,
                        0);

               }
               else
               {

                  VAR_10 = FUNC_4(&VAR_4->real_input[VAR_8],
                        VAR_9, VAR_11->size, 1, 0);
                  FUNC_2(VAR_10->data, VAR_11->data,
                        VAR_11->size * sizeof(uint32_t));
               }
            }
            VAR_4->have_real[VAR_9] = 1;
         }


         FUNC_5(VAR_2, VAR_4, ((void*)0), ((void*)0), VAR_9, 0);


         VAR_2->read_ptr[VAR_9] = FUNC_0(VAR_2->self_ptr);
         VAR_2->read_frame_count[VAR_9] = VAR_2->self_frame_count + 1;
      }
   }
}
