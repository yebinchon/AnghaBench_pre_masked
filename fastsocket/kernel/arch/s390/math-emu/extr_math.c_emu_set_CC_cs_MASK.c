
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;






 int FUNC_0 (struct pt_regs*,int) ;

__attribute__((used)) static inline void FUNC_1(struct pt_regs *VAR_0, int VAR_1, int VAR_2)
{
        switch (VAR_1) {
        case 129:
        case 131:
                FUNC_0(VAR_0, VAR_2 ? 1 : 2);
                break;
        case 128:
                FUNC_0(VAR_0, 0);
                break;
        case 130:
                FUNC_0(VAR_0, 3);
                break;
        }
}
