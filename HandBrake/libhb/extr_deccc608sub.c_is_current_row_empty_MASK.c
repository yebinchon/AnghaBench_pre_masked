
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {char** characters; } ;
struct TYPE_2__ {size_t rollup_base_row; } ;


 int VAR_0 ;
 struct eia608_screen* FUNC_0 (struct s_write*) ;

__attribute__((used)) static int FUNC_1 (struct s_write *VAR_1)
{
    struct eia608_screen *VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0(VAR_1);
    for (VAR_3=0;VAR_3<VAR_0;VAR_3++)
    {
        if (VAR_2->characters[VAR_1->data608->rollup_base_row][VAR_3]!=' ')
            return 0;
    }
    return 1;
}
