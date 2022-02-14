
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_reserved; int p; scalar_t__ num_item; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(LIST *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->num_item = 0;
 VAR_1->num_reserved = VAR_0;
 VAR_1->p = FUNC_0(VAR_1->p, sizeof(void *) * VAR_0);
}
