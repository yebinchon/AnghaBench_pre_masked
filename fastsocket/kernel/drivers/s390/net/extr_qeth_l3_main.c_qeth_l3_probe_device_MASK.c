
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int checksum_type; scalar_t__ layer2; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ hwtrap; } ;
struct TYPE_4__ {int recover; int * output_handler; int * input_handler; int start_poll; } ;
struct qeth_card {TYPE_3__ options; TYPE_2__ info; TYPE_1__ discipline; } ;
struct ccwgroup_device {int dev; } ;
typedef int qdio_handler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct ccwgroup_device *VAR_7)
{
 struct qeth_card *VAR_8 = FUNC_0(&VAR_7->dev);

 FUNC_1(&VAR_7->dev);
 VAR_8->options.layer2 = 0;
 VAR_8->info.hwtrap = 0;
 VAR_8->discipline.start_poll = VAR_6;
 VAR_8->discipline.input_handler = (qdio_handler_t *)
  VAR_4;
 VAR_8->discipline.output_handler = (qdio_handler_t *)
  VAR_5;
 VAR_8->discipline.recover = VAR_3;
 if ((VAR_8->info.type == VAR_1) ||
     (VAR_8->info.type == VAR_2))
  VAR_8->options.checksum_type = VAR_0;
 return 0;
}
