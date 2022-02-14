
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct chan_freq_power {scalar_t__ channel; } ;
struct assoc_request {int channel; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct chan_freq_power* FUNC_0 (struct lbs_private*,int ,long) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,long) ;
 struct chan_freq_power* FUNC_5 (struct lbs_private*,int ,int) ;
 struct assoc_request* FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (struct lbs_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4, struct iw_request_info *VAR_5,
    struct iw_freq *VAR_6, char *VAR_7)
{
 int VAR_8 = -VAR_1;
 struct lbs_private *VAR_9 = VAR_4->ml_priv;
 struct chan_freq_power *VAR_10;
 struct assoc_request * VAR_11;

 FUNC_2(VAR_3);

 FUNC_8(&VAR_9->lock);
 VAR_11 = FUNC_6(VAR_9);
 if (!VAR_11) {
  VAR_8 = -VAR_2;
  goto out;
 }


 if (VAR_6->e == 1) {
  long VAR_12 = VAR_6->m / 100000;

  VAR_10 = FUNC_0(VAR_9, 0, VAR_12);
  if (!VAR_10) {
   FUNC_4("invalid freq %ld\n", VAR_12);
   goto out;
  }

  VAR_6->e = 0;
  VAR_6->m = (int) VAR_10->channel;
 }


 if (VAR_6->m > 1000 || VAR_6->e > 0) {
  goto out;
 }

 VAR_10 = FUNC_5(VAR_9, 0, VAR_6->m);
 if (!VAR_10) {
  goto out;
 }

 VAR_11->channel = VAR_6->m;
 VAR_8 = 0;

out:
 if (VAR_8 == 0) {
  FUNC_10(VAR_0, &VAR_11->flags);
  FUNC_7(VAR_9);
 } else {
  FUNC_1(VAR_9);
 }
 FUNC_9(&VAR_9->lock);

 FUNC_3(VAR_3, "ret %d", VAR_8);
 return VAR_8;
}
