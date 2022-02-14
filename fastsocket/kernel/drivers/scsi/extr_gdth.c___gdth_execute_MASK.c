
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_device {int host; } ;
struct request {int dummy; } ;
struct gdth_cmndinfo {int internal_command; int status; int info; int * internal_cmd_str; int priority; } ;
typedef int gdth_ha_str ;
typedef int gdth_cmd_str ;
typedef int cmndinfo ;
struct TYPE_4__ {int cmd_len; char* cmnd; struct TYPE_4__* sense_buffer; struct request* request; struct scsi_device* device; } ;
typedef TYPE_1__ Scsi_Cmnd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*,struct gdth_cmndinfo*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct gdth_cmndinfo*,int ,int) ;
 int * FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct scsi_device *VAR_5, gdth_cmd_str *VAR_6, char *VAR_7,
                   int VAR_8, u32 *VAR_9)
{
    gdth_ha_str *VAR_10 = FUNC_6(VAR_5->host);
    Scsi_Cmnd *VAR_11;
    struct gdth_cmndinfo VAR_12;
    FUNC_0(VAR_4);
    int VAR_13;

    VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1);
    if (!VAR_11)
        return -VAR_0;

    VAR_11->sense_buffer = FUNC_4(VAR_3, VAR_1);
    if (!VAR_11->sense_buffer) {
 FUNC_3(VAR_11);
 return -VAR_0;
    }

    VAR_11->device = VAR_5;
    FUNC_5(&VAR_12, 0, sizeof(VAR_12));


    VAR_11->request = (struct request *)&VAR_4;
    VAR_11->cmd_len = 12;
    VAR_11->cmnd = VAR_7;
    VAR_12.priority = VAR_2;
    VAR_12.internal_cmd_str = VAR_6;
    VAR_12.internal_command = 1;

    FUNC_1(("__gdth_execute() cmd 0x%x\n", VAR_11->cmnd[0]));
    FUNC_2(VAR_10, VAR_11, &VAR_12);

    FUNC_7(&VAR_4);

    VAR_13 = VAR_12.status;
    if (VAR_9)
        *VAR_9 = VAR_12.info;
    FUNC_3(VAR_11->sense_buffer);
    FUNC_3(VAR_11);
    return VAR_13;
}
