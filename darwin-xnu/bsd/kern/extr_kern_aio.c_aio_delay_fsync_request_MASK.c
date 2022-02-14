
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_6__ {TYPE_1__* procp; } ;
typedef TYPE_2__ aio_workq_entry ;
struct TYPE_5__ {int p_aio_activeq; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_1( aio_workq_entry *VAR_2 )
{
 if (VAR_2 == FUNC_0(&VAR_2->procp->p_aio_activeq)) {
  return VAR_0;
 }

 return VAR_1;
}
