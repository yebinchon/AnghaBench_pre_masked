
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dispatch_semaphore_t ;


 int FUNC_0 (void*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *
FUNC_2(void *VAR_2)
{
 VAR_0;
 FUNC_0(VAR_2, "semaphore passed to thread should not be NULL");
 FUNC_1(*(dispatch_semaphore_t *)VAR_2);

 while (VAR_1);
 return ((void*)0);
}
