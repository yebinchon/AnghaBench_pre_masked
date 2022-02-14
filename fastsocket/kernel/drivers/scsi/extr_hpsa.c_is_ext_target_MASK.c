
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int model; } ;
struct ctlr_info {int dummy; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct ctlr_info *VAR_1, struct hpsa_scsi_dev_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
  if (FUNC_1(VAR_2->model, VAR_0[VAR_3],
   FUNC_0(VAR_0[VAR_3])) == 0)
   return 1;
 return 0;
}
