
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int result; int (* scsi_done ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct Scsi_Host *VAR_4, int VAR_5)
{
 if (VAR_2) {
  VAR_2 = 0;
  FUNC_1(0x00, VAR_0);
  FUNC_0(VAR_4);
  VAR_1->result = VAR_5;
  VAR_1->scsi_done(VAR_1);
 } else {
  FUNC_2("fd_mcs: my_done() called outside of command\n");
 }



}
