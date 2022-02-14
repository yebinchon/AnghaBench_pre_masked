
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_extra; int m_hash; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,int,int ,int) ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dlm_ls*,char*,int,int) ;
 int FUNC_4 (struct dlm_message*) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = VAR_1->m_header.h_nodeid;

 VAR_2 = FUNC_4(VAR_1);

 VAR_3 = FUNC_1(VAR_0, VAR_1->m_hash);
 if (VAR_3 != FUNC_2()) {
  FUNC_3(VAR_0, "remove dir entry dir_nodeid %d from %d",
     VAR_3, VAR_4);
  return;
 }

 FUNC_0(VAR_0, VAR_4, VAR_1->m_extra, VAR_2);
}
