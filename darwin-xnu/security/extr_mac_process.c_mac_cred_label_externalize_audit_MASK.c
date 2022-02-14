
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int dummy; } ;
struct mac {int m_buflen; int m_string; } ;
typedef TYPE_1__* kauth_cred_t ;
struct TYPE_4__ {int cr_label; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct proc*) ;
 int FUNC_2 (TYPE_1__**) ;

int
FUNC_3(struct proc *VAR_1, struct mac *VAR_2)
{
 kauth_cred_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);

 VAR_4 = FUNC_0(VAR_0, VAR_3->cr_label,
     VAR_2->m_string, VAR_2->m_buflen);

 FUNC_2(&VAR_3);
 return (VAR_4);
}
