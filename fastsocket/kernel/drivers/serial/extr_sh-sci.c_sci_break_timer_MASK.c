
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port {int break_flag; int port; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sci_port*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct sci_port *VAR_1 = (struct sci_port *)VAR_0;

 if (FUNC_0(&VAR_1->port) == 0) {
  VAR_1->break_flag = 1;
  FUNC_1(VAR_1);
 } else if (VAR_1->break_flag == 1) {

  VAR_1->break_flag = 2;
  FUNC_1(VAR_1);
 } else
  VAR_1->break_flag = 0;
}
