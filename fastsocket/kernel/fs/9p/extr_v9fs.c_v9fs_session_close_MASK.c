
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int slist; int aname; int uname; int cachetag; scalar_t__ fscache; int * clnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v9fs_session_info*) ;
 int VAR_0 ;

void FUNC_7(struct v9fs_session_info *VAR_1)
{
 if (VAR_1->clnt) {
  FUNC_3(VAR_1->clnt);
  VAR_1->clnt = ((void*)0);
 }







 FUNC_0(VAR_1->uname);
 FUNC_0(VAR_1->aname);

 FUNC_4(&VAR_0);
 FUNC_2(&VAR_1->slist);
 FUNC_5(&VAR_0);
}
