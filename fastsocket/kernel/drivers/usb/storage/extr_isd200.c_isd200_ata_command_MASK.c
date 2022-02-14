
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ata_cdb {int dummy; } ata_cdb ;
struct us_data {int * extra; } ;
struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct us_data*,struct scsi_cmnd*,union ata_cdb*) ;
 int FUNC_2 (struct scsi_cmnd*,struct us_data*,union ata_cdb*) ;
 int FUNC_3 (struct scsi_cmnd*,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_0, struct us_data *VAR_1)
{
 int VAR_2 = 1, VAR_3;
 union ata_cdb VAR_4;



 if (VAR_1->extra == ((void*)0))
  FUNC_0("ERROR Driver not initialized\n");

 FUNC_5(VAR_0, 0);

 VAR_3 = FUNC_4(VAR_0);
 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_4);


 if (VAR_2)
  FUNC_1(VAR_1, VAR_0, &VAR_4);

 FUNC_3(VAR_0, VAR_3);
}
