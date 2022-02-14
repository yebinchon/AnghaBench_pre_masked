
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* data_clear; void* data_set; } ;


 TYPE_1__** VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;

void FUNC_2(unsigned VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_0[FUNC_0(VAR_1)]->data_set = FUNC_1(VAR_1);
 else
  VAR_0[FUNC_0(VAR_1)]->data_clear = FUNC_1(VAR_1);
}
