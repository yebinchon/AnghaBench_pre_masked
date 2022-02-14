
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_25__ {scalar_t__ address; } ;
struct TYPE_21__ {scalar_t__ nitems; } ;
struct TYPE_24__ {int data; TYPE_13__ entries; TYPE_13__ relocs; int is_32_bit; } ;
struct TYPE_22__ {TYPE_7__* reloc; TYPE_3__* sym; } ;
struct TYPE_23__ {TYPE_1__ unpatched; } ;
typedef TYPE_2__ KXLDVTableEntry ;
typedef TYPE_3__ const KXLDVTable ;
typedef TYPE_3__ KXLDSym ;
typedef TYPE_3__ KXLDSect ;
typedef TYPE_3__ KXLDRelocator ;
typedef TYPE_7__ KXLDReloc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 void* FUNC_2 (TYPE_13__*,scalar_t__) ;
 int FUNC_3 (TYPE_13__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_13__*,scalar_t__,scalar_t__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__ const*,TYPE_7__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_8(KXLDVTable *VAR_3, const KXLDSym *VAR_4,
    const KXLDSect *VAR_5, const KXLDRelocator *VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    KXLDReloc *VAR_8 = ((void*)0);
    KXLDVTableEntry *VAR_9 = ((void*)0);
    KXLDSym *VAR_10 = ((void*)0);
    kxld_addr_t VAR_11 = 0;
    kxld_addr_t VAR_12 = 0;
    u_int VAR_13 = 0;
    u_int VAR_14 = 0;
    u_int VAR_15 = 0;
    u_int VAR_16 = 0;
    u_int VAR_17 = 0;
    u_int VAR_18 = 0;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);



    (void) FUNC_1(VAR_6->is_32_bit,
        &VAR_15, &VAR_16);

    VAR_11 = FUNC_6(VAR_4, VAR_5) +
        VAR_16;



    VAR_7 = FUNC_4(&VAR_5->relocs,
        VAR_11, &VAR_17);
    FUNC_7(VAR_7, VAR_2);







    VAR_18 = VAR_17;
    VAR_12 = VAR_11;
    VAR_8 = FUNC_2(&VAR_5->relocs, VAR_18);
    while (VAR_8->address == VAR_12) {
        ++VAR_14;
        if (!VAR_18) break;

        --VAR_18;

        VAR_8 = FUNC_2(&VAR_5->relocs, VAR_18);
        VAR_12 += VAR_15;
    }



    VAR_7 = FUNC_3(&VAR_3->entries, sizeof(KXLDVTableEntry), VAR_14);
    FUNC_7(VAR_7, VAR_2);



    for (VAR_13 = 0; VAR_13 < VAR_3->entries.nitems; ++VAR_13) {
        VAR_8 = FUNC_2(&VAR_5->relocs, VAR_17 - VAR_13);
        VAR_9 = FUNC_2(&VAR_3->entries, VAR_13);







        VAR_10 = FUNC_5(VAR_6, VAR_8, VAR_5->data);

        VAR_9->unpatched.sym = VAR_10;
        VAR_9->unpatched.reloc = VAR_8;
    }

    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
