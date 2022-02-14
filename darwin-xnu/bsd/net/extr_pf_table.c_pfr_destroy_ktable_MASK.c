
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_ktable {TYPE_1__* pfrkt_rs; struct pfr_ktable* pfrkt_shadow; int * pfrkt_ip6; int * pfrkt_ip4; } ;
struct pfr_kentryworkq {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {int tables; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 int FUNC_4 (struct pfr_kentryworkq*) ;
 int FUNC_5 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,struct pfr_ktable*) ;

__attribute__((used)) static void
FUNC_7(struct pfr_ktable *VAR_4, int VAR_5)
{
 struct pfr_kentryworkq VAR_6;

 FUNC_0(VAR_2, VAR_0);

 if (VAR_5) {
  FUNC_5(VAR_4, &VAR_6, ((void*)0), 0);
  FUNC_3(VAR_4, &VAR_6);
  FUNC_4(&VAR_6);
 }
 if (VAR_4->pfrkt_ip4 != ((void*)0))
  FUNC_1((caddr_t)VAR_4->pfrkt_ip4, VAR_1);
 if (VAR_4->pfrkt_ip6 != ((void*)0))
  FUNC_1((caddr_t)VAR_4->pfrkt_ip6, VAR_1);
 if (VAR_4->pfrkt_shadow != ((void*)0))
  FUNC_7(VAR_4->pfrkt_shadow, VAR_5);
 if (VAR_4->pfrkt_rs != ((void*)0)) {
  VAR_4->pfrkt_rs->tables--;
  FUNC_2(VAR_4->pfrkt_rs);
 }
 FUNC_6(&VAR_3, VAR_4);
}
