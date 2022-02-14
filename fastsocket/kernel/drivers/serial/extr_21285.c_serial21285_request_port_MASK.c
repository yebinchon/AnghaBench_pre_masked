
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_2)
{
 return FUNC_0(VAR_2->mapbase, 32, VAR_1)
    != ((void*)0) ? 0 : -VAR_0;
}
