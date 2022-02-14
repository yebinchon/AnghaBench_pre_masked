
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,char*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_2 = FUNC_1(VAR_1, "fcu");
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_0("FCU attached\n");

 return 0;
}
