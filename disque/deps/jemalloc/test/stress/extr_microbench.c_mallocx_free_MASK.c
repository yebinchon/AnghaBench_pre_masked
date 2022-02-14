
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 void *VAR_0 = FUNC_1(1, 0);
 if (VAR_0 == ((void*)0)) {
  FUNC_2("Unexpected mallocx() failure");
  return;
 }
 FUNC_0(VAR_0);
}
