
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {int cursor; } ;
typedef int int64_t ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct sbg_parser *VAR_0, int64_t *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0->cursor, VAR_1);
    VAR_0->cursor += VAR_2;
    return VAR_2 > 0;
}
