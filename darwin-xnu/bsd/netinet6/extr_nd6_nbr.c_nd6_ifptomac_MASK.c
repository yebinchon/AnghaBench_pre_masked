
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_type; } ;
typedef int * caddr_t ;
 int FUNC_0 (struct ifnet*) ;

caddr_t
FUNC_1(
 struct ifnet *VAR_0)
{
 switch (VAR_0->if_type) {
 case 137:
 case 134:
 case 130:
 case 133:
 case 132:

 case 128:


 case 131:


 case 135:

 case 136:
 case 129:
  return ((caddr_t)FUNC_0(VAR_0));
 default:
  return ((void*)0);
 }
}
