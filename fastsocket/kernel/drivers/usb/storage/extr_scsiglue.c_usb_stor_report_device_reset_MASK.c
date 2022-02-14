
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int fflags; } ;
struct Scsi_Host {int max_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*,int ,int) ;
 struct Scsi_Host* FUNC_1 (struct us_data*) ;

void FUNC_2(struct us_data *VAR_1)
{
 int VAR_2;
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, 0, 0);
 if (VAR_1->fflags & VAR_0) {
  for (VAR_2 = 1; VAR_2 < VAR_3->max_id; ++VAR_2)
   FUNC_0(VAR_3, 0, VAR_2);
 }
}
