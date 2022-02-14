
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_2, uint64_t VAR_3)
{
    int VAR_4;
    char VAR_5;

    if (!(VAR_1 & VAR_0))
 return;

    for (VAR_4 = 24; VAR_4 >= 0; VAR_4 -= 8)
    {
 VAR_5 = 0xFF & (VAR_2 >> VAR_4);
 if (VAR_5)
     FUNC_0(VAR_5);
    }
    FUNC_0('=');
    FUNC_1(VAR_3);
    FUNC_0('\n');
    FUNC_0('\r');
}
