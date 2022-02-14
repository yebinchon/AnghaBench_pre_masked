
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_string {char* s; char* e; } ;
struct sbg_parser {char* cursor; char* end; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct sbg_parser*) ;

__attribute__((used)) static int FUNC_2(struct sbg_parser *VAR_0, struct sbg_string *VAR_1)
{
    char *VAR_2 = VAR_0->cursor, *VAR_3 = VAR_2;

    if (VAR_2 == VAR_0->end || *VAR_2 == '\n')
        return 0;
    while (VAR_3 < VAR_0->end && *VAR_3 != '\n' && !FUNC_0(*VAR_3))
        VAR_3++;
    VAR_1->s = VAR_2;
    VAR_1->e = VAR_0->cursor = VAR_3;
    FUNC_1(VAR_0);
    return 1;
}
