
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_8__ {struct TYPE_8__* kext; struct TYPE_8__* interface; } ;
typedef TYPE_1__ KXLDObject ;
typedef TYPE_1__ KXLDKext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

kern_return_t
FUNC_3(KXLDKext *VAR_3, KXLDObject *VAR_4,
    KXLDObject *VAR_5)
{
    kern_return_t VAR_6 = VAR_0;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);

    VAR_3->kext = VAR_4;

    if (VAR_5) {
        VAR_3->interface = VAR_5;

        VAR_6 = FUNC_1(VAR_3->kext);
        FUNC_2(VAR_6, VAR_2);
    }

    VAR_6 = VAR_1;
finish:
    return VAR_6;
}
