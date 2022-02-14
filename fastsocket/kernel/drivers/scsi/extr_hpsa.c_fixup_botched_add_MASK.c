
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int dummy; } ;
struct ctlr_info {int ndevices; int lock; struct hpsa_scsi_dev_t** dev; } ;


 int FUNC_0 (struct hpsa_scsi_dev_t*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_0,
 struct hpsa_scsi_dev_t *VAR_1)
{



 unsigned long VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(&VAR_0->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->ndevices; VAR_3++) {
  if (VAR_0->dev[VAR_3] == VAR_1) {
   for (VAR_4 = VAR_3; VAR_4 < VAR_0->ndevices-1; VAR_4++)
    VAR_0->dev[VAR_4] = VAR_0->dev[VAR_4+1];
   VAR_0->ndevices--;
   break;
  }
 }
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_1);
}
