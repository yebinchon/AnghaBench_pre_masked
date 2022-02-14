
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioc3_uartregs {int dummy; } ;
struct TYPE_3__ {struct ioc3_uartregs uarta; } ;
struct ioc3 {TYPE_1__ sregs; } ;
typedef scalar_t__ nasid_t ;
struct TYPE_4__ {scalar_t__ memory_base; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline struct ioc3_uartregs *FUNC_2(void)
{
 struct ioc3 *VAR_2;
 nasid_t VAR_3;

 VAR_3 = (VAR_1 == VAR_0) ? FUNC_1() : VAR_1;
 VAR_2 = (struct ioc3 *)FUNC_0(VAR_3)->memory_base;

 return &VAR_2->sregs.uarta;
}
