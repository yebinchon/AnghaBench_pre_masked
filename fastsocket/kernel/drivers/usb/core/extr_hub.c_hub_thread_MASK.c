
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{





 FUNC_4();

 do {
  FUNC_0();
  FUNC_5(VAR_1,
    !FUNC_2(&VAR_0) ||
    FUNC_1());
 } while (!FUNC_1() || !FUNC_2(&VAR_0));

 FUNC_3("%s: khubd exiting\n", VAR_2);
 return 0;
}
