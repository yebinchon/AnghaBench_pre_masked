
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_write {int new_sentence; } ;
struct eia608_screen {scalar_t__ dirty; } ;


 struct eia608_screen* FUNC_0 (struct s_write*) ;
 int FUNC_1 (struct eia608_screen*,struct s_write*) ;

__attribute__((used)) static int FUNC_2(struct s_write *VAR_0)
{
    struct eia608_screen *VAR_1;
    int VAR_2=0;

    VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1->dirty)
        return 0;
    VAR_0->new_sentence=1;
    VAR_2 = FUNC_1(VAR_1, VAR_0);
    VAR_1->dirty = 0;
    return VAR_2;
}
