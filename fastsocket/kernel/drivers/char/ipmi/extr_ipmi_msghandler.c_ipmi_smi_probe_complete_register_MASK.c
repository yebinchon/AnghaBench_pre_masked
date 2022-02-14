
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi_probe_complete {int (* probe_complete ) () ;int link; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

int FUNC_4(struct ipmi_smi_probe_complete *VAR_3)
{
 FUNC_1(&VAR_2);
 FUNC_0(&VAR_3->link, &VAR_1);
 if (VAR_0 && VAR_3->probe_complete)
  VAR_3->probe_complete();
 FUNC_2(&VAR_2);
 return 0;
}
