
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_osfp_entry {int fp_oses; } ;
struct pf_os_fingerprint {int fp_oses; } ;


 struct pf_osfp_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct pf_osfp_entry*) ;

void
FUNC_3(void)
{
 struct pf_os_fingerprint *VAR_5;
 struct pf_osfp_entry *VAR_6;

 while ((VAR_5 = FUNC_0(&VAR_3))) {
  FUNC_1(&VAR_3, VAR_1);
  while ((VAR_6 = FUNC_0(&VAR_5->fp_oses))) {
   FUNC_1(&VAR_5->fp_oses, VAR_0);
   FUNC_2(&VAR_2, VAR_6);
  }
  FUNC_2(&VAR_4, VAR_5);
 }
}
