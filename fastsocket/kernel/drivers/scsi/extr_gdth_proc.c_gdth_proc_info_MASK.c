
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int gdth_ha_str ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,scalar_t__,int,struct Scsi_Host*,int *) ;
 int FUNC_2 (char*,int,struct Scsi_Host*,int *) ;
 int * FUNC_3 (struct Scsi_Host*) ;

int FUNC_4(struct Scsi_Host *VAR_0, char *VAR_1,char **VAR_2,off_t VAR_3,int VAR_4,
                   int VAR_5)
{
    gdth_ha_str *VAR_6 = FUNC_3(VAR_0);

    FUNC_0(("gdth_proc_info() length %d offs %d inout %d\n",
            VAR_4,(int)VAR_3,VAR_5));

    if (VAR_5)
        return(FUNC_2(VAR_1,VAR_4,VAR_0,VAR_6));
    else
        return(FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4,VAR_0,VAR_6));
}
