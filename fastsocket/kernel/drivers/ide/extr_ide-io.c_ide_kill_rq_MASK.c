
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {scalar_t__ cmd_type; int errors; scalar_t__ rq_disk; } ;
struct TYPE_4__ {scalar_t__ media; int * failed_pc; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_2(ide_drive_t *VAR_6, struct request *VAR_7)
{
 u8 VAR_8 = (VAR_7->cmd_type == VAR_3) && VAR_7->rq_disk;
 u8 VAR_9 = VAR_6->media;

 VAR_6->failed_pc = ((void*)0);

 if ((VAR_9 == VAR_4 || VAR_9 == VAR_5) && VAR_8) {
  VAR_7->errors = 0;
 } else {
  if (VAR_9 == VAR_5)
   VAR_7->errors = VAR_1;
  else if (VAR_7->cmd_type != VAR_2 && VAR_7->errors == 0)
   VAR_7->errors = -VAR_0;
 }

 FUNC_1(VAR_6, -VAR_0, FUNC_0(VAR_7));
}
