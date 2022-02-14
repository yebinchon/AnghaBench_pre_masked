
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; int list; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cnic_dev*) ;
 struct cnic_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_device**) ;
 int FUNC_3 (struct cnic_dev*) ;
 int FUNC_4 (struct cnic_dev*) ;
 int FUNC_5 (struct cnic_local*,unsigned long,int ) ;
 scalar_t__ FUNC_6 (struct cnic_dev*) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 (struct cnic_dev*) ;
 int FUNC_9 (struct cnic_dev*) ;
 int FUNC_10 (struct cnic_dev*) ;
 int FUNC_11 (struct cnic_dev*) ;
 int FUNC_12 (struct cnic_dev*) ;
 int FUNC_13 (struct cnic_dev*) ;
 struct cnic_dev* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct notifier_block *VAR_7, unsigned long VAR_8,
        void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct cnic_dev *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_1(VAR_10);

 if (!VAR_11 && (VAR_8 == VAR_1 || FUNC_16(VAR_10))) {

  VAR_11 = FUNC_14(VAR_10);
  if (VAR_11) {
   VAR_12 = 1;
   FUNC_3(VAR_11);
  }
 }
 if (VAR_11) {
  struct cnic_local *VAR_13 = VAR_11->cnic_priv;

  if (VAR_12)
   FUNC_10(VAR_11);
  else if (VAR_8 == VAR_2)
   FUNC_9(VAR_11);

  if (VAR_8 == VAR_3 || (VAR_12 && FUNC_16(VAR_10))) {
   if (FUNC_6(VAR_11) != 0) {
    FUNC_4(VAR_11);
    goto done;
   }
   if (!FUNC_7(VAR_11))
    FUNC_11(VAR_11);
  }

  FUNC_5(VAR_13, VAR_8, 0);

  if (VAR_8 == VAR_0) {
   FUNC_12(VAR_11);
   FUNC_8(VAR_11);
   FUNC_13(VAR_11);
  } else if (VAR_8 == VAR_2) {
   FUNC_17(&VAR_6);
   FUNC_15(&VAR_11->list);
   FUNC_18(&VAR_6);

   FUNC_4(VAR_11);
   FUNC_0(VAR_11);
   goto done;
  }
  FUNC_4(VAR_11);
 } else {
  struct net_device *VAR_14;
  u16 VAR_15;

  VAR_15 = FUNC_2(VAR_10, &VAR_14);
  if (VAR_14) {
   VAR_11 = FUNC_1(VAR_14);
   if (VAR_11) {
    VAR_15 |= VAR_5;
    FUNC_5(VAR_11->cnic_priv, VAR_8, VAR_15);
    FUNC_4(VAR_11);
   }
  }
 }
done:
 return VAR_4;
}
