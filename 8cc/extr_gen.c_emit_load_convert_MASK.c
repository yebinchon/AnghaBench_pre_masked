
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(Type *VAR_5, Type *VAR_6) {
    VAR_4;
    if (FUNC_4(VAR_6) && VAR_5->kind == VAR_2)
        FUNC_0("cvtsi2ss #eax, #xmm0");
    else if (FUNC_4(VAR_6) && VAR_5->kind == VAR_1)
        FUNC_0("cvtsi2sd #eax, #xmm0");
    else if (VAR_6->kind == VAR_2 && VAR_5->kind == VAR_1)
        FUNC_0("cvtps2pd #xmm0, #xmm0");
    else if ((VAR_6->kind == VAR_1 || VAR_6->kind == VAR_3) && VAR_5->kind == VAR_2)
        FUNC_0("cvtpd2ps #xmm0, #xmm0");
    else if (VAR_5->kind == VAR_0)
        FUNC_2(VAR_6);
    else if (FUNC_4(VAR_6) && FUNC_4(VAR_5))
        FUNC_1(VAR_6);
    else if (FUNC_4(VAR_5))
        FUNC_3(VAR_6);
}
