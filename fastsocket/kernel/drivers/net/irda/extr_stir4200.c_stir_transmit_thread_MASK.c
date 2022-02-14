
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stir_cb {unsigned int speed; scalar_t__ receiving; struct net_device* netdev; int tx_pending; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct stir_cb*,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct stir_cb*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct stir_cb*) ;
 int FUNC_12 (struct stir_cb*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct stir_cb*,struct sk_buff*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct stir_cb*,int ,int) ;
 struct sk_buff* FUNC_19 (int *,int *) ;

__attribute__((used)) static int FUNC_20(void *VAR_5)
{
 struct stir_cb *VAR_6 = VAR_5;
 struct net_device *VAR_7 = VAR_6->netdev;
 struct sk_buff *VAR_8;

        while (!FUNC_7()) {
  VAR_8 = FUNC_19(&VAR_6->tx_pending, ((void*)0));
  if (VAR_8) {
   unsigned VAR_9 = FUNC_6(VAR_8);
   FUNC_10(VAR_7);

   if (VAR_8->len > 0)
    FUNC_16(VAR_6, VAR_8);
   FUNC_2(VAR_8);

   if ((VAR_9 != -1) && (VAR_6->speed != VAR_9)) {
    if (FUNC_3(VAR_6, -1) ||
        FUNC_0(VAR_6, VAR_9))
     break;
   }
   continue;
  }


  if (!VAR_6->receiving
      && FUNC_5(VAR_7)) {

   if (FUNC_3(VAR_6, -1))
    break;

   if (FUNC_17(FUNC_11(VAR_6))) {
    if (FUNC_9())
     FUNC_1(&VAR_7->dev,
       "%s: receive usb submit failed\n",
       VAR_6->netdev->name);
    VAR_6->receiving = 0;
    FUNC_8(10);
    continue;
   }
  }


                FUNC_15(VAR_3);
                FUNC_14();

 }
        return 0;
}
