
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int dummy; } ;






 int FUNC_0 (struct mmc_command*) ;

__attribute__((used)) static char *FUNC_1(struct mmc_command *VAR_0)
{
 switch (FUNC_0(VAR_0)) {
 case 131: return "R1";
 case 130: return "R1B";
 case 129: return "R2/R5";
 case 128: return "R3/R4/R7";
 default: return "?";
 }
}
