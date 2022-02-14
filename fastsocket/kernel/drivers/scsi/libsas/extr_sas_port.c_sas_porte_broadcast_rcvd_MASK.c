
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct work_struct {int dummy; } ;
struct asd_sas_phy {int port; int sas_prim_lock; int sas_prim; int port_events_pending; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct asd_sas_event* FUNC_5 (struct work_struct*) ;

void FUNC_6(struct work_struct *VAR_2)
{
 struct asd_sas_event *VAR_3 = FUNC_5(VAR_2);
 struct asd_sas_phy *VAR_4 = VAR_3->phy;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_1(VAR_1, &VAR_4->port_events_pending);

 FUNC_3(&VAR_4->sas_prim_lock, VAR_5);
 VAR_6 = VAR_4->sas_prim;
 FUNC_4(&VAR_4->sas_prim_lock, VAR_5);

 FUNC_0("broadcast received: %d\n", VAR_6);
 FUNC_2(VAR_4->port, VAR_0);
}
