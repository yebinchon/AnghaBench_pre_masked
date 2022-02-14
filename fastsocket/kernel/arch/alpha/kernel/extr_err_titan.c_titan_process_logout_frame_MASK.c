
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_common {scalar_t__ sys_offset; } ;
struct el_TITAN_sysdata_mcheck {int p1_agperror; int p1_aperror; int p1_gperror; int p1_serror; int p0_agperror; int p0_aperror; int p0_gperror; int p0_serror; int c_misc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ,int ,int ,int ,int) ;

int
FUNC_2(struct el_common *VAR_1, int VAR_2)
{
 struct el_TITAN_sysdata_mcheck *VAR_3 =
  (struct el_TITAN_sysdata_mcheck *)
  ((unsigned long)VAR_1 + VAR_1->sys_offset);
 int VAR_4 = VAR_0;

 VAR_4 |= FUNC_0(VAR_3->c_misc, VAR_2);
 VAR_4 |= FUNC_1(0, VAR_3->p0_serror, VAR_3->p0_gperror,
         VAR_3->p0_aperror, VAR_3->p0_agperror,
         VAR_2);
 VAR_4 |= FUNC_1(1, VAR_3->p1_serror, VAR_3->p1_gperror,
         VAR_3->p1_aperror, VAR_3->p1_agperror,
         VAR_2);

 return VAR_4;
}
