
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {int channel; int bssid; } ;
struct lbs_private {scalar_t__ mode; TYPE_1__ curbssparams; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct chan_freq_power {scalar_t__ channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct chan_freq_power* FUNC_0 (struct lbs_private*,int ,long) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (struct lbs_private*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,...) ;
 struct chan_freq_power* FUNC_6 (struct lbs_private*,int ,int) ;
 int FUNC_7 (struct lbs_private*,int ,int) ;
 int FUNC_8 (struct lbs_private*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6,
        struct iw_request_info *VAR_7,
        struct iw_freq *VAR_8, char *VAR_9)
{
 struct lbs_private *VAR_10 = VAR_6->ml_priv;
 struct chan_freq_power *VAR_11;
 int VAR_12 = -VAR_1;

 FUNC_3(VAR_4);


 if (VAR_8->e == 1) {
  long VAR_13 = VAR_8->m / 100000;

  VAR_11 = FUNC_0(VAR_10, 0, VAR_13);
  if (!VAR_11) {
   FUNC_5("invalid freq %ld\n", VAR_13);
   goto out;
  }

  VAR_8->e = 0;
  VAR_8->m = (int) VAR_11->channel;
 }


 if (VAR_8->m > 1000 || VAR_8->e > 0) {
  goto out;
 }

 VAR_11 = FUNC_6(VAR_10, 0, VAR_8->m);
 if (!VAR_11) {
  goto out;
 }

 if (VAR_8->m != VAR_10->curbssparams.channel) {
  FUNC_5("mesh channel change forces eth disconnect\n");
  if (VAR_10->mode == VAR_3)
   FUNC_2(VAR_10,
           VAR_10->curbssparams.bssid,
           VAR_5);
  else if (VAR_10->mode == VAR_2)
   FUNC_1(VAR_10);
 }
 FUNC_7(VAR_10, VAR_0, VAR_8->m);
 FUNC_8(VAR_10);
 VAR_12 = 0;

out:
 FUNC_4(VAR_4, "ret %d", VAR_12);
 return VAR_12;
}
