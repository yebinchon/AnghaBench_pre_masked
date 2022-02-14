
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_reserved; void** p; scalar_t__ num_item; int lock; } ;
typedef TYPE_1__ SL_LIST ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

SL_LIST *FUNC_2()
{
 SL_LIST *VAR_1;

 VAR_1 = (SL_LIST *)FUNC_1(sizeof(SL_LIST));

 VAR_1->lock = FUNC_0();

 VAR_1->num_item = 0;
 VAR_1->num_reserved = VAR_0;

 VAR_1->p = (void **)FUNC_1(sizeof(void *) * VAR_1->num_reserved);

 return VAR_1;
}
