
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_extra; int m_hash; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int,int*) ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dlm_ls*,char*,int,int) ;
 int FUNC_4 (struct dlm_message*) ;
 int FUNC_5 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_message*,int,int) ;

__attribute__((used)) static void FUNC_7(struct dlm_ls *VAR_1, struct dlm_message *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_2->m_header.h_nodeid;
 VAR_8 = FUNC_2();

 VAR_3 = FUNC_4(VAR_2);

 VAR_6 = FUNC_1(VAR_1, VAR_2->m_hash);
 if (VAR_6 != VAR_8) {
  FUNC_3(VAR_1, "lookup dir_nodeid %d from %d",
     VAR_6, VAR_7);
  VAR_4 = -VAR_0;
  VAR_5 = -1;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_7, VAR_2->m_extra, VAR_3, &VAR_5);


 if (!VAR_4 && VAR_5 == VAR_8) {
  FUNC_5(VAR_1, VAR_2);
  return;
 }
 out:
 FUNC_6(VAR_1, VAR_2, VAR_5, VAR_4);
}
