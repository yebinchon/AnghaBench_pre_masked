
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_pid; int m_nodeid; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->m_nodeid, VAR_1->m_pid);
}
