
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ wiiu_adapter_t ;
struct TYPE_5__ {int lock; TYPE_1__* list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_2(wiiu_adapter_t *VAR_1)
{
   FUNC_0(&(VAR_0.lock));
   VAR_1->next = VAR_0.list;
   VAR_0.list = VAR_1;
   FUNC_1(&(VAR_0.lock));
}
