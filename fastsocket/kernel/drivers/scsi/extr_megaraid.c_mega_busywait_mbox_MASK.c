
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* mbox; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_6__ {scalar_t__ busy; } ;
struct TYPE_7__ {TYPE_1__ m_in; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline int
FUNC_1 (adapter_t *VAR_0)
{
 if (VAR_0->mbox->m_in.busy)
  return FUNC_0(VAR_0);
 return 0;
}
