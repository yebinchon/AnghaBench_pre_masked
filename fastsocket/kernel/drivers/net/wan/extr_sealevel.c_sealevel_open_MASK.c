
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct slvl_device {int channel; TYPE_1__* chan; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int rx_function; } ;


 struct slvl_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 int FUNC_4 (struct net_device*,TYPE_1__*) ;
 int FUNC_5 (struct net_device*,TYPE_1__*) ;
 int FUNC_6 (struct net_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct slvl_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = -1;
 int VAR_4 = VAR_2->channel;





 switch (VAR_4)
 {
  case 0:
   VAR_3 = FUNC_5(VAR_1, VAR_2->chan);
   break;
  case 1:
   VAR_3 = FUNC_6(VAR_1, VAR_2->chan);
   break;
 }

 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  switch (VAR_4) {
   case 0:
    FUNC_4(VAR_1, VAR_2->chan);
    break;
   case 1:
    FUNC_3(VAR_1, VAR_2->chan);
    break;
  }
  return VAR_3;
 }

 VAR_2->chan->rx_function = VAR_0;




 FUNC_2(VAR_1);
 return 0;
}
