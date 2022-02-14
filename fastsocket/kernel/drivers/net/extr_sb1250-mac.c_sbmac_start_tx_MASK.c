
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sbmac_softc {int sbm_lock; int sbm_txdma; } ;
struct net_device {int trans_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sbmac_softc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct sbmac_softc *VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6;


 FUNC_3(&VAR_5->sbm_lock, VAR_6);






 if (FUNC_2(&(VAR_5->sbm_txdma),VAR_3)) {

  FUNC_1(VAR_4);
  FUNC_4(&VAR_5->sbm_lock, VAR_6);

  return VAR_0;
 }

 VAR_4->trans_start = VAR_2;

 FUNC_4(&VAR_5->sbm_lock, VAR_6);

 return VAR_1;
}
