
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ cavs_vector ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(cavs_vector *VAR_2, cavs_vector *VAR_3, int VAR_4)
{
    if ((VAR_2->ref == VAR_1) || (VAR_3->ref == VAR_1))
        return 2;
    if((FUNC_0(VAR_2->x - VAR_3->x) >= 4) ||
       (FUNC_0(VAR_2->y - VAR_3->y) >= 4) ||
       (VAR_2->ref != VAR_3->ref))
        return 1;
    if (VAR_4) {
        VAR_2 += VAR_0;
        VAR_3 += VAR_0;
        if((FUNC_0(VAR_2->x - VAR_3->x) >= 4) ||
           (FUNC_0(VAR_2->y - VAR_3->y) >= 4) ||
           (VAR_2->ref != VAR_3->ref))
            return 1;
    }
    return 0;
}
