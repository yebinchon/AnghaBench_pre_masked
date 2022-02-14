
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ name; } ;
typedef TYPE_1__ OptionDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const OptionDef *VAR_3)
{
    while (VAR_3->name) {
        if (VAR_3->flags & VAR_2)
            FUNC_0(VAR_3->flags & (VAR_0 | VAR_1));
        VAR_3++;
    }
}
