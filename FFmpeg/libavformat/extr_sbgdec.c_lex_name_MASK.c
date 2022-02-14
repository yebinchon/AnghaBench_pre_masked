
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_string {char* s; char* e; } ;
struct sbg_parser {char* cursor; char* end; } ;



__attribute__((used)) static int FUNC_0(struct sbg_parser *VAR_0, struct sbg_string *VAR_1)
{
    char *VAR_2 = VAR_0->cursor, *VAR_3 = VAR_2;

    while (VAR_3 < VAR_0->end && ((*VAR_3 >= 'a' && *VAR_3 <= 'z') || (*VAR_3 >= 'A' && *VAR_3 <= 'Z')
           || (*VAR_3 >= '0' && *VAR_3 <= '9') || *VAR_3 == '_' || *VAR_3 == '-'))
        VAR_3++;
    if (VAR_3 == VAR_2)
        return 0;
    VAR_1->s = VAR_2;
    VAR_1->e = VAR_0->cursor = VAR_3;
    return 1;
}
