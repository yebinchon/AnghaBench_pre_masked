
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 void *VAR_0 = FUNC_0(1);
 if (VAR_0 == ((void*)0)) {
  FUNC_2("Unexpected malloc() failure");
  return;
 }
 FUNC_1(VAR_0, 1, 0);
}
