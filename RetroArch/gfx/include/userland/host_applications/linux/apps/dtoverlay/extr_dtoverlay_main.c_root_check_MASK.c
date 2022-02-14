
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
    if (FUNC_1() != 0)
 FUNC_0("Must be run as root - try 'sudo %s ...'", VAR_0);
}
