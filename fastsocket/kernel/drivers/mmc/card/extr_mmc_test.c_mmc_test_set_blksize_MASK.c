
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_command {unsigned int arg; int flags; int opcode; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mmc_command*,int ) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_3, unsigned VAR_4)
{
 struct mmc_command VAR_5;
 int VAR_6;

 VAR_5.opcode = VAR_2;
 VAR_5.arg = VAR_4;
 VAR_5.flags = VAR_1 | VAR_0;
 VAR_6 = FUNC_0(VAR_3->card->host, &VAR_5, 0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
