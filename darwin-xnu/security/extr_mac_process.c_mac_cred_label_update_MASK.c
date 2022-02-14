
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct label {int dummy; } ;
typedef TYPE_1__* posix_cred_t ;
typedef int kauth_cred_t ;
struct TYPE_3__ {int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct label*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;

void
FUNC_2(kauth_cred_t VAR_2, struct label *VAR_3)
{
 posix_cred_t VAR_4 = FUNC_1(VAR_2);


 VAR_4->cr_flags |= VAR_0;


 FUNC_0(VAR_1, VAR_2, VAR_3);
}
