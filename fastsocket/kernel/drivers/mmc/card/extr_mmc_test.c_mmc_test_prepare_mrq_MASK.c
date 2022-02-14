
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_card {int card; } ;
struct mmc_request {TYPE_3__* data; TYPE_2__* stop; TYPE_1__* cmd; } ;
struct TYPE_6__ {unsigned int blksz; unsigned int blocks; unsigned int sg_len; struct scatterlist* sg; int flags; } ;
struct TYPE_5__ {int flags; scalar_t__ arg; int opcode; } ;
struct TYPE_4__ {unsigned int arg; int flags; int opcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_test_card *VAR_11,
 struct mmc_request *VAR_12, struct scatterlist *VAR_13, unsigned VAR_14,
 unsigned VAR_15, unsigned VAR_16, unsigned VAR_17, int VAR_18)
{
 FUNC_0(!VAR_12 || !VAR_12->cmd || !VAR_12->data || !VAR_12->stop);

 if (VAR_16 > 1) {
  VAR_12->cmd->opcode = VAR_18 ?
   VAR_10 : VAR_4;
 } else {
  VAR_12->cmd->opcode = VAR_18 ?
   VAR_9 : VAR_5;
 }

 VAR_12->cmd->arg = VAR_15;
 VAR_12->cmd->flags = VAR_6 | VAR_1;

 if (VAR_16 == 1)
  VAR_12->stop = ((void*)0);
 else {
  VAR_12->stop->opcode = VAR_8;
  VAR_12->stop->arg = 0;
  VAR_12->stop->flags = VAR_7 | VAR_0;
 }

 VAR_12->data->blksz = VAR_17;
 VAR_12->data->blocks = VAR_16;
 VAR_12->data->flags = VAR_18 ? VAR_3 : VAR_2;
 VAR_12->data->sg = VAR_13;
 VAR_12->data->sg_len = VAR_14;

 FUNC_1(VAR_12->data, VAR_11->card);
}
