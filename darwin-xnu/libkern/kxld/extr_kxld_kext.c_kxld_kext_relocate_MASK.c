
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_19__ {int kext; } ;
typedef TYPE_1__ const KXLDKext ;
typedef TYPE_1__ const KXLDDict ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__ const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*) ;

kern_return_t
FUNC_10(KXLDKext *VAR_5,
                   kxld_addr_t VAR_6,
                   KXLDDict *VAR_7,
                   const KXLDDict *VAR_8,
                   const KXLDDict *VAR_9,
                   const KXLDDict *VAR_10)
{
    kern_return_t VAR_11 = VAR_1;

    FUNC_0(VAR_5);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    VAR_11 = FUNC_2(VAR_5->kext);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = FUNC_3(VAR_5->kext);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = FUNC_5(VAR_5->kext, VAR_6);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = FUNC_8(VAR_5, VAR_8, VAR_9);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = FUNC_1(VAR_5, VAR_10, ((void*)0));
    FUNC_7(VAR_11, VAR_3);

    if (VAR_4 == VAR_0) {
        VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_8);
        FUNC_7(VAR_11, VAR_3);
    }

    VAR_11 = FUNC_9(VAR_5);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = FUNC_4(VAR_5->kext, VAR_7);
    FUNC_7(VAR_11, VAR_3);

    VAR_11 = VAR_2;
finish:
   return VAR_11;
}
