
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3( void )
{

    FUNC_1(VAR_0 + VAR_1, 0x5a);
    if (FUNC_0(VAR_0 + VAR_1) != 0x5a) return 0;
    FUNC_1(VAR_0 + VAR_1, 0xa5);
    if (FUNC_0(VAR_0 + VAR_1) != 0xa5) return 0;
    FUNC_2('\n');
    return 1;
}
