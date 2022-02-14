
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char brd_type; } ;
typedef TYPE_1__ lboard_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

lboard_t * FUNC_1(lboard_t *VAR_0, unsigned char VAR_1)
{

 while (VAR_0) {
  if (VAR_0->brd_type == VAR_1)
   return VAR_0;
  VAR_0 = FUNC_0(VAR_0);
 }

 return (lboard_t *)((void*)0);
}
