
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_card {TYPE_1__* card; int buffer; } ;
struct mmc_request {struct mmc_request* stop; struct mmc_request* data; struct mmc_request* cmd; } ;
struct mmc_data {struct mmc_data* stop; struct mmc_data* data; struct mmc_data* cmd; } ;
struct mmc_command {struct mmc_command* stop; struct mmc_command* data; struct mmc_command* cmd; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct mmc_request*,int ,int) ;
 int FUNC_1 (struct mmc_test_card*,struct mmc_request*) ;
 int FUNC_2 (struct mmc_test_card*,struct mmc_request*,int) ;
 int FUNC_3 (struct mmc_test_card*,struct mmc_request*,struct scatterlist*,int,int ,unsigned int,unsigned int,int) ;
 int FUNC_4 (struct mmc_test_card*) ;
 int FUNC_5 (int ,struct mmc_request*) ;
 int FUNC_6 (struct scatterlist*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct mmc_test_card *VAR_0,
 unsigned VAR_1, unsigned VAR_2, int VAR_3)
{
 struct mmc_request VAR_4;
 struct mmc_command VAR_5;
 struct mmc_command VAR_6;
 struct mmc_data VAR_7;

 struct scatterlist VAR_8;

 FUNC_0(&VAR_4, 0, sizeof(struct mmc_request));
 FUNC_0(&VAR_5, 0, sizeof(struct mmc_command));
 FUNC_0(&VAR_7, 0, sizeof(struct mmc_data));
 FUNC_0(&VAR_6, 0, sizeof(struct mmc_command));

 VAR_4.cmd = &VAR_5;
 VAR_4.data = &VAR_7;
 VAR_4.stop = &VAR_6;

 FUNC_6(&VAR_8, VAR_0->buffer, VAR_1 * VAR_2);

 FUNC_3(VAR_0, &VAR_4, &VAR_8, 1, 0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0, &VAR_4, VAR_3);

 FUNC_5(VAR_0->card->host, &VAR_4);

 FUNC_4(VAR_0);

 return FUNC_1(VAR_0, &VAR_4);
}
