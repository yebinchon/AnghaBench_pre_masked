
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_amcount; int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int ,int ,int *) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

int
FUNC_4(struct ifnet *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_2(VAR_2);

 if (VAR_3) {
  if (VAR_2->if_amcount++ == 0) {
   VAR_2->if_flags |= VAR_0;
   VAR_5 = 1;
  }
 } else {
  if (VAR_2->if_amcount > 1) {
   VAR_2->if_amcount--;
  } else {
   VAR_2->if_amcount = 0;
   VAR_2->if_flags &= ~VAR_0;
   VAR_5 = 1;
  }
 }
 FUNC_1(VAR_2);

 if (VAR_5)
  VAR_4 = FUNC_0(VAR_2, 0, VAR_1, ((void*)0));

 if (VAR_4 == 0)
  FUNC_3(VAR_2);
 return (VAR_4);
}
