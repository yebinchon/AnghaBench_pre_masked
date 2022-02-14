
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_request {int error; struct mmc_request* stop; struct mmc_request* data; struct mmc_request* cmd; } ;
struct mmc_data {int error; struct mmc_data* stop; struct mmc_data* data; struct mmc_data* cmd; } ;
struct mmc_command {int error; struct mmc_command* stop; struct mmc_command* data; struct mmc_command* cmd; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct mmc_request*,int ,int) ;
 int FUNC_1 (struct mmc_test_card*,struct mmc_request*,struct scatterlist*,int,unsigned int,int,unsigned int,int) ;
 int FUNC_2 (struct mmc_test_card*) ;
 int FUNC_3 (int ,struct mmc_request*) ;
 int FUNC_4 (struct scatterlist*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct mmc_test_card *VAR_0,
 u8 *VAR_1, unsigned VAR_2, unsigned VAR_3, int VAR_4)
{
 int VAR_5;

 struct mmc_request VAR_6;
 struct mmc_command VAR_7;
 struct mmc_command VAR_8;
 struct mmc_data VAR_9;

 struct scatterlist VAR_10;

 FUNC_0(&VAR_6, 0, sizeof(struct mmc_request));
 FUNC_0(&VAR_7, 0, sizeof(struct mmc_command));
 FUNC_0(&VAR_9, 0, sizeof(struct mmc_data));
 FUNC_0(&VAR_8, 0, sizeof(struct mmc_command));

 VAR_6.cmd = &VAR_7;
 VAR_6.data = &VAR_9;
 VAR_6.stop = &VAR_8;

 FUNC_4(&VAR_10, VAR_1, VAR_3);

 FUNC_1(VAR_0, &VAR_6, &VAR_10, 1, VAR_2, 1, VAR_3, VAR_4);

 FUNC_3(VAR_0->card->host, &VAR_6);

 if (VAR_7.error)
  return VAR_7.error;
 if (VAR_9.error)
  return VAR_9.error;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5)
  return VAR_5;

 return 0;
}
