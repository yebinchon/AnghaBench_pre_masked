
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int off_t ;
struct TYPE_3__ {int * ioc; } ;
typedef TYPE_1__ MPT_SCSI_HOST ;
typedef int MPT_ADAPTER ;


 int FUNC_0 (int *,char*,int ,int) ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;

int
FUNC_2(struct Scsi_Host *VAR_0, char *VAR_1, char **VAR_2, off_t VAR_3,
   int VAR_4, int VAR_5)
{
 MPT_SCSI_HOST *VAR_6 = FUNC_1(VAR_0);
 MPT_ADAPTER *VAR_7 = VAR_6->ioc;
 int VAR_8 = 0;

 if (VAR_5) {



 } else {
  if (VAR_2)
   *VAR_2 = VAR_1;

  VAR_8 = FUNC_0(VAR_7, VAR_1, VAR_3, VAR_4);
 }

 return VAR_8;
}
