
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_clksrc {char* name; int divisor; } ;
struct s3c2410_uartcfg {int clocks_size; struct s3c24xx_uart_clksrc* clocks; } ;
struct clk {int dummy; } ;
struct baud_calc {unsigned int calc; unsigned int quot; struct clk* src; struct s3c24xx_uart_clksrc* clksrc; } ;


 int VAR_0 ;
 struct s3c2410_uartcfg* FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct baud_calc*,struct uart_port*,struct s3c24xx_uart_clksrc*,unsigned int) ;
 int FUNC_2 (struct uart_port*,struct s3c24xx_uart_clksrc*) ;
 int FUNC_3 (struct uart_port*,struct s3c24xx_uart_clksrc*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 struct s3c24xx_uart_clksrc VAR_1 ;

__attribute__((used)) static unsigned int FUNC_5(struct uart_port *VAR_2,
       struct s3c24xx_uart_clksrc **VAR_3,
       struct clk **VAR_4,
       unsigned int VAR_5)
{
 struct s3c2410_uartcfg *VAR_6 = FUNC_0(VAR_2);
 struct s3c24xx_uart_clksrc *VAR_7;
 struct baud_calc VAR_8[VAR_0];
 struct baud_calc *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_7 = VAR_6->clocks;
 VAR_10 = ((void*)0);

 if (VAR_6->clocks_size < 2) {
  if (VAR_6->clocks_size == 0)
   VAR_7 = &VAR_1;





  if (FUNC_4(VAR_7->name, "fclk") == 0) {
   struct s3c24xx_uart_clksrc VAR_13;

   FUNC_2(VAR_2, &VAR_13);





   if (FUNC_4(VAR_13.name, VAR_7->name) == 0) {
    FUNC_3(VAR_2, VAR_7);
    FUNC_2(VAR_2, &VAR_13);
   }

   VAR_7->divisor = VAR_13.divisor;
  }

  FUNC_1(VAR_8, VAR_2, VAR_7, VAR_5);
  VAR_10 = VAR_8;
  VAR_9 = VAR_10 + 1;
 } else {
  VAR_9 = VAR_8;

  for (VAR_12 = 0; VAR_12 < VAR_6->clocks_size; VAR_12++, VAR_7++) {
   if (FUNC_1(VAR_9, VAR_2, VAR_7, VAR_5))
    VAR_9++;
  }
 }



 if (!VAR_10) {
  unsigned int VAR_14 = (1<<30)|((1<<30)-1);
  int VAR_15;

  for (VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11++) {
   VAR_15 = VAR_5 - VAR_11->calc;
   if (VAR_15 < 0)
    VAR_15 = -VAR_15;

   if (VAR_15 < VAR_14) {
    VAR_10 = VAR_11;
    VAR_14 = VAR_15;
   }
  }
 }



 *VAR_3 = VAR_10->clksrc;
 *VAR_4 = VAR_10->src;

 return VAR_10->quot;
}
