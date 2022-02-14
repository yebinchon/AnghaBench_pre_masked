
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int disabled; int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct r8180_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int fts; } ;


 int VAR_0 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 struct r8180_priv *VAR_5 = FUNC_0(VAR_1);

 VAR_3->frag.value = VAR_5->ieee80211->fts;
 VAR_3->frag.fixed = 0;
 VAR_3->frag.disabled = (VAR_3->frag.value == VAR_0);

 return 0;
}
