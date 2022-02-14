
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct mmc_request {int flags; unsigned int blksz; int blocks; int sg_len; int timeout_clks; int error; scalar_t__ timeout_ns; struct scatterlist* sg; scalar_t__ arg; scalar_t__ opcode; struct mmc_request* data; struct mmc_request* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int flags; unsigned int blksz; int blocks; int sg_len; int timeout_clks; int error; scalar_t__ timeout_ns; struct scatterlist* sg; scalar_t__ arg; scalar_t__ opcode; struct mmc_data* data; struct mmc_data* cmd; } ;
struct mmc_command {int flags; unsigned int blksz; int blocks; int sg_len; int timeout_clks; int error; scalar_t__ timeout_ns; struct scatterlist* sg; scalar_t__ arg; scalar_t__ opcode; struct mmc_command* data; struct mmc_command* cmd; } ;
struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 int FUNC_3 (struct mmc_request*,int ,int) ;
 int FUNC_4 (struct mmc_request*,struct mmc_card*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_6 (struct scatterlist*,void*,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct mmc_card *VAR_8, struct mmc_host *VAR_9,
  u32 VAR_10, void *VAR_11, unsigned VAR_12)
{
 struct mmc_request VAR_13;
 struct mmc_command VAR_14;
 struct mmc_data VAR_15;
 struct scatterlist VAR_16;
 void *VAR_17;




 VAR_17 = FUNC_1(VAR_12, VAR_1);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_13, 0, sizeof(struct mmc_request));
 FUNC_3(&VAR_14, 0, sizeof(struct mmc_command));
 FUNC_3(&VAR_15, 0, sizeof(struct mmc_data));

 VAR_13.cmd = &VAR_14;
 VAR_13.data = &VAR_15;

 VAR_14.opcode = VAR_10;
 VAR_14.arg = 0;






 VAR_14.flags = VAR_5 | VAR_4 | VAR_2;

 VAR_15.blksz = VAR_12;
 VAR_15.blocks = 1;
 VAR_15.flags = VAR_3;
 VAR_15.sg = &VAR_16;
 VAR_15.sg_len = 1;

 FUNC_6(&VAR_16, VAR_17, VAR_12);

 if (VAR_10 == VAR_7 || VAR_10 == VAR_6) {




  VAR_15.timeout_ns = 0;
  VAR_15.timeout_clks = 64;
 } else
  FUNC_4(&VAR_15, VAR_8);

 FUNC_5(VAR_9, &VAR_13);

 FUNC_2(VAR_11, VAR_17, VAR_12);
 FUNC_0(VAR_17);

 if (VAR_14.error)
  return VAR_14.error;
 if (VAR_15.error)
  return VAR_15.error;

 return 0;
}
