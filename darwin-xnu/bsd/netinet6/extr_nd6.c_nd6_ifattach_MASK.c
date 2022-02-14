
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_ifinfo {int lock; int flags; scalar_t__ initialized; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_9(struct ifnet *VAR_8)
{
 struct nd_ifinfo *VAR_9 = FUNC_0(VAR_8);

 FUNC_1(((void*)0) != VAR_9);
 if (!VAR_9->initialized) {
  FUNC_3(&VAR_9->lock, VAR_7, VAR_6);
  VAR_9->flags = VAR_4;
  VAR_9->flags |= VAR_2;
  VAR_9->initialized = VAR_5;
 }

 FUNC_4(&VAR_9->lock);

 if (!(VAR_8->if_flags & VAR_0)) {
  VAR_9->flags |= VAR_3;
 }

 FUNC_6(VAR_8);
 FUNC_5(&VAR_9->lock);
 FUNC_7(VAR_8);

 FUNC_8((VAR_1, ": ",
     "%s Reinit'd ND information for interface %s\n",
     FUNC_2(VAR_8)));
 return;
}
