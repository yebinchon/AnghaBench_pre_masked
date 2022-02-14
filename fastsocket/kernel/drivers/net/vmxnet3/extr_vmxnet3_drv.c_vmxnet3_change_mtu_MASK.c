
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int state; int jumbo_frame; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct vmxnet3_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct vmxnet3_adapter*) ;
 int FUNC_7 (struct vmxnet3_adapter*) ;
 int FUNC_8 (struct vmxnet3_adapter*) ;
 int FUNC_9 (struct vmxnet3_adapter*) ;
 int FUNC_10 (struct vmxnet3_adapter*) ;
 int FUNC_11 (struct vmxnet3_adapter*) ;
 int FUNC_12 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_4, int VAR_5)
{
 struct vmxnet3_adapter *VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
  return -VAR_0;

 if (VAR_5 > 1500 && !VAR_6->jumbo_frame)
  return -VAR_0;

 VAR_4->mtu = VAR_5;





 while (FUNC_5(VAR_3, &VAR_6->state))
  FUNC_1(1);

 if (FUNC_4(VAR_4)) {
  FUNC_9(VAR_6);
  FUNC_10(VAR_6);


  FUNC_12(VAR_6);
  FUNC_7(VAR_6);
  VAR_7 = FUNC_11(VAR_6);
  if (VAR_7) {
   FUNC_2(VAR_4,
       "failed to re-create rx queues, "
       " error %d. Closing it.\n", VAR_7);
   goto out;
  }

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7) {
   FUNC_2(VAR_4,
       "failed to re-activate, error %d. "
       "Closing it\n", VAR_7);
   goto out;
  }
 }

out:
 FUNC_0(VAR_3, &VAR_6->state);
 if (VAR_7)
  FUNC_8(VAR_6);

 return VAR_7;
}
