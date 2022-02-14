
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; scalar_t__ e; } ;
union iwreq_data {TYPE_1__ freq; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int config; int status; int channel; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{




 struct ipw2100_priv *VAR_6 = FUNC_1(VAR_2);

 VAR_4->freq.e = 0;



 if (VAR_6->config & VAR_0 ||
     VAR_6->status & VAR_1)
  VAR_4->freq.m = VAR_6->channel;
 else
  VAR_4->freq.m = 0;

 FUNC_0("GET Freq/Channel -> %d\n", VAR_6->channel);
 return 0;

}
