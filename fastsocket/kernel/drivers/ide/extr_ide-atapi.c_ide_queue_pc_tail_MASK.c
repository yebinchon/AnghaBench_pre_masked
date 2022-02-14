
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {char* special; int * cmd; int cmd_type; } ;
struct ide_atapi_pc {int c; } ;
struct gendisk {int dummy; } ;
struct TYPE_3__ {scalar_t__ media; int queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct gendisk*,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,void*,unsigned int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(ide_drive_t *VAR_6, struct gendisk *VAR_7,
        struct ide_atapi_pc *VAR_8, void *VAR_9, unsigned int VAR_10)
{
 struct request *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_6->queue, VAR_1, VAR_4);
 VAR_11->cmd_type = VAR_3;
 VAR_11->special = (char *)VAR_8;

 if (VAR_9 && VAR_10) {
  VAR_12 = FUNC_3(VAR_6->queue, VAR_11, VAR_9, VAR_10,
     VAR_0);
  if (VAR_12)
   goto put_req;
 }

 FUNC_4(VAR_11->cmd, VAR_8->c, 12);
 if (VAR_6->media == VAR_5)
  VAR_11->cmd[13] = VAR_2;
 VAR_12 = FUNC_0(VAR_6->queue, VAR_7, VAR_11, 0);
put_req:
 FUNC_2(VAR_11);
 return VAR_12;
}
