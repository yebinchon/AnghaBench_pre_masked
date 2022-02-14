
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int blocks; } ;
struct mmc_command {struct mmc_data* data; } ;
struct at91mci_host {struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct at91mci_host*,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct at91mci_host *VAR_8)
{
 struct mmc_command *VAR_9;
 struct mmc_data *VAR_10;

 FUNC_1("Handling the transmit\n");


 FUNC_0(VAR_8, VAR_5, VAR_6 | VAR_7);


 FUNC_0(VAR_8, VAR_1, VAR_4);

 VAR_9 = VAR_8->cmd;
 if (!VAR_9) return;

 VAR_10 = VAR_9->data;
 if (!VAR_10) return;

 if (VAR_9->data->blocks > 1) {
  FUNC_1("multiple write : wait for BLKE...\n");
  FUNC_0(VAR_8, VAR_2, VAR_0);
 } else
  FUNC_0(VAR_8, VAR_2, VAR_3);
}
