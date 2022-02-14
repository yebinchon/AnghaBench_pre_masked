
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int gdth_cmd_str ;


 int FUNC_0 (struct scsi_device*,int *,char*,int,int *) ;
 int FUNC_1 (struct scsi_device*) ;
 struct scsi_device* FUNC_2 (struct Scsi_Host*) ;

int FUNC_3(struct Scsi_Host *VAR_0, gdth_cmd_str *VAR_1, char *VAR_2,
                 int VAR_3, u32 *VAR_4)
{
    struct scsi_device *VAR_5 = FUNC_2(VAR_0);
    int VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_1(VAR_5);
    return VAR_6;
}
