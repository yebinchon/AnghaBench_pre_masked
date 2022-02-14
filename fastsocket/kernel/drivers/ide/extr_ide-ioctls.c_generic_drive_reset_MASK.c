
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int cmd_len; int errors; int * cmd; int cmd_type; } ;
struct TYPE_3__ {int queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,struct request*,int) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_4)
{
 struct request *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_4->queue, VAR_0, VAR_3);
 VAR_5->cmd_type = VAR_2;
 VAR_5->cmd_len = 1;
 VAR_5->cmd[0] = VAR_1;
 if (FUNC_0(VAR_4->queue, ((void*)0), VAR_5, 1))
  VAR_6 = VAR_5->errors;
 FUNC_2(VAR_5);
 return VAR_6;
}
