
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_request {int arg; int flags; unsigned int blksz; unsigned int blocks; int sg_len; int error; int* resp; struct scatterlist* sg; int opcode; struct mmc_request* data; struct mmc_request* cmd; } ;
struct mmc_data {int arg; int flags; unsigned int blksz; unsigned int blocks; int sg_len; int error; int* resp; struct scatterlist* sg; int opcode; struct mmc_data* data; struct mmc_data* cmd; } ;
struct mmc_command {int arg; int flags; unsigned int blksz; unsigned int blocks; int sg_len; int error; int* resp; struct scatterlist* sg; int opcode; struct mmc_command* data; struct mmc_command* cmd; } ;
struct mmc_card {int host; } ;


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
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mmc_request*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_request*,struct mmc_card*) ;
 int FUNC_5 (int ,struct mmc_request*) ;
 int FUNC_6 (struct scatterlist*,int *,unsigned int) ;

int FUNC_7(struct mmc_card *VAR_12, int VAR_13, unsigned VAR_14,
 unsigned VAR_15, int VAR_16, u8 *VAR_17, unsigned VAR_18, unsigned VAR_19)
{
 struct mmc_request VAR_20;
 struct mmc_command VAR_21;
 struct mmc_data VAR_22;
 struct scatterlist VAR_23;

 FUNC_0(!VAR_12);
 FUNC_0(VAR_14 > 7);
 FUNC_0(VAR_18 == 1 && VAR_19 > 512);
 FUNC_1(VAR_18 == 0);
 FUNC_1(VAR_19 == 0);


 if (VAR_15 & ~0x1FFFF)
  return -VAR_0;

 FUNC_2(&VAR_20, 0, sizeof(struct mmc_request));
 FUNC_2(&VAR_21, 0, sizeof(struct mmc_command));
 FUNC_2(&VAR_22, 0, sizeof(struct mmc_data));

 VAR_20.cmd = &VAR_21;
 VAR_20.data = &VAR_22;

 VAR_21.opcode = VAR_11;
 VAR_21.arg = VAR_13 ? 0x80000000 : 0x00000000;
 VAR_21.arg |= VAR_14 << 28;
 VAR_21.arg |= VAR_16 ? 0x04000000 : 0x00000000;
 VAR_21.arg |= VAR_15 << 9;
 if (VAR_18 == 1 && VAR_19 <= 512)
  VAR_21.arg |= (VAR_19 == 512) ? 0 : VAR_19;
 else
  VAR_21.arg |= 0x08000000 | VAR_18;
 VAR_21.flags = VAR_7 | VAR_6 | VAR_3;

 VAR_22.blksz = VAR_19;
 VAR_22.blocks = VAR_18;
 VAR_22.flags = VAR_13 ? VAR_5 : VAR_4;
 VAR_22.sg = &VAR_23;
 VAR_22.sg_len = 1;

 FUNC_6(&VAR_23, VAR_17, VAR_19 * VAR_18);

 FUNC_4(&VAR_22, VAR_12);

 FUNC_5(VAR_12->host, &VAR_20);

 if (VAR_21.error)
  return VAR_21.error;
 if (VAR_22.error)
  return VAR_22.error;

 if (FUNC_3(VAR_12->host)) {

 } else {
  if (VAR_21.resp[0] & VAR_8)
   return -VAR_1;
  if (VAR_21.resp[0] & VAR_9)
   return -VAR_0;
  if (VAR_21.resp[0] & VAR_10)
   return -VAR_2;
 }

 return 0;
}
