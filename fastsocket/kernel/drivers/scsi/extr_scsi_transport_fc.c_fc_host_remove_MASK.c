
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct fc_host_attrs {int rqst_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 struct fc_host_attrs* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_3(struct transport_container *VAR_0, struct device *VAR_1,
    struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_1);
 struct fc_host_attrs *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_4->rqst_q);
 return 0;
}
