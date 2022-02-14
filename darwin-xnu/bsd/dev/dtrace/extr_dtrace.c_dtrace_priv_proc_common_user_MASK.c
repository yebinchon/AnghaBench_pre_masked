
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dcr_cred; } ;
struct TYPE_6__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef int cred_t ;
struct TYPE_7__ {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_suid; scalar_t__ cr_gid; scalar_t__ cr_rgid; scalar_t__ cr_sgid; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 TYPE_3__* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(dtrace_state_t *VAR_0)
{
 cred_t *VAR_1, *VAR_2 = VAR_0->dts_cred.dcr_cred;





 FUNC_0(VAR_2 != ((void*)0));

 if ((VAR_1 = FUNC_1()) != ((void*)0) &&
     FUNC_2(VAR_2)->cr_uid == FUNC_2(VAR_1)->cr_uid &&
     FUNC_2(VAR_2)->cr_uid == FUNC_2(VAR_1)->cr_ruid &&
     FUNC_2(VAR_2)->cr_uid == FUNC_2(VAR_1)->cr_suid &&
     FUNC_2(VAR_2)->cr_gid == FUNC_2(VAR_1)->cr_gid &&
     FUNC_2(VAR_2)->cr_gid == FUNC_2(VAR_1)->cr_rgid &&
     FUNC_2(VAR_2)->cr_gid == FUNC_2(VAR_1)->cr_sgid)
  return (1);

 return (0);
}
