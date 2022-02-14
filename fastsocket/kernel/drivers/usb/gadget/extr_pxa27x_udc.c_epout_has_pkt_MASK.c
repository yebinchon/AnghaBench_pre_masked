
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_ep {scalar_t__ dir_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pxa_ep*) ;
 int FUNC_1 (struct pxa_ep*,int ) ;

__attribute__((used)) static int FUNC_2(struct pxa_ep *VAR_4)
{
 if (!FUNC_0(VAR_4) && VAR_4->dir_in)
  return -VAR_0;
 if (FUNC_0(VAR_4))
  return (FUNC_1(VAR_4, VAR_1) & VAR_2);
 return (FUNC_1(VAR_4, VAR_1) & VAR_3);
}
