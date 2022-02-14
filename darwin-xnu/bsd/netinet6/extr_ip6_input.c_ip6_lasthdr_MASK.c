
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*,int,int,int*) ;

int
FUNC_1(struct mbuf *VAR_0, int VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (!VAR_3) {
  VAR_5 = -1;
  VAR_3 = &VAR_5;
 }
 while (1) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return (VAR_1);
  else if (VAR_4 < VAR_1)
   return (-1);
  else if (VAR_4 == VAR_1)
   return (VAR_4);

  VAR_1 = VAR_4;
  VAR_2 = *VAR_3;
 }
}
