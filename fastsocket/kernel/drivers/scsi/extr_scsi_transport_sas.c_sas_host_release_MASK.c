
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_host_attrs {struct request_queue* q; } ;
struct request_queue {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct request_queue*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 struct sas_host_attrs* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct sas_host_attrs *VAR_2 = FUNC_2(VAR_1);
 struct request_queue *VAR_3 = VAR_2->q;

 if (VAR_3)
  FUNC_0(VAR_3);
}
