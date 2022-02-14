
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int * inp_label; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;

int
FUNC_1(struct inpcb *VAR_1, int VAR_2)
{

 VAR_1->inp_label = FUNC_0(VAR_2);
 if (VAR_1->inp_label == ((void*)0))
  return (VAR_0);
 return (0);
}
