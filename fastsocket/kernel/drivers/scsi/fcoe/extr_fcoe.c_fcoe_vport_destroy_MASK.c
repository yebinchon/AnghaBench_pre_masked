
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {struct fc_lport* dd_data; } ;
struct fc_lport {int lp_mutex; int list; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fc_lport* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct fc_vport*) ;

__attribute__((used)) static int FUNC_6(struct fc_vport *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_5(VAR_1);
 struct fc_lport *VAR_3 = FUNC_4(VAR_2);
 struct fc_lport *VAR_4 = VAR_1->dd_data;

 FUNC_2(&VAR_3->lp_mutex);
 FUNC_1(&VAR_4->list);
 FUNC_3(&VAR_3->lp_mutex);

 FUNC_2(&VAR_0);
 FUNC_0(VAR_4);
 FUNC_3(&VAR_0);

 return 0;
}
