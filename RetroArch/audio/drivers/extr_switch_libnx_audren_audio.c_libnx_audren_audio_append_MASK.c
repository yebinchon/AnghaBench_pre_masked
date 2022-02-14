
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {size_t current_pool_ptr; size_t mempool; int buffer_size; size_t current_size; int * current_wavebuf; int drv; int update_lock; int * wavebufs; } ;
typedef TYPE_1__ libnx_audren_t ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (void*,void const*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static size_t FUNC_9(libnx_audren_t* VAR_0, const void *VAR_1, size_t VAR_2)
{
   ssize_t VAR_3 = -1;

   if(!VAR_0->current_wavebuf)
   {
      VAR_3 = FUNC_5(VAR_0);
      if(VAR_3 == -1)
         return 0;

      VAR_0->current_wavebuf = &VAR_0->wavebufs[VAR_3];
      VAR_0->current_pool_ptr = VAR_0->mempool + (VAR_3 * VAR_0->buffer_size);
      VAR_0->current_size = 0;
   }

   if(VAR_2 > VAR_0->buffer_size - VAR_0->current_size)
   {
      VAR_2 = VAR_0->buffer_size - VAR_0->current_size;
   }

   void *VAR_4 = VAR_0->current_pool_ptr + VAR_0->current_size;
   FUNC_6(VAR_4, VAR_1, VAR_2);
   FUNC_0(VAR_4, VAR_2);

   VAR_0->current_size += VAR_2;

   if(VAR_0->current_size == VAR_0->buffer_size)
   {
      FUNC_2(&VAR_0->drv, 0, VAR_0->current_wavebuf);

      FUNC_7(&VAR_0->update_lock);
      FUNC_1(&VAR_0->drv);
      FUNC_8(&VAR_0->update_lock);

      if (!FUNC_3(&VAR_0->drv, 0))
      {
         FUNC_4(&VAR_0->drv, 0);
      }

      VAR_0->current_wavebuf = ((void*)0);
   }

   return VAR_2;
}
