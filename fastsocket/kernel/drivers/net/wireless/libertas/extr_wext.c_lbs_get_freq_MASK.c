
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {long channel; } ;
struct lbs_private {TYPE_1__ curbssparams; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {long m; int e; } ;
struct chan_freq_power {scalar_t__ freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,long) ;
 struct chan_freq_power* FUNC_3 (struct lbs_private*,int ,long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct iw_request_info *VAR_3,
    struct iw_freq *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;
 struct chan_freq_power *VAR_7;

 FUNC_0(VAR_1);

 VAR_7 = FUNC_3(VAR_6, 0,
        VAR_6->curbssparams.channel);

 if (!VAR_7) {
  if (VAR_6->curbssparams.channel)
   FUNC_2("invalid channel %d\n",
          VAR_6->curbssparams.channel);
  return -VAR_0;
 }

 VAR_4->m = (long)VAR_7->freq * 100000;
 VAR_4->e = 1;

 FUNC_2("freq %u\n", VAR_4->m);
 FUNC_1(VAR_1);
 return 0;
}
