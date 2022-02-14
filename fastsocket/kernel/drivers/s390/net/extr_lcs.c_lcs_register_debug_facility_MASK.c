
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 VAR_2 = FUNC_0("lcs_setup", 2, 1, 8);
 VAR_3 = FUNC_0("lcs_trace", 4, 1, 8);
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_4("Not enough memory for debug facility.\n");
  FUNC_3();
  return -VAR_0;
 }
 FUNC_1(VAR_2, &VAR_1);
 FUNC_2(VAR_2, 2);
 FUNC_1(VAR_3, &VAR_1);
 FUNC_2(VAR_3, 2);
 return 0;
}
