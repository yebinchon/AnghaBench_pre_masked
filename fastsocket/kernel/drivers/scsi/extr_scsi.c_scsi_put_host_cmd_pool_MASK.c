
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_cmd_pool {scalar_t__ users; int sense_slab; int cmd_slab; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct scsi_host_cmd_pool VAR_2 ;
 struct scsi_host_cmd_pool VAR_3 ;

__attribute__((used)) static void FUNC_4(gfp_t VAR_4)
{
 struct scsi_host_cmd_pool *VAR_5;

 FUNC_2(&VAR_1);
 VAR_5 = (VAR_4 & VAR_0) ? &VAR_2 :
  &VAR_3;





 FUNC_0(VAR_5->users == 0);

 if (!--VAR_5->users) {
  FUNC_1(VAR_5->cmd_slab);
  FUNC_1(VAR_5->sense_slab);
 }
 FUNC_3(&VAR_1);
}
