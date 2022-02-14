
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct gif_softc* if_softc; } ;
struct gif_softc {int gif_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct gif_softc*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2)
{
 struct gif_softc *VAR_3 = VAR_2->if_softc;
 FUNC_2(&VAR_3->gif_lock, VAR_1);
 FUNC_0(&VAR_0, VAR_3);
 VAR_2->if_softc = ((void*)0);
 (void) FUNC_1(VAR_2);
}
