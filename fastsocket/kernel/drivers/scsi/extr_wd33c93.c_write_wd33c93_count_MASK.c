
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* SCMD; int * SASR; } ;
typedef TYPE_1__ wd33c93_regs ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(const wd33c93_regs VAR_1, unsigned long VAR_2)
{
 *VAR_1.SASR = VAR_0;
 FUNC_0();
 *VAR_1.SCMD = VAR_2 >> 16;
 *VAR_1.SCMD = VAR_2 >> 8;
 *VAR_1.SCMD = VAR_2;
 FUNC_0();
}
