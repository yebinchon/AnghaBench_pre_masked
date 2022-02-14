
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_command {int flags; int* resp; int error; } ;
struct au1xmmc_host {int flags; int status; int finish_task; scalar_t__ iobase; struct mmc_request* mrq; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct au1xmmc_host*) ;
 int VAR_4 ;
 int FUNC_2 (struct au1xmmc_host*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct au1xmmc_host *VAR_19, u32 VAR_20)
{
 struct mmc_request *VAR_21 = VAR_19->mrq;
 struct mmc_command *VAR_22;
 u32 VAR_23[4];
 int VAR_24, VAR_25;

 if (!VAR_19->mrq)
  return;

 VAR_22 = VAR_21->cmd;
 VAR_22->error = 0;

 if (VAR_22->flags & VAR_6) {
  if (VAR_22->flags & VAR_5) {
   VAR_23[0] = FUNC_4(VAR_19->iobase + VAR_13);
   VAR_23[1] = FUNC_4(VAR_19->iobase + VAR_12);
   VAR_23[2] = FUNC_4(VAR_19->iobase + VAR_11);
   VAR_23[3] = FUNC_4(VAR_19->iobase + VAR_10);





   for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
    VAR_22->resp[VAR_24] = (VAR_23[VAR_24] & 0x00FFFFFF) << 8;
    if (VAR_24 != 3)
     VAR_22->resp[VAR_24] |= (VAR_23[VAR_24 + 1] & 0xFF000000) >> 24;
   }
  } else {







   VAR_22->resp[0] = FUNC_4(VAR_19->iobase + VAR_10);
  }
 }


 if (VAR_20 & (VAR_17 | VAR_18 | VAR_16))
  VAR_22->error = -VAR_0;

 VAR_25 = VAR_19->flags & (VAR_3 | VAR_2);

 if (!VAR_25 || VAR_22->error) {
  FUNC_2(VAR_19, VAR_9 | VAR_7 | VAR_8);
  FUNC_5(&VAR_19->finish_task);
  return;
 }

 VAR_19->status = VAR_4;

 if (VAR_19->flags & VAR_1) {
 }
}
