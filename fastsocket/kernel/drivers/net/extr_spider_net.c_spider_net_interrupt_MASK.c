
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int napi; int num_rx_ints; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 struct spider_net_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct spider_net_card*,int,int,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct spider_net_card*,int ) ;
 int FUNC_5 (struct spider_net_card*) ;
 int FUNC_6 (struct spider_net_card*,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_12, void *VAR_13)
{
 struct net_device *VAR_14 = VAR_13;
 struct spider_net_card *VAR_15 = FUNC_1(VAR_14);
 u32 VAR_16, VAR_17, VAR_18;

 VAR_16 = FUNC_4(VAR_15, VAR_3);
 VAR_17 = FUNC_4(VAR_15, VAR_4);
 VAR_18 = FUNC_4(VAR_15, VAR_5);

 if (!(VAR_16 & VAR_6) &&
     !(VAR_17 & VAR_7) &&
     !(VAR_18 & VAR_8))
  return VAR_1;

 if (VAR_16 & VAR_10 ) {
  FUNC_5(VAR_15);
  FUNC_0(&VAR_15->napi);
  VAR_15->num_rx_ints ++;
 }
 if (VAR_16 & VAR_11)
  FUNC_0(&VAR_15->napi);

 if (VAR_16 & VAR_9)
  FUNC_3(VAR_14);

 if (VAR_16 & VAR_2 )
  FUNC_2(VAR_15, VAR_16,
         VAR_17, VAR_18);


 FUNC_6(VAR_15, VAR_3, VAR_16);

 return VAR_0;
}
