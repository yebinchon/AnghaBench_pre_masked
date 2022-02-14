
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int devlock; int * scsi_host; scalar_t__ ndevices; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_0)
{
 VAR_0->ndevices = 0;
 VAR_0->scsi_host = ((void*)0);
 FUNC_0(&VAR_0->devlock);
}
