
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {char* cursor; char* end; } ;



__attribute__((used)) static int FUNC_0(struct sbg_parser *VAR_0, char VAR_1)
{
    int VAR_2 = VAR_0->cursor < VAR_0->end && *VAR_0->cursor == VAR_1;

    VAR_0->cursor += VAR_2;
    return VAR_2;
}
