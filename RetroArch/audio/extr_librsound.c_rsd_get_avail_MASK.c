
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t buffer_size; } ;
typedef TYPE_1__ rsound_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

size_t FUNC_2(rsound_t *VAR_0)
{
   FUNC_0(VAR_0 != ((void*)0));
   int VAR_1;
   VAR_1 = FUNC_1(VAR_0);
   return VAR_0->buffer_size - VAR_1;
}
