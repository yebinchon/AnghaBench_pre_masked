
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_lun {TYPE_1__* lun_sep; } ;
typedef int ssize_t ;
struct TYPE_2__ {int sep_tg_pt_secondary_write_md; } ;


 int FUNC_0 (char*,char*,int) ;

ssize_t FUNC_1(
 struct se_lun *VAR_0,
 char *VAR_1)
{
 return FUNC_0(VAR_1, "%d\n",
   VAR_0->lun_sep->sep_tg_pt_secondary_write_md);
}
