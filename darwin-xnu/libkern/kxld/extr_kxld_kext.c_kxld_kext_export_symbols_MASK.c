
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_4__ {int kext; scalar_t__ interface; } ;
typedef TYPE_1__ KXLDKext ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,scalar_t__,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

kern_return_t
FUNC_4(const KXLDKext *VAR_3,
    KXLDDict *VAR_4,
    KXLDDict *VAR_5,
    KXLDDict *VAR_6)
{
    kern_return_t VAR_7 = VAR_0;

    FUNC_0(VAR_3);

    if (VAR_3->interface) {
        VAR_7 = FUNC_2(VAR_3->kext, VAR_3->interface,
            VAR_4, VAR_5,
            VAR_6);
        FUNC_3(VAR_7, VAR_2);
    } else {
        VAR_7 = FUNC_1(VAR_3->kext, VAR_4,
            VAR_6);
        FUNC_3(VAR_7, VAR_2);
    }

    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
