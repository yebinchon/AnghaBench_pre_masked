
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t res_ptr; size_t tmpbuf_ptr; } ;
typedef TYPE_1__ al_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1)
{
   al_t *VAR_2 = (al_t*)VAR_1;
   FUNC_0(VAR_2);
   return VAR_2->res_ptr * VAR_0 + (VAR_0 - VAR_2->tmpbuf_ptr);
}
