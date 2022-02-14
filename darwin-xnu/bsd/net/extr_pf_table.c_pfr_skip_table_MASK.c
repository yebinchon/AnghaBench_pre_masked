
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int pfrt_anchor; } ;
struct pfr_ktable {int pfrkt_anchor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct pfr_table *VAR_1, struct pfr_ktable *VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_0)
  return (0);
 if (FUNC_0(VAR_1->pfrt_anchor, VAR_2->pfrkt_anchor))
  return (1);
 return (0);
}
