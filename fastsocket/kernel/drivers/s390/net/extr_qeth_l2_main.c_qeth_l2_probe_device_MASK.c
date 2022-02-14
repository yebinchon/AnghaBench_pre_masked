
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int recover; int * output_handler; int * input_handler; int start_poll; } ;
struct TYPE_5__ {scalar_t__ hwtrap; } ;
struct TYPE_4__ {int layer2; } ;
struct qeth_card {TYPE_3__ discipline; TYPE_2__ info; TYPE_1__ options; int mc_list; int vid_list; } ;
struct ccwgroup_device {int dev; } ;
typedef int qdio_handler_t ;


 int FUNC_0 (int *) ;
 struct qeth_card* FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ccwgroup_device *VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_1(&VAR_4->dev);

 FUNC_0(&VAR_5->vid_list);
 FUNC_0(&VAR_5->mc_list);
 VAR_5->options.layer2 = 1;
 VAR_5->info.hwtrap = 0;
 VAR_5->discipline.start_poll = VAR_3;
 VAR_5->discipline.input_handler = (qdio_handler_t *)
  VAR_1;
 VAR_5->discipline.output_handler = (qdio_handler_t *)
  VAR_2;
 VAR_5->discipline.recover = VAR_0;
 return 0;
}
