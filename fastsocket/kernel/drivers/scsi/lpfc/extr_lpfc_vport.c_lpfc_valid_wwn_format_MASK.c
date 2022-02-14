
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* wwn; } ;
struct lpfc_name {TYPE_1__ u; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,char const*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_2, struct lpfc_name *VAR_3,
        const char *VAR_4)
{



 if (!((VAR_3->u.wwn[0] >> 4) == 1 &&
       ((VAR_3->u.wwn[0] & 0xf) != 0 || (VAR_3->u.wwn[1] & 0xf) != 0)))
  return 1;

 FUNC_0(VAR_2, VAR_0, VAR_1,
   "1822 Invalid %s: %02x:%02x:%02x:%02x:"
   "%02x:%02x:%02x:%02x\n",
   VAR_4,
   VAR_3->u.wwn[0], VAR_3->u.wwn[1],
   VAR_3->u.wwn[2], VAR_3->u.wwn[3],
   VAR_3->u.wwn[4], VAR_3->u.wwn[5],
   VAR_3->u.wwn[6], VAR_3->u.wwn[7]);
 return 0;
}
