
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_nand_host {TYPE_1__* board; } ;
struct TYPE_2__ {scalar_t__ enable_pin; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct atmel_nand_host *VAR_0)
{
 if (VAR_0->board->enable_pin)
  FUNC_0(VAR_0->board->enable_pin, 0);
}
