
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int stateflags; int ifp; int rtaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nd_defrouter*) ;
 int FUNC_1 (int *,struct nd_defrouter*,int ) ;
 struct nd_defrouter* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct nd_defrouter*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_6(struct nd_defrouter *VAR_5)
{
 struct nd_defrouter *VAR_6;

 FUNC_4(VAR_3);
 VAR_6 = FUNC_2(&VAR_5->rtaddr, VAR_5->ifp);
 if (VAR_6 == ((void*)0) || !(VAR_6->stateflags & VAR_1)) {
  if (VAR_6 != ((void*)0))
   FUNC_0(VAR_6);
  VAR_6 = ((void*)0);
 } else {
  FUNC_1(&VAR_4, VAR_6, VAR_2);
  FUNC_3(VAR_6);
  FUNC_0(VAR_6);
  FUNC_0(VAR_6);
 }
 FUNC_5(VAR_3);

 return (VAR_6 != ((void*)0) ? 0 : VAR_0);
}
