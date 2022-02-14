
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LZWState {scalar_t__ mode; scalar_t__ bs; int gb; } ;
typedef int LZWState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;

int FUNC_4(LZWState *VAR_1)
{
    struct LZWState *VAR_2 = (struct LZWState *)VAR_1;

    if(VAR_2->mode == VAR_0) {
        while (VAR_2->bs > 0 && FUNC_1(&VAR_2->gb)) {
            FUNC_2(&VAR_2->gb, VAR_2->bs);
            VAR_2->bs = FUNC_0(&VAR_2->gb);
        }
    }else
        FUNC_2(&VAR_2->gb, FUNC_1(&VAR_2->gb));
    return FUNC_3(&VAR_2->gb);
}
