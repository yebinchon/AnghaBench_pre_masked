
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_copy_strategy_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_8__ {int can_persist; void* pager_ready; int copy_strategy; int internal; } ;


 int VAR_0 ;
 int VAR_1 ;


 void* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,char*,TYPE_1__*,int,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static kern_return_t
FUNC_5(
 vm_object_t VAR_6,
 boolean_t VAR_7,
 memory_object_copy_strategy_t VAR_8)
{
 boolean_t VAR_9;

        FUNC_0(VAR_5,
     "m_o_set_attr_com, object 0x%X flg %x strat %d\n",
     VAR_6, (VAR_7&1), VAR_8, 0, 0);

 if (VAR_6 == VAR_4)
  return(VAR_0);





 switch(VAR_8) {
  case 128:
  case 129:
   break;
  default:
   return(VAR_0);
 }

 if (VAR_7)
  VAR_7 = VAR_2;

 FUNC_2(VAR_6);




 FUNC_1(!VAR_6->internal);
 VAR_9 = !VAR_6->pager_ready;
 VAR_6->copy_strategy = VAR_8;
 VAR_6->can_persist = VAR_7;






 if (VAR_9) {
  VAR_6->pager_ready = VAR_2;
  FUNC_4(VAR_6, VAR_3);
 }

 FUNC_3(VAR_6);

 return(VAR_1);
}
