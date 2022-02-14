
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ datalen; scalar_t__ opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(const sdmmc_command_t* VAR_4)
{

    return VAR_4->datalen > 0 &&
           (VAR_4->opcode == VAR_2 ||
            VAR_4->opcode == VAR_0 ||
            VAR_4->opcode == VAR_3 ||
            VAR_4->opcode == VAR_1);
}
