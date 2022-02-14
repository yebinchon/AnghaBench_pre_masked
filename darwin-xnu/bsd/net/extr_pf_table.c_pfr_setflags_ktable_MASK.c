
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {int pfrkt_flags; struct pfr_ktable* pfrkt_shadow; scalar_t__ pfrkt_cnt; struct pfr_ktable* pfrkt_root; int * pfrkt_refcnt; } ;
struct pfr_kentryworkq {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *,struct pfr_ktable*) ;
 int VAR_9 ;
 int FUNC_2 (struct pfr_ktable*,int) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct pfr_ktable*,struct pfr_kentryworkq*) ;

__attribute__((used)) static void
FUNC_5(struct pfr_ktable *VAR_13, int VAR_14)
{
 struct pfr_kentryworkq VAR_15;

 FUNC_0(VAR_9, VAR_0);

 if (!(VAR_14 & VAR_6) &&
     !(VAR_14 & VAR_4))
  VAR_14 &= ~VAR_2;
 if (!(VAR_14 & VAR_2))
  VAR_14 &= ~VAR_8;
 if (!(VAR_14 & VAR_7)) {
  FUNC_1(VAR_11, &VAR_12, VAR_13);
  if (VAR_13->pfrkt_root != ((void*)0))
   if (!--VAR_13->pfrkt_root->pfrkt_refcnt[VAR_1])
    FUNC_5(VAR_13->pfrkt_root,
        VAR_13->pfrkt_root->pfrkt_flags &
        ~VAR_5);
  FUNC_2(VAR_13, 1);
  VAR_10--;
  return;
 }
 if (!(VAR_14 & VAR_2) && VAR_13->pfrkt_cnt) {
  FUNC_3(VAR_13, &VAR_15, ((void*)0), 0);
  FUNC_4(VAR_13, &VAR_15);
 }
 if (!(VAR_14 & VAR_3) && VAR_13->pfrkt_shadow != ((void*)0)) {
  FUNC_2(VAR_13->pfrkt_shadow, 1);
  VAR_13->pfrkt_shadow = ((void*)0);
 }
 VAR_13->pfrkt_flags = VAR_14;
}
