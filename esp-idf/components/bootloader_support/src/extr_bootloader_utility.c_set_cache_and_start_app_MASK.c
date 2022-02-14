
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void (* entry_t ) () ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*,int,...) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int VAR_28 ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int ,int,int,int,int) ;
 void FUNC_14 () ;

__attribute__((used)) static void FUNC_15(
    uint32_t VAR_29,
    uint32_t VAR_30,
    uint32_t VAR_31,
    uint32_t VAR_32,
    uint32_t VAR_33,
    uint32_t VAR_34,
    uint32_t VAR_35)
{
    int VAR_36;
    FUNC_8(VAR_28, "configure drom and irom and start");
    for (int VAR_37 = 0; VAR_37 < VAR_8; VAR_37++) {
        VAR_18[VAR_37] = VAR_7;
    }

    uint32_t VAR_38 = VAR_30 & VAR_27;
    uint32_t VAR_39 = FUNC_12(VAR_31, VAR_30);
    FUNC_9(VAR_28, "d mmu set paddr=%08x vaddr=%08x size=%d n=%d",
             VAR_29 & VAR_27, VAR_38, VAR_31, VAR_39);






    FUNC_9(VAR_28, "rc=%d", VAR_36);




    uint32_t VAR_40 = VAR_33 & VAR_27;
    uint32_t VAR_41 = FUNC_12(VAR_34, VAR_33);
    FUNC_9(VAR_28, "i mmu set paddr=%08x vaddr=%08x size=%d n=%d",
             VAR_32 & VAR_27, VAR_40, VAR_34, VAR_41);
    FUNC_9(VAR_28, "rc=%d", VAR_36);
    FUNC_8(VAR_28, "start: 0x%08x", VAR_35);
    typedef void (*entry_t)(void) __attribute__((noreturn));
    entry_t VAR_42 = ((entry_t) VAR_35);



    (*VAR_42)();
}
