
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_1__* data; struct mmc_command* cmd; } ;
struct mmc_command {int* resp; int flags; int error; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tmio_mmc_host*,int) ;
 int FUNC_3 (struct tmio_mmc_host*) ;

__attribute__((used)) static inline void FUNC_4(struct tmio_mmc_host *VAR_11,
 unsigned int VAR_12)
{
 struct mmc_command *VAR_13 = VAR_11->cmd;
 int VAR_14, VAR_15;

 if (!VAR_11->cmd) {
  FUNC_1("Spurious CMD irq\n");
  return;
 }

 VAR_11->cmd = ((void*)0);






 for (VAR_14 = 3, VAR_15 = VAR_0 ; VAR_14 >= 0 ; VAR_14--, VAR_15 += 4)
  VAR_13->resp[VAR_14] = FUNC_2(VAR_11, VAR_15);

 if (VAR_13->flags & VAR_4) {
  VAR_13->resp[0] = (VAR_13->resp[0] << 8) | (VAR_13->resp[1] >> 24);
  VAR_13->resp[1] = (VAR_13->resp[1] << 8) | (VAR_13->resp[2] >> 24);
  VAR_13->resp[2] = (VAR_13->resp[2] << 8) | (VAR_13->resp[3] >> 24);
  VAR_13->resp[3] <<= 8;
 } else if (VAR_13->flags & VAR_6) {
  VAR_13->resp[0] = VAR_13->resp[3];
 }

 if (VAR_12 & VAR_9)
  VAR_13->error = -VAR_2;
 else if (VAR_12 & VAR_10 && VAR_13->flags & VAR_5)
  VAR_13->error = -VAR_1;





 if (VAR_11->data && !VAR_13->error) {
  if (VAR_11->data->flags & VAR_3)
   FUNC_0(VAR_11, VAR_7);
  else
   FUNC_0(VAR_11, VAR_8);
 } else {
  FUNC_3(VAR_11);
 }

 return;
}
