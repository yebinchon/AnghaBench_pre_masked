
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int * FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
 VAR_1 = FUNC_1("claw_setup", 2, 1, 8);
 VAR_2 = FUNC_1("claw_trace", 2, 2, 8);
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  FUNC_0();
  return -VAR_0;
 }
 FUNC_2(VAR_1, &VAR_3);
 FUNC_3(VAR_1, 2);
 FUNC_2(VAR_2, &VAR_3);
 FUNC_3(VAR_2, 2);
 return 0;
}
