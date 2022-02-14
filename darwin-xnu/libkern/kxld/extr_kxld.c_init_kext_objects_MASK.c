
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
typedef int u_char ;
typedef int kern_return_t ;
struct TYPE_9__ {size_t nitems; } ;
struct TYPE_8__ {int defined_cxx_symbols_by_value; int * kext; int vtables_by_name; int defined_symbols_by_name; TYPE_3__ dependencies; int obsolete_symbols_by_name; } ;
struct TYPE_7__ {char const* kext_name; char const* interface_name; scalar_t__ is_direct_dependency; int interface_size; int * interface; int kext_size; int * kext; } ;
typedef int KXLDObject ;
typedef int KXLDKext ;
typedef TYPE_1__ KXLDDependency ;
typedef TYPE_2__ KXLDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*,int *,int ,char const*) ;
 int * FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(KXLDContext *VAR_3,
                  u_char *VAR_4,
                  u_long VAR_5,
                  const char *VAR_6,
                  KXLDDependency *VAR_7,
                  u_int VAR_8)
{
    kern_return_t VAR_9 = VAR_0;
    KXLDKext *VAR_10 = ((void*)0);
    KXLDObject *VAR_11 = ((void*)0);
    KXLDObject *VAR_12 = ((void*)0);
    u_int VAR_13 = 0;





    for (VAR_13 = 0; VAR_13 < VAR_8; ++VAR_13) {
        VAR_10 = FUNC_1(&VAR_3->dependencies, VAR_13);
        VAR_11 = ((void*)0);
        VAR_12 = ((void*)0);

        VAR_11 = FUNC_0(VAR_3, VAR_7[VAR_13].kext,
                                          VAR_7[VAR_13].kext_size, VAR_7[VAR_13].kext_name);
        FUNC_5(VAR_11, VAR_2, VAR_9=VAR_0);

        if (VAR_7[VAR_13].interface) {
            VAR_12 = FUNC_0(VAR_3,
                                                   VAR_7[VAR_13].interface, VAR_7[VAR_13].interface_size,
                                                   VAR_7[VAR_13].interface_name);
            FUNC_5(VAR_12, VAR_2, VAR_9=VAR_0);
        }

        VAR_9 = FUNC_4(VAR_10, VAR_11, VAR_12);
        FUNC_6(VAR_9, VAR_2);

        if (VAR_7[VAR_13].is_direct_dependency) {
            VAR_9 = FUNC_2(VAR_10,
                                            &VAR_3->defined_symbols_by_name,
                                            &VAR_3->obsolete_symbols_by_name,
                                            &VAR_3->defined_cxx_symbols_by_value);
            FUNC_6(VAR_9, VAR_2);
        } else {
            VAR_9 = FUNC_2(VAR_10,
                                                                  ((void*)0), ((void*)0),
                                            &VAR_3->defined_cxx_symbols_by_value);
            FUNC_6(VAR_9, VAR_2);
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_3->dependencies.nitems; ++VAR_13) {
        VAR_10 = FUNC_1(&VAR_3->dependencies, VAR_13);

        VAR_9 = FUNC_3(VAR_10,
                                        &VAR_3->defined_cxx_symbols_by_value,
                                        &VAR_3->defined_symbols_by_name,
                                        &VAR_3->vtables_by_name);
        FUNC_6(VAR_9, VAR_2);
    }




    VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
    FUNC_5(VAR_11, VAR_2, VAR_9=VAR_0);

    VAR_9 = FUNC_4(VAR_3->kext, VAR_11, ((void*)0));
    FUNC_6(VAR_9, VAR_2);

    VAR_9 = FUNC_2(VAR_3->kext,
                                                          ((void*)0), ((void*)0),
                                    &VAR_3->defined_cxx_symbols_by_value);
    FUNC_6(VAR_9, VAR_2);

    VAR_9 = VAR_1;
finish:
    return VAR_9;
}
