
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;
struct s3c2410_uartcfg {unsigned long ucon; unsigned long ulcon; unsigned long ufcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (char*,struct uart_port*,int ,struct s3c2410_uartcfg*) ;
 unsigned long FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_5,
        struct s3c2410_uartcfg *VAR_6)
{
 unsigned long VAR_7 = FUNC_1(VAR_5, VAR_0);

 FUNC_0("s3c6400_serial_resetport: port=%p (%08lx), cfg=%p\n",
     VAR_5, VAR_5->mapbase, VAR_6);



 VAR_7 &= VAR_4;

 FUNC_2(VAR_5, VAR_0, VAR_7 | VAR_6->ucon);
 FUNC_2(VAR_5, VAR_3, VAR_6->ulcon);



 FUNC_2(VAR_5, VAR_1, VAR_6->ufcon | VAR_2);
 FUNC_2(VAR_5, VAR_1, VAR_6->ufcon);

 return 0;
}
