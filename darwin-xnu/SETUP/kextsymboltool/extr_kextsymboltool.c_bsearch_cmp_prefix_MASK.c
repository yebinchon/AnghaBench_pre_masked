
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; } ;
struct bsearch_key {int name_len; int name; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1( const void * VAR_0, const void * VAR_1)
{
    struct bsearch_key * VAR_2 = (struct bsearch_key *)VAR_0;
    struct symbol * VAR_3 = (struct symbol *) VAR_1;

    return(FUNC_0(VAR_2->name, VAR_3->name, VAR_2->name_len));
}
