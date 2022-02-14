
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {char* cursor; char* end; int line_no; } ;


 int FUNC_0 (struct sbg_parser*) ;

__attribute__((used)) static int FUNC_1(struct sbg_parser *VAR_0)
{
    if (VAR_0->cursor < VAR_0->end && *VAR_0->cursor == '#') {
        VAR_0->cursor++;
        while (VAR_0->cursor < VAR_0->end && *VAR_0->cursor != '\n')
            VAR_0->cursor++;
    }
    if (VAR_0->cursor == VAR_0->end)

        return 1;
    if (*VAR_0->cursor != '\n')
        return 0;
    VAR_0->cursor++;
    VAR_0->line_no++;
    FUNC_0(VAR_0);
    return 1;
}
