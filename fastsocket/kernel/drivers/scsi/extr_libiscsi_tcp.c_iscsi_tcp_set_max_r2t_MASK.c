
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {unsigned short max_r2t; } ;
struct iscsi_conn {struct iscsi_session* session; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (char*,char*,unsigned short*) ;

int FUNC_4(struct iscsi_conn *VAR_1, char*VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_1->session;
 unsigned short VAR_4 = 0;

 FUNC_3(VAR_2, "%hu", &VAR_4);
 if (VAR_3->max_r2t == VAR_4)
  return 0;

 if (!VAR_4 || !FUNC_0(VAR_4))
  return -VAR_0;

 VAR_3->max_r2t = VAR_4;
 FUNC_2(VAR_3);
 return FUNC_1(VAR_3);
}
