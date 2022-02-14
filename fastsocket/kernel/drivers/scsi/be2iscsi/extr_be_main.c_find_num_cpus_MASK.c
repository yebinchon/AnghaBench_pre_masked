
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int generation; int num_cpus; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0();

 switch (VAR_2->generation) {
 case 130:
 case 129:
  VAR_2->num_cpus = (VAR_3 > VAR_0) ?
      VAR_0 : VAR_3;
  break;
 case 128:
  VAR_2->num_cpus = (VAR_3 > VAR_1) ?
      VAR_1 : VAR_3;
  break;
 default:
  VAR_2->num_cpus = 1;
 }
}
