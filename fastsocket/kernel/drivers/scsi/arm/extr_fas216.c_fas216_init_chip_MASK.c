
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int* cfg; unsigned int async_stp; } ;
struct TYPE_6__ {int clockrate; unsigned int select_timeout; } ;
struct TYPE_8__ {TYPE_2__ scsi; TYPE_1__ ifcfg; } ;
typedef TYPE_3__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(FAS216_Info *VAR_7)
{
 unsigned int VAR_8 = ((VAR_7->ifcfg.clockrate - 1) / 5 + 1) & 7;
 FUNC_0(VAR_7, VAR_0, VAR_8);
 FUNC_0(VAR_7, VAR_1, VAR_7->scsi.cfg[0]);
 FUNC_0(VAR_7, VAR_2, VAR_7->scsi.cfg[1]);
 FUNC_0(VAR_7, VAR_3, VAR_7->scsi.cfg[2]);
 FUNC_0(VAR_7, VAR_5, VAR_7->ifcfg.select_timeout);
 FUNC_0(VAR_7, VAR_4, 0);
 FUNC_0(VAR_7, VAR_6, VAR_7->scsi.async_stp);
 FUNC_0(VAR_7, VAR_1, VAR_7->scsi.cfg[0]);
}
