
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(const KXLDSym *VAR_5,
    char VAR_6[], u_long VAR_7)
{
    kern_return_t VAR_8 = VAR_0;

    FUNC_0(VAR_5);
    FUNC_3(FUNC_2(VAR_5), VAR_4, VAR_8=VAR_0);

    VAR_8 = FUNC_1(VAR_5->name, VAR_3, VAR_2,
        VAR_6, VAR_7);
    FUNC_4(VAR_8, VAR_4);

    VAR_8 = VAR_1;
finish:
    return VAR_8;
}
