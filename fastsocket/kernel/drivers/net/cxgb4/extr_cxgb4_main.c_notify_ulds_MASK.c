
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {scalar_t__* uld_handle; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;
struct TYPE_2__ {int (* state_change ) (scalar_t__,int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_3, enum cxgb4_state VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(&VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3->uld_handle[VAR_5])
   VAR_2[VAR_5].state_change(VAR_3->uld_handle[VAR_5], VAR_4);
 FUNC_1(&VAR_1);
}
