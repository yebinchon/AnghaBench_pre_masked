
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;

void FUNC_2(struct scatterlist *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++)
  if (VAR_0)
   FUNC_0((unsigned long) FUNC_1(VAR_0));
  else
   break;
}
