
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rpng_process {scalar_t__ avail_in; scalar_t__ avail_out; int inflate_initialized; int palette; scalar_t__ restore_buf_size; scalar_t__ adam7_restore_buf_size; int * stream; TYPE_1__* stream_backend; int total_out; } ;
struct TYPE_7__ {int width; int height; int interlace; } ;
struct TYPE_6__ {TYPE_4__ ihdr; int palette; scalar_t__ process; } ;
typedef TYPE_2__ rpng_t ;
typedef enum trans_stream_error { ____Placeholder_trans_stream_error } trans_stream_error ;
struct TYPE_5__ {int (* trans ) (int *,int,scalar_t__*,scalar_t__*,int*) ;int (* stream_free ) (int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,struct rpng_process*) ;
 int FUNC_3 (int *,int,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(rpng_t *VAR_1, uint32_t **VAR_2)
{
   bool VAR_3;
   enum trans_stream_error VAR_4;
   uint32_t VAR_5, VAR_6;
   struct rpng_process *VAR_7 = (struct rpng_process*)VAR_1->process;
   bool VAR_8 = (VAR_7->avail_in > 0
         && VAR_7->avail_out > 0);

   if (!VAR_8)
      goto end;

   VAR_3 = VAR_7->stream_backend->trans(VAR_7->stream, 0, &VAR_5, &VAR_6, &VAR_4);

   if (!VAR_3 && VAR_4 != VAR_0)
      goto error;

   VAR_7->avail_in -= VAR_5;
   VAR_7->avail_out -= VAR_6;
   VAR_7->total_out += VAR_6;

   if (VAR_4)
      return 0;

end:
   VAR_7->stream_backend->stream_free(VAR_7->stream);
   VAR_7->stream = ((void*)0);






   *VAR_2 = (uint32_t*)FUNC_0(VAR_1->ihdr.width *
         VAR_1->ihdr.height * sizeof(uint32_t));

   if (!*VAR_2)
      goto false_end;

   VAR_7->adam7_restore_buf_size = 0;
   VAR_7->restore_buf_size = 0;
   VAR_7->palette = VAR_1->palette;

   if (VAR_1->ihdr.interlace != 1)
      if (FUNC_2(&VAR_1->ihdr, VAR_7) == -1)
         goto false_end;

   VAR_7->inflate_initialized = 1;
   return 1;

error:
false_end:
   VAR_7->inflate_initialized = 0;
   return -1;
}
