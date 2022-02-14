
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_2__* coalition_t ;
typedef int boolean_t ;
struct TYPE_4__ {int other; int services; int extensions; int leader; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ j; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_2(coalition_t VAR_3, boolean_t VAR_4)
{
 FUNC_0(VAR_3 && VAR_3->type == VAR_0);
 (void)VAR_4;

 VAR_3->j.leader= VAR_2;
 FUNC_1(VAR_3->j.extensions);
 FUNC_1(VAR_3->j.services);
 FUNC_1(VAR_3->j.other);

 return VAR_1;
}
