
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct trans_stream_backend {int (* trans ) (void*,int,int *,int *,int*) ;int (* stream_free ) (void*) ;int (* set_out ) (void*,int *,int ) ;int (* set_in ) (void*,int const*,int ) ;void* (* stream_new ) () ;} ;
typedef enum trans_stream_error { ____Placeholder_trans_stream_error } trans_stream_error ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*,int const*,int ) ;
 int FUNC_2 (void*,int *,int ) ;
 int FUNC_3 (void*,int,int *,int *,int*) ;
 int FUNC_4 (void*) ;

bool FUNC_5(
    struct trans_stream_backend *VAR_1, void **VAR_2,
    const uint8_t *VAR_3, uint32_t VAR_4,
    uint8_t *VAR_5, uint32_t VAR_6,
    enum trans_stream_error *VAR_7)
{
   void *VAR_8;
   bool VAR_9;
   uint32_t VAR_10, VAR_11;

   if (VAR_2 && *VAR_2)
   {
      VAR_8 = *VAR_2;
   }
   else
   {
      VAR_8 = VAR_1->stream_new();
      if (!VAR_8)
      {
         if (VAR_7)
            *VAR_7 = VAR_0;
         return 0;
      }
   }

   VAR_1->set_in(VAR_8, VAR_3, VAR_4);
   VAR_1->set_out(VAR_8, VAR_5, VAR_6);
   VAR_9 = VAR_1->trans(VAR_8, 1, &VAR_10, &VAR_11, VAR_7);

   if (VAR_2)
      *VAR_2 = VAR_8;
   else
      VAR_1->stream_free(VAR_8);

   return VAR_9;
}
