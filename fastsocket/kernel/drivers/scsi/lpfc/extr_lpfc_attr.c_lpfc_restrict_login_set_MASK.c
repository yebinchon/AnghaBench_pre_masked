
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int cfg_restrict_login; scalar_t__ port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_vport *VAR_4, int VAR_5)
{
 if (VAR_5 < 0 || VAR_5 > 1) {
  FUNC_0(VAR_4, VAR_1, VAR_2,
     "0425 lpfc_restrict_login attribute cannot "
     "be set to %d, allowed range is [0, 1]\n",
     VAR_5);
  VAR_4->cfg_restrict_login = 1;
  return -VAR_0;
 }
 if (VAR_4->port_type == VAR_3 && VAR_5 != 0) {
  FUNC_0(VAR_4, VAR_1, VAR_2,
     "0468 lpfc_restrict_login must be 0 for "
     "Physical ports.\n");
  VAR_4->cfg_restrict_login = 0;
  return 0;
 }
 VAR_4->cfg_restrict_login = VAR_5;
 return 0;
}
