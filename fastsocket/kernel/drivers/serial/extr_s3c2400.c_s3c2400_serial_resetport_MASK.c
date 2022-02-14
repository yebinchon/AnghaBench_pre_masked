
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;
struct s3c2410_uartcfg {int ucon; int ulcon; int ufcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct uart_port*,int ,struct s3c2410_uartcfg*) ;
 int FUNC_1 (struct uart_port*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_4,
        struct s3c2410_uartcfg *VAR_5)
{
 FUNC_0("s3c2400_serial_resetport: port=%p (%08lx), cfg=%p\n",
     VAR_4, VAR_4->mapbase, VAR_5);

 FUNC_1(VAR_4, VAR_0, VAR_5->ucon);
 FUNC_1(VAR_4, VAR_3, VAR_5->ulcon);



 FUNC_1(VAR_4, VAR_1, VAR_5->ufcon | VAR_2);
 FUNC_1(VAR_4, VAR_1, VAR_5->ufcon);

 return 0;
}
