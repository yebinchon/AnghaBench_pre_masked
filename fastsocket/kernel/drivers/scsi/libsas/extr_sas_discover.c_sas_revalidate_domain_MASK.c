
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_ha_struct {int disco_mutex; int state; } ;
struct sas_discovery_event {struct asd_sas_port* port; } ;
struct TYPE_2__ {int pending; } ;
struct asd_sas_port {int id; scalar_t__ port_dev; TYPE_1__ disc; struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct sas_discovery_event* FUNC_7 (struct work_struct*) ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_3)
{
 int VAR_4 = 0;
 struct sas_discovery_event *VAR_5 = FUNC_7(VAR_3);
 struct asd_sas_port *VAR_6 = VAR_5->port;
 struct sas_ha_struct *VAR_7 = VAR_6->ha;


 FUNC_2(&VAR_7->disco_mutex);
 if (FUNC_6(VAR_1, &VAR_7->state)) {
  FUNC_0("REVALIDATION DEFERRED on port %d, pid:%d\n",
       VAR_6->id, FUNC_5(VAR_2));
  goto out;
 }

 FUNC_1(VAR_0, &VAR_6->disc.pending);

 FUNC_0("REVALIDATING DOMAIN on port %d, pid:%d\n", VAR_6->id,
      FUNC_5(VAR_2));

 if (VAR_6->port_dev)
  VAR_4 = FUNC_4(VAR_6->port_dev);

 FUNC_0("done REVALIDATING DOMAIN on port %d, pid:%d, res 0x%x\n",
      VAR_6->id, FUNC_5(VAR_2), VAR_4);
 out:
 FUNC_3(&VAR_7->disco_mutex);
}
