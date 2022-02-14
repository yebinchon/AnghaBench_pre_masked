
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ active; } ;
struct delta_frame {int have_local; int* have_real; int * real_input; } ;
typedef int (* retro_input_state_t ) (int,int const,unsigned int,unsigned int) ;
struct TYPE_10__ {int (* state_cb ) (int,int const,unsigned int,unsigned int) ;} ;
struct TYPE_11__ {size_t self_ptr; int self_devices; int* config_devices; scalar_t__ self_mode; size_t self_client_num; unsigned int connections_size; scalar_t__ is_server; struct netplay_connection* connections; int self_frame_count; scalar_t__* read_frame_count; int * read_ptr; TYPE_1__ cbs; struct delta_frame* buffer; } ;
typedef TYPE_2__ netplay_t ;
typedef TYPE_3__* netplay_input_state_t ;
typedef int int16_t ;
struct TYPE_12__ {int* data; unsigned int size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (size_t) ;

 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;

 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct delta_frame*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_5 (int *,size_t,int ,int,int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (TYPE_2__*,struct netplay_connection*) ;

__attribute__((used)) static bool FUNC_8(netplay_t *VAR_10)
{
   unsigned VAR_11;
   struct delta_frame *VAR_12 = &VAR_10->buffer[VAR_10->self_ptr];
   netplay_input_state_t VAR_13 = ((void*)0);
   uint32_t VAR_14, VAR_15 = 0, VAR_16, VAR_17, VAR_18;

   if (!FUNC_3(VAR_10, VAR_12, VAR_10->self_frame_count))
      return 0;


   if (VAR_12->have_local)
      return 1;

   VAR_14 = VAR_10->self_devices;
   VAR_15 = 0;

   for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
   {
      if (!(VAR_14 & (1<<VAR_16)))
         continue;


      VAR_17 = VAR_10->config_devices[VAR_16]&VAR_9;

      for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
      {
         if (VAR_15 & (1<<VAR_18))
            continue;
         if ((VAR_10->config_devices[VAR_18]&VAR_9) == VAR_17)
            break;
      }

      if (VAR_18 == VAR_1)
         VAR_18 = 0;
      VAR_15 |= (1<<VAR_18);

      VAR_13 = FUNC_5(&VAR_12->real_input[VAR_16],

            (VAR_10->self_mode==VAR_4)?VAR_0:VAR_10->self_client_num,
            FUNC_4(VAR_10, 1 << VAR_16),
            1, 0);
      if (!VAR_13)
         continue;



      if (!FUNC_1() && VAR_10->self_frame_count > 0)
      {
         uint32_t *VAR_19 = VAR_13->data;
         retro_input_state_t VAR_20 = VAR_10->cbs.state_cb;
         unsigned VAR_21 = VAR_10->config_devices[VAR_16]&VAR_9;

         switch (VAR_21)
         {
            case 132:
               for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
               {
                  int16_t VAR_22 = VAR_20(VAR_18,
                        132, (unsigned)VAR_11, 0);
                  int16_t VAR_23 = VAR_20(VAR_18,
                        132, (unsigned)VAR_11, 1);
                  VAR_19[1 + VAR_11] = (uint16_t)VAR_22 | (((uint16_t)VAR_23) << 16);
               }


            case 131:
               for (VAR_11 = 0; VAR_11 <= VAR_6; VAR_11++)
               {
                  int16_t VAR_24 = VAR_20(VAR_18,
                        131, 0, (unsigned)VAR_11);
                  VAR_19[0] |= VAR_24 ? 1 << VAR_11 : 0;
               }
               break;

            case 128:
            case 129:
            {
               int16_t VAR_25 = VAR_20(VAR_18, VAR_21, 0, 0);
               int16_t VAR_26 = VAR_20(VAR_18, VAR_21, 0, 1);
               VAR_19[1] = (uint16_t)VAR_25 | (((uint16_t)VAR_26) << 16);
               for (VAR_11 = 2;
                     VAR_11 <= (unsigned)((VAR_21 == 128) ?
                           VAR_8 :
                           VAR_7);
                     VAR_11++)
               {
                  int16_t VAR_27 = VAR_20(VAR_18, VAR_21, 0,
                        (unsigned) VAR_11);
                  VAR_19[0] |= VAR_27 ? 1 << VAR_11 : 0;
               }
               break;
            }

            case 130:
            {
               unsigned VAR_28, VAR_29 = 0, VAR_30 = 1;
               for (VAR_28 = 1; VAR_28 < VAR_5; VAR_28++)
               {
                  VAR_19[VAR_29] |=
                        VAR_20(VAR_18, 130, 0, FUNC_6(VAR_28)) ?
                              (1U << VAR_30) : 0;
                  VAR_30++;
                  if (VAR_30 >= 32)
                  {
                     VAR_30 = 0;
                     VAR_29++;
                     if (VAR_29 >= VAR_13->size)
                        break;
                  }
               }
               break;
            }
         }
      }
   }

   VAR_12->have_local = 1;
   if (VAR_10->self_mode == VAR_3)
   {
      VAR_12->have_real[VAR_10->self_client_num] = 1;
      VAR_10->read_ptr[VAR_10->self_client_num] = FUNC_0(VAR_10->self_ptr);
      VAR_10->read_frame_count[VAR_10->self_client_num] = VAR_10->self_frame_count + 1;
   }


   for (VAR_11 = 0; VAR_11 < VAR_10->connections_size; VAR_11++)
   {
      struct netplay_connection *VAR_31 = &VAR_10->connections[VAR_11];
      if (VAR_31->active && VAR_31->mode >= VAR_2)
         FUNC_7(VAR_10, &VAR_10->connections[VAR_11]);
   }


   if (VAR_10->is_server)
      FUNC_2(VAR_10);

   return 1;
}
