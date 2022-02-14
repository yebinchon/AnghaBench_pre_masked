
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct pfr_ktable {int pfrkt_tzero; scalar_t__ pfrkt_nomatch; scalar_t__ pfrkt_match; int pfrkt_bytes; int pfrkt_packets; } ;
struct pfr_kentryworkq {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct pfr_kentryworkq*,int ,int ) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct pfr_ktable *VAR_2, u_int64_t VAR_3, int VAR_4)
{
 struct pfr_kentryworkq VAR_5;

 FUNC_0(VAR_1, VAR_0);

 if (VAR_4) {
  FUNC_3(VAR_2, &VAR_5, ((void*)0), 0);
  FUNC_2(&VAR_5, VAR_3, 0);
 }
 FUNC_1(VAR_2->pfrkt_packets, sizeof (VAR_2->pfrkt_packets));
 FUNC_1(VAR_2->pfrkt_bytes, sizeof (VAR_2->pfrkt_bytes));
 VAR_2->pfrkt_match = VAR_2->pfrkt_nomatch = 0;
 VAR_2->pfrkt_tzero = VAR_3;
}
