
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {char* cursor; char* end; } ;


 scalar_t__ FUNC_0 (char) ;
 double FUNC_1 (char*,char**) ;

__attribute__((used)) static int FUNC_2(struct sbg_parser *VAR_0, double *VAR_1)
{
    double VAR_2;
    char *VAR_3;

    if (VAR_0->cursor == VAR_0->end || FUNC_0(*VAR_0->cursor) || *VAR_0->cursor == '\n')
        return 0;
    VAR_2 = FUNC_1(VAR_0->cursor, &VAR_3);
    if (VAR_3 > VAR_0->cursor) {
        *VAR_1 = VAR_2;
        VAR_0->cursor = VAR_3;
        return 1;
    }
    return 0;
}
