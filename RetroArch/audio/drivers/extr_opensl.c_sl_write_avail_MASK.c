
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_count; int buf_size; scalar_t__ buffer_ptr; scalar_t__ buffered_blocks; } ;
typedef TYPE_1__ sl_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   sl_t *VAR_1 = (sl_t*)VAR_0;
   size_t VAR_2 = (VAR_1->buf_count - (int)VAR_1->buffered_blocks - 1) * VAR_1->buf_size + (VAR_1->buf_size - (int)VAR_1->buffer_ptr);
   return VAR_2;
}
