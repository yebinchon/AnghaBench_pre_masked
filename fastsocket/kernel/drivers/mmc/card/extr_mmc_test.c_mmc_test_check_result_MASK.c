
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_test_card {int dummy; } ;
struct mmc_request {TYPE_3__* data; TYPE_2__* stop; TYPE_1__* cmd; } ;
struct TYPE_6__ {int error; int bytes_xfered; int blocks; int blksz; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_4__ {int error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_3,
 struct mmc_request *VAR_4)
{
 int VAR_5;

 FUNC_0(!VAR_4 || !VAR_4->cmd || !VAR_4->data);

 VAR_5 = 0;

 if (!VAR_5 && VAR_4->cmd->error)
  VAR_5 = VAR_4->cmd->error;
 if (!VAR_5 && VAR_4->data->error)
  VAR_5 = VAR_4->data->error;
 if (!VAR_5 && VAR_4->stop && VAR_4->stop->error)
  VAR_5 = VAR_4->stop->error;
 if (!VAR_5 && VAR_4->data->bytes_xfered !=
  VAR_4->data->blocks * VAR_4->data->blksz)
  VAR_5 = VAR_1;

 if (VAR_5 == -VAR_0)
  VAR_5 = VAR_2;

 return VAR_5;
}
