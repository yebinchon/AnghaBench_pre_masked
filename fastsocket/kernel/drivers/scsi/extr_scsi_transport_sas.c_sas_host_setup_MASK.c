
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct sas_host_attrs {scalar_t__ next_port_id; scalar_t__ next_expander_id; scalar_t__ next_target_id; int lock; int rphy_list; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct device*,char*,int ) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct Scsi_Host*,int *) ;
 struct sas_host_attrs* FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct transport_container *VAR_1, struct device *VAR_2,
     struct device *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_2);
 struct sas_host_attrs *VAR_5 = FUNC_5(VAR_4);

 FUNC_0(&VAR_5->rphy_list);
 FUNC_3(&VAR_5->lock);
 VAR_5->next_target_id = 0;
 VAR_5->next_expander_id = 0;
 VAR_5->next_port_id = 0;

 if (FUNC_4(VAR_4, ((void*)0)))
  FUNC_1(VAR_0, VAR_2, "fail to a bsg device %d\n",
      VAR_4->host_no);

 return 0;
}
