
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb_fcl {int fclist; } ;
struct sfb {int dummy; } ;


 int VAR_0 ;
 struct sfb_fcl* FUNC_0 (struct sfb*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sfb*,struct sfb_fcl*) ;

__attribute__((used)) static void
FUNC_3(struct sfb *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct sfb_fcl *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (!FUNC_1(&VAR_3->fclist))
   FUNC_2(VAR_1, VAR_3);
 }
}
