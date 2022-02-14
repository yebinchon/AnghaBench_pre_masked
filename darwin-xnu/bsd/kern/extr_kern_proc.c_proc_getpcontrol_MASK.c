
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_pcaction; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(int VAR_2, int * VAR_3)
{
 proc_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == VAR_1)
  return(VAR_0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4->p_pcaction;

 FUNC_1(VAR_4);
 return(0);
}
