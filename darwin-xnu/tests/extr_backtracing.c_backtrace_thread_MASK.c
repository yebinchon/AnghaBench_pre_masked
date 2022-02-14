
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_2)
{
#pragma unused(arg)
 unsigned int VAR_3;






    VAR_3 = VAR_1 - VAR_0;

    FUNC_0("backtrace thread calling into %d frames (already at %d frames)",
       VAR_3, VAR_0);
    (void)FUNC_1(VAR_3);
    return ((void*)0);
}
