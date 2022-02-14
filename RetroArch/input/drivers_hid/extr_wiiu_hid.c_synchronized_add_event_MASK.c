
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ wiiu_attach_event ;
typedef int uint32_t ;
struct TYPE_5__ {int list; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1(wiiu_attach_event *VAR_1)
{
   wiiu_attach_event *VAR_2 = (wiiu_attach_event *)FUNC_0((uint32_t *)&VAR_0.list, 0);

   VAR_1->next = VAR_2;
   VAR_2 = VAR_1;

   FUNC_0((uint32_t *)&VAR_0.list, (uint32_t)VAR_2);
}
