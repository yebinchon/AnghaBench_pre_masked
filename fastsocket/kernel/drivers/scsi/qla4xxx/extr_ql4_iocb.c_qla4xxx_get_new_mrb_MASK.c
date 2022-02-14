
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct mrb {struct scsi_qla_host* ha; } ;


 int VAR_0 ;
 struct mrb* FUNC_0 (int,int ) ;

__attribute__((used)) static struct mrb *FUNC_1(struct scsi_qla_host *VAR_1)
{
 struct mrb *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return VAR_2;

 VAR_2->ha = VAR_1;
 return VAR_2;
}
