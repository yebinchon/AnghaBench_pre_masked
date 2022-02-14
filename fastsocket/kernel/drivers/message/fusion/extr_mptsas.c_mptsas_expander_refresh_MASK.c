
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct sas_rphy {struct device dev; } ;
struct mptsas_portinfo {int num_phys; TYPE_4__* phy_info; } ;
struct TYPE_13__ {scalar_t__ sas_address; int handle_parent; int phy_id; scalar_t__ handle; } ;
struct TYPE_12__ {TYPE_6__ attached; TYPE_6__ identify; int phy_id; scalar_t__ handle; } ;
struct TYPE_11__ {int sas_index; int sas_topology_mutex; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mptsas_portinfo* FUNC_0 (TYPE_1__*,int ) ;
 struct sas_rphy* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct device*,TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_6__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,struct mptsas_portinfo*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(MPT_ADAPTER *VAR_4, struct mptsas_portinfo *VAR_5)
{
 struct mptsas_portinfo *VAR_6;
 struct device *VAR_7;
 struct sas_rphy *VAR_8;
 int VAR_9;
 u64 VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_5->phy_info[0].handle;
 VAR_10 = VAR_5->phy_info[0].identify.sas_address;
 for (VAR_9 = 0; VAR_9 < VAR_5->num_phys; VAR_9++) {
  FUNC_4(VAR_4, &VAR_5->phy_info[VAR_9],
      (VAR_2 <<
      VAR_3), (VAR_9 << 16) + VAR_11);

  FUNC_3(VAR_4,
      &VAR_5->phy_info[VAR_9].identify,
      (VAR_0 <<
      VAR_1),
      VAR_5->phy_info[VAR_9].identify.handle);
  VAR_5->phy_info[VAR_9].identify.phy_id =
      VAR_5->phy_info[VAR_9].phy_id;

  if (VAR_5->phy_info[VAR_9].attached.handle) {
   FUNC_3(VAR_4,
       &VAR_5->phy_info[VAR_9].attached,
       (VAR_0 <<
        VAR_1),
       VAR_5->phy_info[VAR_9].attached.handle);
   VAR_5->phy_info[VAR_9].attached.phy_id =
       VAR_5->phy_info[VAR_9].phy_id;
  }
 }

 FUNC_6(&VAR_4->sas_topology_mutex);
 VAR_6 = FUNC_0(VAR_4,
     VAR_5->phy_info[0].identify.handle_parent);
 if (!VAR_6) {
  FUNC_7(&VAR_4->sas_topology_mutex);
  return;
 }
 for (VAR_9 = 0, VAR_7 = ((void*)0); VAR_9 < VAR_6->num_phys && !VAR_7;
     VAR_9++) {
  if (VAR_6->phy_info[VAR_9].attached.sas_address == VAR_10) {
   VAR_8 = FUNC_1(&VAR_6->phy_info[VAR_9]);
   VAR_7 = &VAR_8->dev;
  }
 }
 FUNC_7(&VAR_4->sas_topology_mutex);

 FUNC_5(VAR_4, VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_5->num_phys; VAR_9++, VAR_4->sas_index++)
  FUNC_2(VAR_7, &VAR_5->phy_info[VAR_9],
      VAR_4->sas_index, 0);
}
