
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_hostrcb {int dummy; } ;
struct ipr_ext_vpd {int * wwid; int vpd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_hostrcb*,char*,char*,int ,int ) ;
 int FUNC_2 (char*,struct ipr_hostrcb*,int *) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, struct ipr_hostrcb *VAR_1,
        struct ipr_ext_vpd *VAR_2)
{
 FUNC_2(VAR_0, VAR_1, &VAR_2->vpd);
 FUNC_1(VAR_1, "%s WWN: %08X%08X\n", VAR_0,
       FUNC_0(VAR_2->wwid[0]), FUNC_0(VAR_2->wwid[1]));
}
