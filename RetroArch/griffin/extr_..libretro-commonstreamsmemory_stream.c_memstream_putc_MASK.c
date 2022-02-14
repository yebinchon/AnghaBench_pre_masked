
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; scalar_t__ size; int* buf; } ;
typedef TYPE_1__ memstream_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(memstream_t *VAR_0, int VAR_1)
{
   if (VAR_0->ptr < VAR_0->size)
      VAR_0->buf[VAR_0->ptr++] = VAR_1;

   FUNC_0(VAR_0);
}
