
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_ep {scalar_t__ dir_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa_ep*,int ) ;

__attribute__((used)) static int FUNC_1(struct pxa_ep *VAR_2)
{
 if (VAR_2->dir_in)
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_1) & 0x3ff;
}
