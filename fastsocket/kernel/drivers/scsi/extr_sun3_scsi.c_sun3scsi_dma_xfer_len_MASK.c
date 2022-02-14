
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {scalar_t__ cmd_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1,
        struct scsi_cmnd *VAR_2,
        int VAR_3)
{
 if (VAR_2->request->cmd_type == VAR_0)
   return VAR_1;
 else
  return 0;
}
