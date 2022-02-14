
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int type; } ;
struct TYPE_3__ {char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(struct uart_port *VAR_1)
{
 int VAR_2 = VAR_1->type;

 if (VAR_2 >= FUNC_0(VAR_0))
  VAR_2 = 0;
 return VAR_0[VAR_2].name;
}
