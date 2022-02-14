
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_item; int p; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(LIST *VAR_1, void *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1->p, sizeof(void *) * VAR_1->num_item);
}
