
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int kern_return_t ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ KXLDSym ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(const KXLDSym *VAR_3,
    char VAR_4[], u_long VAR_5)
{
    kern_return_t VAR_6 = VAR_0;

    FUNC_0(VAR_3);
    FUNC_3(FUNC_2(VAR_3), VAR_2, VAR_6=VAR_0);

    VAR_6 = FUNC_1(VAR_3->name,
        VAR_4, VAR_5);
    FUNC_4(VAR_6, VAR_2);

    VAR_6 = VAR_1;

finish:
    return VAR_6;
}
