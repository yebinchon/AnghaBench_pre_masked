
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_2__* coalition_t ;
typedef int boolean_t ;
struct TYPE_4__ {int tasks; int * ledger; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static kern_return_t
FUNC_3(coalition_t VAR_5, boolean_t VAR_6)
{
 (void)VAR_6;
 FUNC_0(VAR_5 && VAR_5->type == VAR_0);
 VAR_5->r.ledger = FUNC_1(VAR_4,
         VAR_3);
 if (VAR_5->r.ledger == ((void*)0))
  return VAR_1;

 FUNC_2(&VAR_5->r.tasks);

 return VAR_2;
}
