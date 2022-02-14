
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int lmc_intrmask; int lmc_busmode; int lmc_cmdmode; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 void* FUNC_0 (TYPE_1__* const,int ) ;
 int FUNC_1 (TYPE_1__* const,int ,int) ;
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
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(lmc_softc_t * const VAR_18)
{
    u32 VAR_19;
    FUNC_2(VAR_18->lmc_device, "lmc_dec_reset in");




    VAR_18->lmc_intrmask = 0;
    FUNC_1(VAR_18, VAR_16, VAR_18->lmc_intrmask);







    FUNC_1(VAR_18, VAR_14, VAR_0);
    FUNC_3(25);






    VAR_18->lmc_cmdmode = FUNC_0(VAR_18, VAR_15);
    VAR_18->lmc_cmdmode |= ( VAR_7
                         | VAR_1
                         | VAR_5
                         | VAR_3
                         | VAR_6
                         | VAR_8
                         | VAR_2
                       );
    VAR_18->lmc_cmdmode &= ~( VAR_4
                          | VAR_10
                          | VAR_9
                          | VAR_11
                        );

    FUNC_1(VAR_18, VAR_15, VAR_18->lmc_cmdmode);




    VAR_19 = FUNC_0(VAR_18, VAR_17);
    VAR_19 |= (VAR_13 | VAR_12);
    FUNC_1(VAR_18, VAR_17, VAR_19);

    FUNC_2(VAR_18->lmc_device, "lmc_dec_reset out");
}
