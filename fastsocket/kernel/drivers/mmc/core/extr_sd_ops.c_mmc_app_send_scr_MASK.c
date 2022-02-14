
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct mmc_request {int flags; int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; scalar_t__ arg; int opcode; struct mmc_request* data; struct mmc_request* cmd; } ;
struct mmc_data {int flags; int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; scalar_t__ arg; int opcode; struct mmc_data* data; struct mmc_data* cmd; } ;
struct mmc_command {int flags; int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; scalar_t__ arg; int opcode; struct mmc_command* data; struct mmc_command* cmd; } ;
struct mmc_card {int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_request*,int ,int) ;
 int FUNC_3 (int ,struct mmc_card*) ;
 int FUNC_4 (struct mmc_request*,struct mmc_card*) ;
 int FUNC_5 (int ,struct mmc_request*) ;
 int FUNC_6 (struct scatterlist*,int *,int) ;

int FUNC_7(struct mmc_card *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 struct mmc_request VAR_8;
 struct mmc_command VAR_9;
 struct mmc_data VAR_10;
 struct scatterlist VAR_11;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_5->host);
 FUNC_0(!VAR_6);



 VAR_7 = FUNC_3(VAR_5->host, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_8, 0, sizeof(struct mmc_request));
 FUNC_2(&VAR_9, 0, sizeof(struct mmc_command));
 FUNC_2(&VAR_10, 0, sizeof(struct mmc_data));

 VAR_8.cmd = &VAR_9;
 VAR_8.data = &VAR_10;

 VAR_9.opcode = VAR_4;
 VAR_9.arg = 0;
 VAR_9.flags = VAR_3 | VAR_2 | VAR_0;

 VAR_10.blksz = 8;
 VAR_10.blocks = 1;
 VAR_10.flags = VAR_1;
 VAR_10.sg = &VAR_11;
 VAR_10.sg_len = 1;

 FUNC_6(&VAR_11, VAR_6, 8);

 FUNC_4(&VAR_10, VAR_5);

 FUNC_5(VAR_5->host, &VAR_8);

 if (VAR_9.error)
  return VAR_9.error;
 if (VAR_10.error)
  return VAR_10.error;

 VAR_6[0] = FUNC_1(VAR_6[0]);
 VAR_6[1] = FUNC_1(VAR_6[1]);

 return 0;
}
