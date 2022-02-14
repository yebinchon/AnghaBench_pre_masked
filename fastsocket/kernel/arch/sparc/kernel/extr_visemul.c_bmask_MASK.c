
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int* gsr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* FUNC_3 () ;
 unsigned long FUNC_4 (int ,struct pt_regs*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct pt_regs*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_7(struct pt_regs *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_5(FUNC_1(VAR_1), FUNC_2(VAR_1), FUNC_0(VAR_1), 0);
 VAR_2 = FUNC_4(FUNC_1(VAR_1), VAR_0);
 VAR_3 = FUNC_4(FUNC_2(VAR_1), VAR_0);
 VAR_4 = VAR_2 + VAR_3;

 FUNC_6(VAR_0, VAR_4, FUNC_0(VAR_1));

 VAR_5 = FUNC_3()->gsr[0] & 0xffffffff;
 VAR_5 |= VAR_4 << 32UL;
 FUNC_3()->gsr[0] = VAR_5;
}
