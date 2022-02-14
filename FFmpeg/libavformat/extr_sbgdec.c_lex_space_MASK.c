
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {char* cursor; char* end; } ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(struct sbg_parser *VAR_0)
{
    char *VAR_1 = VAR_0->cursor;

    while (VAR_0->cursor < VAR_0->end && FUNC_0(*VAR_0->cursor))
        VAR_0->cursor++;
    return VAR_0->cursor > VAR_1;
}
