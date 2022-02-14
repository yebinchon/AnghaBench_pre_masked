
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ contrnr; struct TYPE_4__* next; } ;
typedef TYPE_1__ capidrv_contr ;
struct TYPE_5__ {TYPE_1__* contr_list; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static capidrv_contr *FUNC_2(u32 VAR_2)
{
 unsigned long VAR_3;
 capidrv_contr *VAR_4 = VAR_0.contr_list;

 FUNC_0(&VAR_1, VAR_3);
 for (VAR_4 = VAR_0.contr_list; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->contrnr == VAR_2)
   break;
 FUNC_1(&VAR_1, VAR_3);
 return VAR_4;
}
