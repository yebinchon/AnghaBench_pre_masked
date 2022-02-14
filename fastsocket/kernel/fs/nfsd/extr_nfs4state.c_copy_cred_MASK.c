
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cred {int cr_group_info; int cr_gid; int cr_uid; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct svc_cred *VAR_0, struct svc_cred *VAR_1)
{
 VAR_0->cr_uid = VAR_1->cr_uid;
 VAR_0->cr_gid = VAR_1->cr_gid;
 VAR_0->cr_group_info = VAR_1->cr_group_info;
 FUNC_0(VAR_0->cr_group_info);
}
