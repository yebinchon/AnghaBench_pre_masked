
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; scalar_t__ size; int* buf; } ;
typedef TYPE_1__ memstream_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(memstream_t *VAR_1)
{
   int VAR_2 = 0;
   if (VAR_1->ptr >= VAR_1->size)
      return VAR_0;
   VAR_2 = VAR_1->buf[VAR_1->ptr++];

   FUNC_0(VAR_1);

   return VAR_2;
}
