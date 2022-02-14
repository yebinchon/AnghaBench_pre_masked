
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int PRINA; int PRINB; int PRIR; int TVMD; } ;
struct TYPE_3__ {scalar_t__* priosused; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_12(void)
{
   int VAR_7;

   FUNC_5(VAR_0->TVMD);
   FUNC_0(VAR_0->PRINA & 0x7);
   FUNC_1((VAR_0->PRINA >> 8) & 0x7);
   FUNC_2(VAR_0->PRINB & 0x7);
   FUNC_3((VAR_0->PRINB >> 8) & 0x7);
   FUNC_4(VAR_0->PRIR & 0x7);


    for(VAR_7 = 1; VAR_7 < 8; ++VAR_7)
    {
        if (VAR_4 == VAR_7)
            FUNC_10();
        if (VAR_3 == VAR_7)
            FUNC_9();
        if (VAR_2 == VAR_7)
            FUNC_8();
        if (VAR_1 == VAR_7)
            FUNC_7();
        if (VAR_5 == VAR_7)
            FUNC_11();


        if(VAR_6.priosused[VAR_7])
            FUNC_6(VAR_7);
        VAR_6.priosused[VAR_7] = 0;
    }
}
