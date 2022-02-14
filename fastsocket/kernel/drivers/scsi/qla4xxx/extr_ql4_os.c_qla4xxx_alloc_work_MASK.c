
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla4_work_evt {int type; int list; } ;
typedef enum qla4_work_type { ____Placeholder_qla4_work_type } qla4_work_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct qla4_work_evt* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct qla4_work_evt *
FUNC_2(struct scsi_qla_host *VAR_1, uint32_t VAR_2,
     enum qla4_work_type VAR_3)
{
 struct qla4_work_evt *VAR_4;
 uint32_t VAR_5 = sizeof(struct qla4_work_evt) + VAR_2;

 VAR_4 = FUNC_1(VAR_5, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->list);
 VAR_4->type = VAR_3;
 return VAR_4;
}
