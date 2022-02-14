
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {void* length; void* last; } ;
typedef TYPE_1__ FILTER_T ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(FILTER_T *VAR_0, uint32_t VAR_1)
{
   FUNC_0(VAR_0, 0, sizeof(*VAR_0));
   VAR_0->last = VAR_1 - 1;
   VAR_0->length = VAR_1;
}
