
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cnic_ops {int dummy; } ;
struct cnic_eth_dev {int iro_arr; int drv_state; scalar_t__ num_irq; } ;
struct bnx2x {int cnic_enabled; int cnic_ops; int iro_arr; void* cnic_data; scalar_t__ cnic_kwq_pending; scalar_t__ cnic_spq_pending; scalar_t__ cnic_kwq; scalar_t__ cnic_kwq_last; scalar_t__ cnic_kwq_prod; scalar_t__ cnic_kwq_cons; struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 struct bnx2x* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,struct cnic_ops*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8, struct cnic_ops *VAR_9,
          void *VAR_10)
{
 struct bnx2x *VAR_11 = FUNC_7(VAR_8);
 struct cnic_eth_dev *VAR_12 = &VAR_11->cnic_eth_dev;
 int VAR_13;

 FUNC_3(VAR_6, "Register_cnic called\n");

 if (VAR_9 == ((void*)0)) {
  FUNC_0("NULL ops received\n");
  return -VAR_1;
 }

 if (!FUNC_2(VAR_11)) {
  FUNC_0("Can't register CNIC when not supported\n");
  return -VAR_3;
 }

 if (!FUNC_1(VAR_11)) {
  VAR_13 = FUNC_4(VAR_11);
  if (VAR_13) {
   FUNC_0("CNIC-related load failed\n");
   return VAR_13;
  }
 }

 VAR_11->cnic_enabled = 1;

 VAR_11->cnic_kwq = FUNC_6(VAR_7, VAR_4);
 if (!VAR_11->cnic_kwq)
  return -VAR_2;

 VAR_11->cnic_kwq_cons = VAR_11->cnic_kwq;
 VAR_11->cnic_kwq_prod = VAR_11->cnic_kwq;
 VAR_11->cnic_kwq_last = VAR_11->cnic_kwq + VAR_5;

 VAR_11->cnic_spq_pending = 0;
 VAR_11->cnic_kwq_pending = 0;

 VAR_11->cnic_data = VAR_10;

 VAR_12->num_irq = 0;
 VAR_12->drv_state |= VAR_0;
 VAR_12->iro_arr = VAR_11->iro_arr;

 FUNC_5(VAR_11);

 FUNC_8(VAR_11->cnic_ops, VAR_9);

 return 0;
}
