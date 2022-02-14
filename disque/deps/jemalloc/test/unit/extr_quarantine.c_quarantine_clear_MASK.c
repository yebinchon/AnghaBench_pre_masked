
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int,int ) ;

void
FUNC_3(void)
{
 void *VAR_1;

 VAR_1 = FUNC_2(VAR_0*2, 0);
 FUNC_0(VAR_1, "Unexpected mallocx() failure");
 FUNC_1(VAR_1, 0);
}
