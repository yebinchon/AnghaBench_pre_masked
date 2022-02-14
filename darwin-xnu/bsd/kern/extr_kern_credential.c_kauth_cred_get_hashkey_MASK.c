
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_long ;
struct posix_cred {int dummy; } ;
struct label {int dummy; } ;
struct au_session {int dummy; } ;
typedef TYPE_1__* posix_cred_t ;
typedef TYPE_2__* kauth_cred_t ;
struct TYPE_7__ {scalar_t__ cr_label; int cr_audit; int cr_posix; } ;
struct TYPE_6__ {int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static u_long
FUNC_2(kauth_cred_t VAR_1)
{



 u_long VAR_2 = 0;

 VAR_2 = FUNC_0((uint8_t *)&VAR_1->cr_posix,
          sizeof (struct posix_cred),
          VAR_2);
 VAR_2 = FUNC_0((uint8_t *)&VAR_1->cr_audit,
          sizeof(struct au_session),
          VAR_2);







 return(VAR_2);
}
