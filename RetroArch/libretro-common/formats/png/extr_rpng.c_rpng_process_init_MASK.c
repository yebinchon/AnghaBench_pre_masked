
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct rpng_process {int inflate_buf_size; int avail_out; scalar_t__ stream; TYPE_3__* stream_backend; int * inflate_buf; scalar_t__ total_out; scalar_t__ avail_in; } ;
struct TYPE_6__ {scalar_t__ size; int data; } ;
struct TYPE_9__ {int interlace; int height; int width; } ;
struct TYPE_7__ {TYPE_1__ idat_buf; TYPE_5__ ihdr; } ;
typedef TYPE_2__ rpng_t ;
struct TYPE_8__ {int (* stream_free ) (scalar_t__) ;int (* set_out ) (scalar_t__,int *,int ) ;int (* set_in ) (scalar_t__,int ,int ) ;scalar_t__ (* stream_new ) () ;} ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct rpng_process*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int *,int *,int*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (scalar_t__) ;
 TYPE_3__* FUNC_8 () ;

__attribute__((used)) static struct rpng_process *FUNC_9(rpng_t *VAR_0)
{
   uint8_t *VAR_1 = ((void*)0);
   struct rpng_process *VAR_2 = (struct rpng_process*)FUNC_0(1, sizeof(*VAR_2));

   if (!VAR_2)
      return ((void*)0);

   VAR_2->stream_backend = FUNC_8();

   FUNC_3(&VAR_0->ihdr, VAR_0->ihdr.width,
         VAR_0->ihdr.height, ((void*)0), ((void*)0), &VAR_2->inflate_buf_size);
   if (VAR_0->ihdr.interlace == 1)
      VAR_2->inflate_buf_size *= 2;

   VAR_2->stream = VAR_2->stream_backend->stream_new();

   if (!VAR_2->stream)
   {
      FUNC_1(VAR_2);
      return ((void*)0);
   }

   VAR_1 = (uint8_t*)FUNC_2(VAR_2->inflate_buf_size);
   if (!VAR_1)
      goto error;

   VAR_2->inflate_buf = VAR_1;
   VAR_2->avail_in = VAR_0->idat_buf.size;
   VAR_2->avail_out = VAR_2->inflate_buf_size;
   VAR_2->total_out = 0;
   VAR_2->stream_backend->set_in(
         VAR_2->stream,
         VAR_0->idat_buf.data,
         (uint32_t)VAR_0->idat_buf.size);
   VAR_2->stream_backend->set_out(
         VAR_2->stream,
         VAR_2->inflate_buf,
         (uint32_t)VAR_2->inflate_buf_size);

   return VAR_2;

error:
   if (VAR_2)
   {
      if (VAR_2->stream)
         VAR_2->stream_backend->stream_free(VAR_2->stream);
      FUNC_1(VAR_2);
   }
   return ((void*)0);
}
