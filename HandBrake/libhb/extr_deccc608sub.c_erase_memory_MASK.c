
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_write {int dummy; } ;
struct eia608_screen {int dummy; } ;


 int FUNC_0 (struct eia608_screen*) ;
 struct eia608_screen* FUNC_1 (struct s_write*) ;
 struct eia608_screen* FUNC_2 (struct s_write*) ;

void FUNC_3 (struct s_write *VAR_0, int VAR_1)
{
    struct eia608_screen *VAR_2;
    if (VAR_1)
    {
        VAR_2 = FUNC_2(VAR_0);
    }
    else
    {
        VAR_2 = FUNC_1(VAR_0);
    }
    FUNC_0 (VAR_2);
}
