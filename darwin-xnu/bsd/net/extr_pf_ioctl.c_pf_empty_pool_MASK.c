
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_pooladdr {int kif; int addr; } ;
struct pf_palist {int dummy; } ;


 int VAR_0 ;
 struct pf_pooladdr* FUNC_0 (struct pf_palist*) ;
 int FUNC_1 (struct pf_palist*,struct pf_pooladdr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct pf_pooladdr*) ;

__attribute__((used)) static void
FUNC_6(struct pf_palist *VAR_3)
{
 struct pf_pooladdr *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
  FUNC_3(&VAR_4->addr);
  FUNC_2(&VAR_4->addr);
  FUNC_4(VAR_4->kif, VAR_0);
  FUNC_1(VAR_3, VAR_4, VAR_1);
  FUNC_5(&VAR_2, VAR_4);
 }
}
