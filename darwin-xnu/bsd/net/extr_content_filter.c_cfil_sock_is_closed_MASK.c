
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {int so_flags; TYPE_1__* so_cfil; } ;
typedef scalar_t__ errno_t ;
struct TYPE_6__ {int cfi_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (struct socket*,TYPE_1__*,int) ;
 int FUNC_6 (struct socket*,TYPE_1__*) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*,TYPE_1__*,int) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*) ;

void
FUNC_11(struct socket *VAR_4)
{
 errno_t VAR_5 = 0;
 int VAR_6;

 if (FUNC_2(VAR_4)) {
  FUNC_9(VAR_4);
  return;
 }

 if ((VAR_4->so_flags & VAR_3) == 0 || VAR_4->so_cfil == ((void*)0))
  return;

 FUNC_1(VAR_1, "so %llx", (uint64_t)FUNC_3(VAR_4));

 FUNC_10(VAR_4);

 for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++) {

  VAR_5 = FUNC_5(VAR_4, VAR_4->so_cfil, VAR_6);
 }


 VAR_5 = FUNC_4(VAR_4, VAR_4->so_cfil, 1);
 if (VAR_5 == 0)
  FUNC_8(VAR_4, VAR_4->so_cfil, 1);
 FUNC_7(VAR_4, 1);

 VAR_4->so_cfil->cfi_flags |= VAR_0;


 FUNC_6(VAR_4, VAR_4->so_cfil);

 FUNC_0(VAR_4->so_cfil);
}
