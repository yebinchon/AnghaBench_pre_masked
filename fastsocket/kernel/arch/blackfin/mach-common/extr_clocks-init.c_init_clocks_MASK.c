
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_register {scalar_t__ cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 struct dma_register** VAR_13 ;
 int FUNC_19 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((l1_text))
void FUNC_20(void)
{




 size_t VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_6; ++VAR_19) {
  struct dma_register *VAR_20 = VAR_13[VAR_19];
  VAR_20->cfg = 0;
 }

 FUNC_19();
 FUNC_15(FUNC_0(0));

 FUNC_19();
 FUNC_14(0x300);
 FUNC_19();

 FUNC_5(VAR_7, VAR_8);
 __asm__ __volatile__("IDLE;");
 FUNC_13(VAR_2 | VAR_4);




 FUNC_10(FUNC_2() & ~(VAR_11));
 FUNC_19();
 FUNC_10(FUNC_2() | 0x1);
 FUNC_6(VAR_14);
 FUNC_7(VAR_15);
 FUNC_8(VAR_16);




 FUNC_19();
 FUNC_1(0);
}
