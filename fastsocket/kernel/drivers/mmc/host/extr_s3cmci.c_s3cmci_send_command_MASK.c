
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3cmci_host {scalar_t__ base; int complete_what; } ;
struct mmc_command {int flags; int arg; int opcode; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct s3cmci_host*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3cmci_host *VAR_17,
     struct mmc_command *VAR_18)
{
 u32 VAR_19, VAR_20;

 VAR_20 = VAR_14 | VAR_13 |
  VAR_16 | VAR_12 |
  VAR_15;

 FUNC_0(VAR_17, VAR_20);

 if (VAR_18->data)
  VAR_17->complete_what = VAR_2;
 else if (VAR_18->flags & VAR_4)
  VAR_17->complete_what = VAR_1;
 else
  VAR_17->complete_what = VAR_0;

 FUNC_1(VAR_18->arg, VAR_17->base + VAR_5);

 VAR_19 = VAR_18->opcode & VAR_8;
 VAR_19 |= VAR_10 | VAR_7;

 if (VAR_18->flags & VAR_4)
  VAR_19 |= VAR_11;

 if (VAR_18->flags & VAR_3)
  VAR_19 |= VAR_9;

 FUNC_1(VAR_19, VAR_17->base + VAR_6);
}
