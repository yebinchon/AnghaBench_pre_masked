
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
typedef int boolean_t ;
struct TYPE_3__ {int entries; } ;
typedef int KXLDVTableEntry ;
typedef TYPE_1__ KXLDVTable ;


 int FUNC_0 (int ,int*,int*) ;
 int * FUNC_1 (int *,int) ;

KXLDVTableEntry *
FUNC_2(const KXLDVTable *VAR_0, u_long VAR_1,
    boolean_t VAR_2)
{
    KXLDVTableEntry *VAR_3 = ((void*)0);
    u_int VAR_4 = 0;
    u_int VAR_5 = 0;
    u_int VAR_6 = 0;

    (void) FUNC_0(VAR_2,
        &VAR_4, &VAR_5);

    if (VAR_1 % VAR_4) {
        goto finish;
    }

    VAR_6 = (u_int) ((VAR_1 - VAR_5) / VAR_4);
    VAR_3 = FUNC_1(&VAR_0->entries, VAR_6);
finish:
    return VAR_3;
}
