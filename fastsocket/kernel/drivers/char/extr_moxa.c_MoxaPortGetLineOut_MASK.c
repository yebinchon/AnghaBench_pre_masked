
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxa_port {int lineCtrl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct moxa_port *VAR_2, int *VAR_3,
  int *VAR_4)
{
 if (VAR_3)
  *VAR_3 = !!(VAR_2->lineCtrl & VAR_0);
 if (VAR_4)
  *VAR_4 = !!(VAR_2->lineCtrl & VAR_1);

 return 0;
}
