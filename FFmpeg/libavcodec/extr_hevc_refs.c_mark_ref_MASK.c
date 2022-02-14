
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ HEVCFrame ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(HEVCFrame *VAR_2, int VAR_3)
{
    VAR_2->flags &= ~(VAR_0 | VAR_1);
    VAR_2->flags |= VAR_3;
}
