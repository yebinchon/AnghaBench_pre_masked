
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int clnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct v9fs_session_info*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct v9fs_session_info *VAR_1) {
 FUNC_0(VAR_0, "cancel session %p\n", VAR_1);
 FUNC_1(VAR_1->clnt);
}
