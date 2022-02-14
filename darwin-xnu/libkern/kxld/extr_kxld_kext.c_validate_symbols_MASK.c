
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_6__ {int kext; } ;
struct TYPE_5__ {int name; } ;
typedef int KXLDSymtabIterator ;
typedef TYPE_1__ KXLDSym ;
typedef TYPE_2__ KXLDKext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char**,size_t*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(KXLDKext *VAR_8)
{
    kern_return_t VAR_9 = VAR_1;
    KXLDSymtabIterator VAR_10;
    KXLDSym *VAR_11 = ((void*)0);
    u_int VAR_12 = VAR_0;
    char *VAR_13 = ((void*)0);
    size_t VAR_14 = 0;


    FUNC_5(&VAR_10, FUNC_3(VAR_8->kext),
        VAR_7, VAR_0);
    while ((VAR_11 = FUNC_4(&VAR_10))) {
        if (!VAR_12) {
            VAR_12 = VAR_3;
            FUNC_2(VAR_6, VAR_5,
                "The following symbols are unresolved for this kext:");
        }
        FUNC_2(VAR_6, VAR_5, "\t%s",
            FUNC_0(VAR_11->name, &VAR_13, &VAR_14));
    }
    FUNC_6(VAR_12, VAR_4, VAR_9=VAR_1);

    VAR_9 = VAR_2;

finish:
    if (VAR_13) FUNC_1(VAR_13, VAR_14);
    return VAR_9;
}
