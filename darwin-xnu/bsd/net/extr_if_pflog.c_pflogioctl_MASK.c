
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_2(struct ifnet *VAR_3, unsigned long VAR_4, void *VAR_5)
{
#pragma unused(data)
 switch (VAR_4) {
 case 130:
 case 131:
 case 129:
 case 128:
  if (FUNC_0(VAR_3) & VAR_2)
   FUNC_1(VAR_3, VAR_1, VAR_1);
  else
   FUNC_1(VAR_3, 0, VAR_1);
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
