
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_clksrc {int divisor; char* name; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct uart_port*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_9,
        struct s3c24xx_uart_clksrc *VAR_10)
{
 unsigned long VAR_11 = FUNC_2(VAR_9, VAR_0);
 unsigned long VAR_12, VAR_13, VAR_14;

 switch (VAR_11 & VAR_4) {
 case 128:
  VAR_10->divisor = 1;
  VAR_10->name = "uclk";
  break;

 case 130:
 case 129:
  VAR_10->divisor = 1;
  VAR_10->name = "pclk";
  break;

 case 131:



  VAR_12 = FUNC_0(VAR_6 + VAR_0);
  VAR_13 = FUNC_0(VAR_7 + VAR_0);
  VAR_14 = FUNC_0(VAR_8 + VAR_0);

  FUNC_1("ucons: %08lx, %08lx, %08lx\n", VAR_12, VAR_13, VAR_14);

  VAR_12 &= VAR_1;
  VAR_13 &= VAR_2;
  VAR_14 &= VAR_3;

  if (VAR_12 != 0) {
   VAR_10->divisor = VAR_12 >> VAR_5;
   VAR_10->divisor += 6;
  } else if (VAR_13 != 0) {
   VAR_10->divisor = VAR_13 >> VAR_5;
   VAR_10->divisor += 21;
  } else if (VAR_14 != 0) {
   VAR_10->divisor = VAR_14 >> VAR_5;
   VAR_10->divisor += 36;
  } else {

   VAR_10->divisor = 9;
  }

  VAR_10->name = "fclk";
  break;
 }

 return 0;
}
