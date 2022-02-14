
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseminfo {int psem_mode; int psem_gid; int psem_uid; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct pseminfo *VAR_4, int VAR_5, kauth_cred_t VAR_6)
{
 int VAR_7 = ((VAR_5 & VAR_0) ? VAR_2 : 0) |
         ((VAR_5 & VAR_1) ? VAR_3 : 0);


 if (!FUNC_1(VAR_6, ((void*)0)))
  return (0);

 return(FUNC_0(VAR_6, VAR_4->psem_uid, VAR_4->psem_gid, VAR_4->psem_mode, VAR_7));
}
