
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_pmac_port {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_2 (struct uart_pmac_port*) ;
 unsigned char FUNC_3 (struct uart_pmac_port*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct uart_pmac_port*,size_t,int) ;
 int FUNC_6 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_pmac_port *VAR_24, u8 *VAR_25)
{
 int VAR_26;

 if (FUNC_2(VAR_24))
  return;


 for (VAR_26 = 0; VAR_26 < 1000; VAR_26++) {
  unsigned char VAR_27 = FUNC_3(VAR_24, VAR_5);
  if (VAR_27 & VAR_0)
   break;
  FUNC_4(100);
 }

 FUNC_0(VAR_24);
 FUNC_6(VAR_24);
 FUNC_1(VAR_24);
 FUNC_6(VAR_24);
 FUNC_0(VAR_24);


 FUNC_5(VAR_24, VAR_5,
      VAR_25[VAR_5] & ~(VAR_21 | VAR_23 | VAR_3));


 FUNC_5(VAR_24, VAR_13, VAR_25[VAR_13]);


 FUNC_5(VAR_24, VAR_6, VAR_25[VAR_6]);


        FUNC_5(VAR_24, VAR_12, VAR_25[VAR_12] & ~VAR_20);
        FUNC_5(VAR_24, VAR_14, VAR_25[VAR_14] & ~VAR_22);


 FUNC_5(VAR_24, VAR_11, VAR_25[VAR_11] | VAR_2);
 FUNC_5(VAR_24, VAR_16, VAR_25[VAR_17]);


 FUNC_5(VAR_24, VAR_11, VAR_25[VAR_11] & ~VAR_2);


 FUNC_5(VAR_24, VAR_15, VAR_25[VAR_15]);
 FUNC_5(VAR_24, VAR_16, VAR_25[VAR_16]);


 FUNC_5(VAR_24, VAR_10, VAR_25[VAR_10] & ~VAR_1);


 FUNC_5(VAR_24, VAR_7, VAR_25[VAR_7]);


 FUNC_5(VAR_24, VAR_8, VAR_25[VAR_8]);
 FUNC_5(VAR_24, VAR_9, VAR_25[VAR_9]);


 FUNC_5(VAR_24, VAR_10, VAR_25[VAR_10]);


 FUNC_5(VAR_24, VAR_4, VAR_19);
 FUNC_5(VAR_24, VAR_4, VAR_19);


 FUNC_5(VAR_24, VAR_12, VAR_25[VAR_12]);
 FUNC_5(VAR_24, VAR_14, VAR_25[VAR_14]);


 FUNC_5(VAR_24, VAR_5, VAR_25[VAR_5]);


 FUNC_5(VAR_24, VAR_18, VAR_25[VAR_18]);
}
