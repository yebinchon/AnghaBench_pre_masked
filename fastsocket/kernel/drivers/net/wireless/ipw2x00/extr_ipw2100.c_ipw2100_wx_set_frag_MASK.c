
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; scalar_t__ disabled; int fixed; } ;
union iwreq_data {TYPE_1__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int frag_threshold; TYPE_2__* ieee; } ;
struct TYPE_4__ {int fts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
          struct iw_request_info *VAR_6,
          union iwreq_data *VAR_7, char *VAR_8)
{




 struct ipw2100_priv *VAR_9 = FUNC_1(VAR_5);

 if (!VAR_7->frag.fixed)
  return -VAR_1;

 if (VAR_7->frag.disabled) {
  VAR_9->frag_threshold |= VAR_2;
  VAR_9->ieee->fts = VAR_0;
 } else {
  if (VAR_7->frag.value < VAR_4 ||
      VAR_7->frag.value > VAR_3)
   return -VAR_1;

  VAR_9->ieee->fts = VAR_7->frag.value & ~0x1;
  VAR_9->frag_threshold = VAR_9->ieee->fts;
 }

 FUNC_0("SET Frag Threshold -> %d\n", VAR_9->ieee->fts);

 return 0;
}
