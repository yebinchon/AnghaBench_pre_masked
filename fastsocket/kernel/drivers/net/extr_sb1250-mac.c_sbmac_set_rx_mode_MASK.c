
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_devflags; int sbm_lock; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 struct sbmac_softc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sbmac_softc*,int) ;
 int FUNC_2 (struct sbmac_softc*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 struct sbmac_softc *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(&VAR_3->sbm_lock, VAR_2);
 if ((VAR_1->flags ^ VAR_3->sbm_devflags) & VAR_0) {




  if (VAR_1->flags & VAR_0) {
   FUNC_1(VAR_3,1);
  }
  else {
   FUNC_1(VAR_3,0);
  }
 }
 FUNC_4(&VAR_3->sbm_lock, VAR_2);





 FUNC_2(VAR_3);

}
