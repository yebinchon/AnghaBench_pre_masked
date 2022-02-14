
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_kentry {scalar_t__ pfrke_intrpool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct pfr_kentry*) ;

__attribute__((used)) static void
FUNC_1(struct pfr_kentry *VAR_2)
{
 if (VAR_2->pfrke_intrpool)
  FUNC_0(&VAR_1, VAR_2);
 else
  FUNC_0(&VAR_0, VAR_2);
}
