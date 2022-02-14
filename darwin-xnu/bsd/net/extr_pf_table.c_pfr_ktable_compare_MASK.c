
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {int pfrkt_anchor; int pfrkt_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct pfr_ktable *VAR_1, struct pfr_ktable *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1->pfrkt_name, VAR_2->pfrkt_name, VAR_0)))
  return (VAR_3);
 return (FUNC_0(VAR_1->pfrkt_anchor, VAR_2->pfrkt_anchor));
}
