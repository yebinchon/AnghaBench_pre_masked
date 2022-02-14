
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_vstate_t ;
struct TYPE_4__ {int * dten_vstate; } ;
typedef TYPE_1__ dtrace_enabling_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static dtrace_enabling_t *
FUNC_1(dtrace_vstate_t *VAR_1)
{
 dtrace_enabling_t *VAR_2;

 VAR_2 = FUNC_0(sizeof (dtrace_enabling_t), VAR_0);
 VAR_2->dten_vstate = VAR_1;

 return (VAR_2);
}
