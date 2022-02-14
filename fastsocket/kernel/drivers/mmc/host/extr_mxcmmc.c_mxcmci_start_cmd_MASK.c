
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {scalar_t__ base; int mmc; struct mmc_command* cmd; } ;
struct mmc_command {int error; unsigned int opcode; int arg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_command*) ;
 scalar_t__ FUNC_4 (struct mxcmci_host*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mxcmci_host *VAR_11, struct mmc_command *VAR_12,
  unsigned int VAR_13)
{
 FUNC_0(VAR_11->cmd != ((void*)0));
 VAR_11->cmd = VAR_12;

 switch (FUNC_3(VAR_12)) {
 case 131:
 case 130:
  VAR_13 |= VAR_2;
  break;
 case 129:
  VAR_13 |= VAR_0;
  break;
 case 128:
  VAR_13 |= VAR_1;
  break;
 case 132:
  break;
 default:
  FUNC_1(FUNC_2(VAR_11->mmc), "unhandled response type 0x%x\n",
    FUNC_3(VAR_12));
  VAR_12->error = -VAR_3;
  return -VAR_3;
 }

 if (FUNC_4(VAR_11))
  FUNC_5(VAR_5 | VAR_6 |
    VAR_4,
    VAR_11->base + VAR_10);
 else
  FUNC_5(VAR_4, VAR_11->base + VAR_10);

 FUNC_6(VAR_12->opcode, VAR_11->base + VAR_8);
 FUNC_5(VAR_12->arg, VAR_11->base + VAR_7);
 FUNC_6(VAR_13, VAR_11->base + VAR_9);

 return 0;
}
