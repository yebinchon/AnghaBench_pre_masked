
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(Type *VAR_3) {
    VAR_2;
    if (VAR_3->kind == VAR_1)
        FUNC_0("cvttss2si #xmm0, #eax");
    else if (VAR_3->kind == VAR_0)
        FUNC_0("cvttsd2si #xmm0, #eax");
}
