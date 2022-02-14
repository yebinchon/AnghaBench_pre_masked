
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int rtlifetime; int stateflags; int err; int ifp; int rtaddr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nd_defrouter*) ;
 int VAR_3 ;
 struct nd_defrouter* FUNC_1 (int *,int ) ;
 struct nd_defrouter* FUNC_2 (struct nd_defrouter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

int
FUNC_5(struct nd_defrouter *VAR_5)
{
 struct nd_defrouter *VAR_6;
 int VAR_7 = 0;

 VAR_5->rtlifetime = -1;
 VAR_5->stateflags |= VAR_2;


 VAR_5->flags &= VAR_3;

 FUNC_3(VAR_4);
 VAR_6 = FUNC_1(&VAR_5->rtaddr, VAR_5->ifp);
 if (VAR_6 != ((void*)0) && !(VAR_6->stateflags & VAR_2)) {
  VAR_7 = VAR_0;
 } else {
  if (VAR_6 != ((void*)0))
   FUNC_0(VAR_6);
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 != ((void*)0))
   VAR_7 = VAR_6->err;
  else
   VAR_7 = VAR_1;
 }
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_6);
 FUNC_4(VAR_4);

 return (VAR_7);
}
