
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdricoh_host {int app_cmd; struct device* dev; } ;
struct page {int dummy; } ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {size_t blksz; int blocks; int flags; size_t bytes_xfered; TYPE_1__* sg; int sg_len; } ;
struct mmc_command {unsigned char opcode; int error; int flags; int* resp; int arg; struct mmc_data* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct page*) ;
 int * FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct sdricoh_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_7 (struct sdricoh_host*,int,int *,size_t) ;
 int FUNC_8 (struct sdricoh_host*,unsigned char,int ) ;
 scalar_t__ FUNC_9 (struct sdricoh_host*,int ,int ) ;
 int FUNC_10 (struct sdricoh_host*,scalar_t__) ;
 int FUNC_11 (struct sdricoh_host*,scalar_t__) ;
 int FUNC_12 (struct sdricoh_host*,int ,int) ;
 int FUNC_13 (struct sdricoh_host*,int ,size_t) ;
 struct page* FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_15(struct mmc_host *VAR_10, struct mmc_request *VAR_11)
{
 struct sdricoh_host *VAR_12 = FUNC_5(VAR_10);
 struct mmc_command *VAR_13 = VAR_11->cmd;
 struct mmc_data *VAR_14 = VAR_13->data;
 struct device *VAR_15 = VAR_12->dev;
 unsigned char VAR_16 = VAR_13->opcode;
 int VAR_17;

 FUNC_0(VAR_15, "=============================\n");
 FUNC_0(VAR_15, "sdricoh_request opcode=%i\n", VAR_16);

 FUNC_12(VAR_12, VAR_6, 0x18);


 if (VAR_12->app_cmd) {
  VAR_16 |= 64;
  VAR_12->app_cmd = 0;
 } else if (VAR_16 == 55)
  VAR_12->app_cmd = 1;


 if (VAR_14) {
  FUNC_13(VAR_12, VAR_7, VAR_14->blksz);
  FUNC_12(VAR_12, VAR_4, 0);
 }

 VAR_13->error = FUNC_8(VAR_12, VAR_16, VAR_13->arg);


 if (VAR_13->flags & VAR_3) {
  if (VAR_13->flags & VAR_2) {

   for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
    VAR_13->resp[VAR_17] =
        FUNC_11(VAR_12,
        VAR_5 + (3 - VAR_17) * 4) << 8;
    if (VAR_17 != 3)
     VAR_13->resp[VAR_17] |=
         FUNC_10(VAR_12, VAR_5 +
         (3 - VAR_17) * 4 - 1);
   }
  } else
   VAR_13->resp[0] = FUNC_11(VAR_12, VAR_5);
 }


 if (VAR_14 && VAR_13->error == 0) {
  FUNC_0(VAR_15, "transfer: blksz %i blocks %i sg_len %i "
   "sg length %i\n", VAR_14->blksz, VAR_14->blocks,
   VAR_14->sg_len, VAR_14->sg->length);


  FUNC_12(VAR_12, VAR_6, 0x837f031e);
  for (VAR_17 = 0; VAR_17 < VAR_14->blocks; VAR_17++) {
   size_t VAR_18 = VAR_14->blksz;
   u8 *VAR_19;
   struct page *VAR_20;
   int VAR_21;
   VAR_20 = FUNC_14(VAR_14->sg);

   VAR_19 = FUNC_3(VAR_20) + VAR_14->sg->offset + (VAR_18 * VAR_17);
   VAR_21 =
    FUNC_7(VAR_12,
     VAR_14->flags & VAR_1, VAR_19, VAR_18);
   FUNC_4(VAR_20);
   FUNC_2(VAR_20);
   if (VAR_21) {
    FUNC_1(VAR_15, "sdricoh_request: cmd %i "
     "block transfer failed\n", VAR_13->opcode);
    VAR_13->error = VAR_21;
    break;
   } else
    VAR_14->bytes_xfered += VAR_18;
  }

  FUNC_12(VAR_12, VAR_4, 1);

  if (FUNC_9(VAR_12, VAR_8,
     VAR_9)) {
   FUNC_1(VAR_15, "sdricoh_request: transfer end error\n");
   VAR_13->error = -VAR_0;
  }
 }


 FUNC_6(VAR_10, VAR_11);
 FUNC_0(VAR_15, "=============================\n");
}
