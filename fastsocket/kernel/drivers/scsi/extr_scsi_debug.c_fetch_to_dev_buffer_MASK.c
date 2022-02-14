
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1, unsigned char *VAR_2,
          int VAR_3)
{
 if (!FUNC_1(VAR_1))
  return 0;
 if (!(FUNC_0(VAR_1) || VAR_1->sc_data_direction == VAR_0))
  return -1;

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
