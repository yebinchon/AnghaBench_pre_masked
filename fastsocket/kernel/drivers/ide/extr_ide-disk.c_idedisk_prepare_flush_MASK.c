
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {TYPE_4__* queuedata; } ;
struct request {struct ide_cmd* special; int cmd_type; } ;
struct TYPE_6__ {int tf; } ;
struct TYPE_7__ {TYPE_2__ out; } ;
struct TYPE_5__ {int command; } ;
struct ide_cmd {struct request* rq; int protocol; int tf_flags; TYPE_3__ valid; TYPE_1__ tf; } ;
struct TYPE_8__ {unsigned long capacity64; int id; } ;
typedef TYPE_4__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ide_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ide_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_8, struct request *VAR_9)
{
 ide_drive_t *VAR_10 = VAR_8->queuedata;
 struct ide_cmd *VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_3);


 FUNC_0(VAR_11 == ((void*)0));

 FUNC_3(VAR_11, 0, sizeof(*VAR_11));
 if (FUNC_1(VAR_10->id) &&
     (VAR_10->capacity64 >= (1UL << 28)))
  VAR_11->tf.command = VAR_1;
 else
  VAR_11->tf.command = VAR_0;
 VAR_11->valid.out.tf = VAR_6 | VAR_5;
 VAR_11->tf_flags = VAR_4;
 VAR_11->protocol = VAR_2;

 VAR_9->cmd_type = VAR_7;
 VAR_9->special = VAR_11;
 VAR_11->rq = VAR_9;
}
