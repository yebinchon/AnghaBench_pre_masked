
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {int dummy; } ;
struct sbg_fade {void* out; void* in; int member_0; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct sbg_parser*,char) ;

__attribute__((used)) static int FUNC_1(struct sbg_parser *VAR_4, struct sbg_fade *VAR_5)
{
    struct sbg_fade VAR_6 = {0};

    if (FUNC_0(VAR_4, '<'))
        VAR_6.in = VAR_3;
    else if (FUNC_0(VAR_4, '-'))
        VAR_6.in = VAR_2;
    else if (FUNC_0(VAR_4, '='))
        VAR_6.in = VAR_1;
    else
        return 0;
    if (FUNC_0(VAR_4, '>'))
        VAR_6.out = VAR_3;
    else if (FUNC_0(VAR_4, '-'))
        VAR_6.out = VAR_2;
    else if (FUNC_0(VAR_4, '='))
        VAR_6.out = VAR_1;
    else
        return VAR_0;
    *VAR_5 = VAR_6;
    return 1;
}
