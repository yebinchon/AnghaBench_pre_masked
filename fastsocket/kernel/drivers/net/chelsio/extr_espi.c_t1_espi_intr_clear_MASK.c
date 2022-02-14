
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct peespi {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct peespi *VAR_4)
{
 FUNC_0(VAR_4->adapter->regs + VAR_0);
 FUNC_1(0xffffffff, VAR_4->adapter->regs + VAR_1);
 FUNC_1(VAR_3, VAR_4->adapter->regs + VAR_2);
}
