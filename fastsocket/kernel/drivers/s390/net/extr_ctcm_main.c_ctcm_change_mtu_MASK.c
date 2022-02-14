
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int hard_header_len; int mtu; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {TYPE_1__** channel; } ;
struct TYPE_2__ {int max_bufsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctcm_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5, int VAR_6)
{
 struct ctcm_priv *VAR_7;
 int VAR_8;

 if (VAR_6 < 576 || VAR_6 > 65527)
  return -VAR_0;

 VAR_7 = VAR_5->ml_priv;
 VAR_8 = VAR_7->channel[VAR_3]->max_bufsize;

 if (FUNC_0(VAR_7)) {
  if (VAR_6 > VAR_8 - VAR_4)
   return -VAR_0;
  VAR_5->hard_header_len = VAR_4 + VAR_2;
 } else {
  if (VAR_6 > VAR_8 - VAR_1 - 2)
   return -VAR_0;
  VAR_5->hard_header_len = VAR_1 + 2;
 }
 VAR_5->mtu = VAR_6;
 return 0;
}
