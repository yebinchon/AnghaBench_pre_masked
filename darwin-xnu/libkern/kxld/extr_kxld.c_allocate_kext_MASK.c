
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef int kxld_addr_t ;
struct TYPE_3__ {int (* allocate_callback ) (scalar_t__,int*,void*) ;int kext; } ;
typedef TYPE_1__ KXLDContext ;
typedef int KXLDAllocateFlags ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,char*,void*) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (scalar_t__,int*,void*) ;

__attribute__((used)) static u_char *
FUNC_9(KXLDContext *VAR_4,
              void *VAR_5,
              kxld_addr_t *VAR_6,
              u_long *VAR_7,
              u_char **VAR_8)
{
    KXLDAllocateFlags VAR_9 = 0;
    kxld_addr_t VAR_10 = 0;
    u_long VAR_11 = 0;
    u_long VAR_12 = 0;
    u_char * VAR_13 = ((void*)0);

    *VAR_8 = ((void*)0);

    FUNC_2(VAR_4->kext, &VAR_12, &VAR_11);

    VAR_10 = VAR_4->allocate_callback(VAR_11, &VAR_9, VAR_5);
    FUNC_7(!(VAR_10 & (FUNC_1()-1)), VAR_0,
                   FUNC_4(VAR_3, VAR_2,
                            "Load address %p is not page-aligned.",
                            (void *) (uintptr_t) VAR_10));

    if (VAR_9 & VAR_1) {
        VAR_13 = (u_char *) (u_long) VAR_10;
    } else {
        VAR_13 = FUNC_5(VAR_11);
        FUNC_6(VAR_13, VAR_0);

        *VAR_8 = VAR_13;
    }

    FUNC_3(VAR_4->kext, VAR_11);






    FUNC_0(VAR_13, VAR_11);
    *VAR_6 = VAR_10;
    *VAR_7 = VAR_11;

finish:
    return VAR_13;
}
