
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct socket {int so_flags; int * so_cfil; } ;
typedef int errno_t ;


 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,int *,int,int) ;
 int FUNC_4 (struct socket*,int,int ,int ) ;
 int FUNC_5 (struct socket*) ;

void
FUNC_6(struct socket *VAR_5, int VAR_6)
{
 errno_t VAR_7 = 0;
 int VAR_8;

 if (FUNC_1(VAR_5)) {
  FUNC_4(VAR_5, VAR_6, 0, 0);
  return;
 }

 if ((VAR_5->so_flags & VAR_4) == 0 || VAR_5->so_cfil == ((void*)0))
  return;

 FUNC_0(VAR_0, "so %llx how %d",
  (uint64_t)FUNC_2(VAR_5), VAR_6);

 FUNC_5(VAR_5);

 for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++) {

  if (VAR_6 != VAR_3)
   VAR_7 = FUNC_3(VAR_5, VAR_5->so_cfil, VAR_8, 0);

  if (VAR_6 != VAR_2)
   VAR_7 = FUNC_3(VAR_5, VAR_5->so_cfil, VAR_8, 1);
 }
}
