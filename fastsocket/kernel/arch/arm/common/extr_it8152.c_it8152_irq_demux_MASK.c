
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(unsigned int VAR_6, struct irq_desc *VAR_7)
{
       int VAR_8, VAR_9, VAR_10;
       int VAR_11;

       while (1) {

        VAR_8 = FUNC_4(VAR_2);
        VAR_9 = FUNC_4(VAR_1);
        VAR_10 = FUNC_4(VAR_0);


        FUNC_5((~VAR_8), VAR_2);
        FUNC_5((~VAR_9), VAR_1);
        FUNC_5((~VAR_10), VAR_0);

        if (!(VAR_10 | VAR_9 | VAR_8)) {


         VAR_8 = FUNC_4(VAR_2);
         VAR_9 = FUNC_4(VAR_1);
         VAR_10 = FUNC_4(VAR_0);
         if (!(VAR_10 | VAR_9 | VAR_8))
          return;
        }

        VAR_8 &= ((1 << VAR_5) - 1);
        while (VAR_8) {
         VAR_11 = FUNC_3(VAR_8);
         FUNC_6(FUNC_2(VAR_11));
         VAR_8 &= ~(1 << VAR_11);
        }

        VAR_9 &= ((1 << VAR_4) - 1);
        while (VAR_9) {
         VAR_11 = FUNC_3(VAR_9);
         FUNC_6(FUNC_1(VAR_11));
         VAR_9 &= ~(1 << VAR_11);
        }

        VAR_10 &= ((1 << VAR_3) - 1);
        while (VAR_10) {
         VAR_11 = FUNC_3(VAR_10);
         FUNC_6(FUNC_0(VAR_11));
         VAR_10 &= ~(1 << VAR_11);
        }
       }
}
