
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
typedef scalar_t__ kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_18__ {scalar_t__ nitems; } ;
struct TYPE_17__ {scalar_t__ link_addr; int * name; } ;
struct TYPE_16__ {TYPE_8__ entries; int vtable; int is_32_bit; } ;
struct TYPE_14__ {scalar_t__ addr; int * name; } ;
struct TYPE_15__ {TYPE_1__ patched; } ;
typedef TYPE_2__ KXLDVTableEntry ;
typedef TYPE_3__ const KXLDVTable ;
typedef TYPE_4__ KXLDSym ;
typedef TYPE_3__ KXLDRelocator ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__* FUNC_2 (TYPE_8__*,scalar_t__) ;
 int FUNC_3 (TYPE_8__*,int,scalar_t__) ;
 TYPE_4__* FUNC_4 (int const*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_3__ const*,int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(KXLDVTable *VAR_3, const KXLDRelocator *VAR_4,
    const KXLDDict *VAR_5)
{
    kern_return_t VAR_6 = VAR_0;
    KXLDVTableEntry *VAR_7 = ((void*)0);
    KXLDSym *VAR_8 = ((void*)0);
    kxld_addr_t VAR_9 = 0;
    u_long VAR_10;
    u_int VAR_11 = 0;
    u_int VAR_12 = 0;
    u_int VAR_13 = 0;
    u_int VAR_14 = 0;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);

    (void) FUNC_1(VAR_4->is_32_bit,
        &VAR_11, &VAR_12);



    VAR_10 = VAR_12;
    while (1) {
        VAR_9 = FUNC_5(VAR_4,
            VAR_3->vtable, VAR_10);
        if (!VAR_9) break;

        VAR_10 += VAR_11;
        ++VAR_13;
    }



    VAR_6 = FUNC_3(&VAR_3->entries, sizeof(KXLDVTableEntry), VAR_13);
    FUNC_6(VAR_6, VAR_2);



    for (VAR_14 = 0, VAR_10 = VAR_12;
         VAR_14 < VAR_3->entries.nitems;
         ++VAR_14, VAR_10 += VAR_11)
    {
        VAR_9 = FUNC_5(VAR_4,
            VAR_3->vtable, VAR_10);





        VAR_7 = FUNC_2(&VAR_3->entries, VAR_14);
        VAR_8 = FUNC_4(VAR_5, &VAR_9);

        if (VAR_8) {
            VAR_7->patched.name = VAR_8->name;
            VAR_7->patched.addr = VAR_8->link_addr;
        } else {
            VAR_7->patched.name = ((void*)0);
            VAR_7->patched.addr = 0;
        }
    }

    VAR_6 = VAR_1;
finish:
    return VAR_6;
}
