
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct s3c24xx_uart_port {TYPE_1__* info; } ;
struct s3c24xx_uart_clksrc {unsigned long divisor; int name; } ;
struct baud_calc {unsigned long quot; unsigned long calc; struct s3c24xx_uart_clksrc* clksrc; int * src; } ;
struct TYPE_2__ {scalar_t__ has_divslot; } ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 unsigned long FUNC_2 (int *) ;
 struct s3c24xx_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct baud_calc *VAR_0,
       struct uart_port *VAR_1,
       struct s3c24xx_uart_clksrc *VAR_2,
       unsigned int VAR_3)
{
 struct s3c24xx_uart_port *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5;

 VAR_0->src = FUNC_1(VAR_1->dev, VAR_2->name);
 if (VAR_0->src == ((void*)0) || FUNC_0(VAR_0->src))
  return 0;

 VAR_5 = FUNC_2(VAR_0->src);
 VAR_5 /= VAR_2->divisor;

 VAR_0->clksrc = VAR_2;

 if (VAR_4->info->has_divslot) {
  unsigned long VAR_6 = VAR_5 / VAR_3;
  VAR_0->quot = VAR_6 / 16;
  VAR_0->calc = VAR_5 / VAR_6;
 } else {
  VAR_0->quot = (VAR_5 + (8 * VAR_3)) / (16 * VAR_3);
  VAR_0->calc = (VAR_5 / (VAR_0->quot * 16));
 }

 VAR_0->quot--;
 return 1;
}
