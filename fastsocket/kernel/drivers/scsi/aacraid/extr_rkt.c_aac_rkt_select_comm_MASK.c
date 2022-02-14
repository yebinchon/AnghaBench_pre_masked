
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aac_dev {TYPE_2__* scsi_host_ptr; TYPE_1__* init; } ;
struct TYPE_4__ {scalar_t__ can_queue; } ;
struct TYPE_3__ {int MaxIoCommands; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct aac_dev*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_3, int VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_4 == VAR_0) {
  if (VAR_3->scsi_host_ptr->can_queue > VAR_1) {
   VAR_3->init->MaxIoCommands =
    FUNC_1(VAR_1 + VAR_2);
   VAR_3->scsi_host_ptr->can_queue = VAR_1;
  }
 }
 return VAR_5;
}
