
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct request {struct ide_cmd* special; int cmd_type; } ;
struct ide_cmd {int tf_flags; struct request* rq; } ;
struct TYPE_3__ {int queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct request*,int ) ;
 struct request* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,int *,int,int ) ;

int FUNC_4(ide_drive_t *VAR_6, struct ide_cmd *VAR_7, u8 *VAR_8,
       u16 VAR_9)
{
 struct request *VAR_10;
 int VAR_11;
 int VAR_12 = !(VAR_7->tf_flags & VAR_0) ? VAR_1 : VAR_4;

 VAR_10 = FUNC_1(VAR_6->queue, VAR_12, VAR_5);
 VAR_10->cmd_type = VAR_2;







 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_6->queue, VAR_10, VAR_8,
     VAR_9 * VAR_3, VAR_5);
  if (VAR_11)
   goto put_req;
 }

 VAR_10->special = VAR_7;
 VAR_7->rq = VAR_10;

 VAR_11 = FUNC_0(VAR_6->queue, ((void*)0), VAR_10, 0);

put_req:
 FUNC_2(VAR_10);
 return VAR_11;
}
