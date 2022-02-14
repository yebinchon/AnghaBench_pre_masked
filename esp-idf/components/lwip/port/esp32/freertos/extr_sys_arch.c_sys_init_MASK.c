
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(void)
{
  if (VAR_0 != FUNC_3(&VAR_2)) {
    FUNC_0(VAR_1, "sys_init: failed to init lwip protect mutex\n");
  }


  FUNC_2(&VAR_4, VAR_3);

  FUNC_1();
}
