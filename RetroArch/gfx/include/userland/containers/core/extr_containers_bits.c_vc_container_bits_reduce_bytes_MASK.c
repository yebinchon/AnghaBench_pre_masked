
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ bytes; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(VC_CONTAINER_BITS_T *VAR_0,
      uint32_t VAR_1)
{
   if (VAR_0->bytes >= VAR_1)
      VAR_0->bytes -= VAR_1;
   else
      FUNC_0(VAR_0);
}
