
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsab_port {size_t type; } ;
struct uart_port {int dummy; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_1)
{
 struct uart_sunsab_port *VAR_2 = (void *)VAR_1;
 static char VAR_3[36];

 FUNC_0(VAR_3, "SAB82532 %s", VAR_0[VAR_2->type]);
 return VAR_3;
}
