
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* dev; } ;
struct s3c2410_uartcfg {int dummy; } ;
struct TYPE_2__ {scalar_t__ platform_data; } ;



__attribute__((used)) static inline struct s3c2410_uartcfg *FUNC_0(struct uart_port *VAR_0)
{
 if (VAR_0->dev == ((void*)0))
  return ((void*)0);

 return (struct s3c2410_uartcfg *)VAR_0->dev->platform_data;
}
