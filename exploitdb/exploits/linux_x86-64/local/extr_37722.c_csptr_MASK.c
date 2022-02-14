
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * gregs; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct selectors {unsigned short cs; } ;


 size_t VAR_0 ;

__attribute__((used)) static unsigned short *FUNC_0(ucontext_t *VAR_1)
{
 struct selectors *VAR_2 = (void *)&VAR_1->uc_mcontext.gregs[VAR_0];
 return &VAR_2->cs;
}
