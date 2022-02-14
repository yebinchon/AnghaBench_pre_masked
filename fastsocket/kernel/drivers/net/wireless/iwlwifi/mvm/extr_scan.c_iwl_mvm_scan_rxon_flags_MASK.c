
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_scan_request {TYPE_1__** channels; } ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline __le32
FUNC_1(struct cfg80211_scan_request *VAR_3)
{
 if (VAR_3->channels[0]->band == VAR_0)
  return FUNC_0(VAR_1);
 else
  return FUNC_0(VAR_2);
}
