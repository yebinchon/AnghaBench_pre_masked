
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ size; int data_const; int data; } ;
typedef TYPE_1__ retro_ctx_serialize_info_t ;
struct TYPE_15__ {scalar_t__ compression_backend; } ;
struct TYPE_14__ {size_t run_ptr; scalar_t__ state_size; int quirks; TYPE_5__ compress_zlib; TYPE_5__ compress_nil; scalar_t__ desync; TYPE_10__* buffer; int run_frame_count; } ;
typedef TYPE_2__ netplay_t ;
struct TYPE_12__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_10__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,TYPE_5__*) ;

void FUNC_5(netplay_t *VAR_3,
      retro_ctx_serialize_info_t *VAR_4, bool VAR_5)
{
   retro_ctx_serialize_info_t VAR_6;

   FUNC_3(VAR_3);


   if (VAR_5 || !VAR_4)
   {
      if (FUNC_2(VAR_3,
               &VAR_3->buffer[VAR_3->run_ptr], VAR_3->run_frame_count))
      {
         if (!VAR_4)
         {
            VAR_6.size = VAR_3->state_size;
            VAR_6.data = VAR_3->buffer[VAR_3->run_ptr].state;
            if (!FUNC_0(&VAR_6))
               return;
            VAR_6.data_const = VAR_6.data;
            VAR_4 = &VAR_6;
         }
         else
         {
            if (VAR_4->size <= VAR_3->state_size)
               FUNC_1(VAR_3->buffer[VAR_3->run_ptr].state,
                     VAR_4->data_const, VAR_4->size);
         }
      }

      else
         return;
   }


   if (VAR_3->desync)
      return;


   if (VAR_3->quirks & (
              VAR_1
            | VAR_2))
      return;


   if (VAR_3->compress_nil.compression_backend)
      FUNC_4(VAR_3, VAR_4, 0, &VAR_3->compress_nil);
   if (VAR_3->compress_zlib.compression_backend)
      FUNC_4(VAR_3, VAR_4, VAR_0,
         &VAR_3->compress_zlib);
}
