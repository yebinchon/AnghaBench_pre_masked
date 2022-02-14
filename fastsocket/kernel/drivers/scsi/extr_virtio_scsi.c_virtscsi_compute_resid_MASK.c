
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_4__ {scalar_t__ resid; int length; } ;
struct TYPE_3__ {scalar_t__ resid; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_2 (struct scsi_cmnd*) ;
 TYPE_1__* FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_0, u32 VAR_1)
{
 if (!VAR_1)
  return;

 if (!FUNC_1(VAR_0)) {
  FUNC_4(VAR_0, VAR_1);
  return;
 }

 FUNC_2(VAR_0)->resid = FUNC_0(VAR_1, FUNC_2(VAR_0)->length);
 FUNC_3(VAR_0)->resid = VAR_1 - FUNC_2(VAR_0)->resid;
}
