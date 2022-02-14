
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* pset_node_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_11__ {struct TYPE_11__* pset_list; } ;
struct TYPE_10__ {TYPE_2__* psets; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

processor_set_t
FUNC_6(
 pset_node_t VAR_5)
{

 if (FUNC_0(VAR_3) == VAR_0)
  return FUNC_2(VAR_2);

 processor_set_t *VAR_6, VAR_7 = FUNC_1(sizeof (*VAR_7));

 if (VAR_7 != VAR_1) {
  FUNC_3(VAR_7, VAR_5);

  FUNC_4(&VAR_4);

  VAR_6 = &VAR_5->psets;
  while (*VAR_6 != VAR_1)
   VAR_6 = &(*VAR_6)->pset_list;

  *VAR_6 = VAR_7;

  FUNC_5(&VAR_4);
 }

 return (VAR_7);
}
