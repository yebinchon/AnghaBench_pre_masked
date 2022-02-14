
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct ieee80211_crypto_ops {int name; } ;
struct ieee80211_crypto_alg {struct ieee80211_crypto_ops* ops; } ;
struct TYPE_2__ {int lock; struct list_head algs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int ,char const*) ;

struct ieee80211_crypto_ops * FUNC_3(const char *VAR_1)
{
 unsigned long VAR_2;
 struct list_head *VAR_3;
 struct ieee80211_crypto_alg *VAR_4 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_0->lock, VAR_2);
 for (VAR_3 = VAR_0->algs.next; VAR_3 != &VAR_0->algs; VAR_3 = VAR_3->next) {
  struct ieee80211_crypto_alg *VAR_5 =
   (struct ieee80211_crypto_alg *) VAR_3;
  if (FUNC_2(VAR_5->ops->name, VAR_1) == 0) {
   VAR_4 = VAR_5;
   break;
  }
 }
 FUNC_1(&VAR_0->lock, VAR_2);

 if (VAR_4)
  return VAR_4->ops;
 else
  return ((void*)0);
}
