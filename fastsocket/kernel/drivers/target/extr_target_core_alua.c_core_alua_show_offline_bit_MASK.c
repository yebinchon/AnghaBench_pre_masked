
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_lun {TYPE_1__* lun_sep; } ;
typedef int ssize_t ;
struct TYPE_2__ {int sep_tg_pt_secondary_offline; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;

ssize_t FUNC_2(struct se_lun *VAR_1, char *VAR_2)
{
 if (!VAR_1->lun_sep)
  return -VAR_0;

 return FUNC_1(VAR_2, "%d\n",
  FUNC_0(&VAR_1->lun_sep->sep_tg_pt_secondary_offline));
}
