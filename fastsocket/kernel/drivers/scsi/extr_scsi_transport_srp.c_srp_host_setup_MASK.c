
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct srp_host_attrs {int next_port_id; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 struct srp_host_attrs* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_3(struct transport_container *VAR_0, struct device *VAR_1,
     struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct srp_host_attrs *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(&VAR_4->next_port_id, 0);
 return 0;
}
