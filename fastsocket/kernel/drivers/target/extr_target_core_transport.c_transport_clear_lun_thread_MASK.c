
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_shutdown_comp; } ;


 int FUNC_0 (struct se_lun*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct se_lun *VAR_1 = VAR_0;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->lun_shutdown_comp);

 return 0;
}
