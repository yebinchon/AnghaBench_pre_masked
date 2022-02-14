
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int nr; scalar_t__* line; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct serial_private *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  if (VAR_0->line[VAR_1] >= 0)
   FUNC_0(VAR_0->line[VAR_1]);
}
