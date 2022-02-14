
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct BCState {int ackcnt; int st; int aclock; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_0)
{
 u_long VAR_1;
 int VAR_2;

 FUNC_1(&VAR_0->aclock, VAR_1);
 VAR_2 = VAR_0->ackcnt;
 VAR_0->ackcnt = 0;
 FUNC_2(&VAR_0->aclock, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0->st, VAR_2);
}
