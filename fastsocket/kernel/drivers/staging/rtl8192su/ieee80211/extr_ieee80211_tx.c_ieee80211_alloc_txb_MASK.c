
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_txb {int nr_frags; int frag_size; TYPE_1__** fragments; } ;
struct TYPE_3__ {struct ieee80211_txb* cb; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ieee80211_txb*) ;
 struct ieee80211_txb* FUNC_3 (int,int) ;
 int FUNC_4 (struct ieee80211_txb*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

struct ieee80211_txb *FUNC_6(int VAR_0, int VAR_1,
       int VAR_2)
{
 struct ieee80211_txb *VAR_3;
 int VAR_4;
 VAR_3 = FUNC_3(
  sizeof(struct ieee80211_txb) + (sizeof(u8*) * VAR_0),
  VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_4(VAR_3, 0, sizeof(struct ieee80211_txb));
 VAR_3->nr_frags = VAR_0;
 VAR_3->frag_size = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->fragments[VAR_4] = FUNC_0(VAR_1);
  if (FUNC_5(!VAR_3->fragments[VAR_4])) {
   VAR_4--;
   break;
  }
  FUNC_4(VAR_3->fragments[VAR_4]->cb, 0, sizeof(VAR_3->fragments[VAR_4]->cb));
 }
 if (FUNC_5(VAR_4 != VAR_0)) {
  while (VAR_4 >= 0)
   FUNC_1(VAR_3->fragments[VAR_4--]);
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
