
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_5__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int*,int *,int ,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(scsi_changer *VAR_2)
{
 int VAR_3;
 u_char VAR_4[6];

 FUNC_2("INITIALIZE ELEMENT STATUS, may take some time ...\n");
 FUNC_1(VAR_4,0,sizeof(VAR_4));
 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2->device->lun << 5;
 VAR_3 = FUNC_0(VAR_2, VAR_4, ((void*)0), 0, VAR_0);
 FUNC_2("... finished\n");
 return VAR_3;
}
