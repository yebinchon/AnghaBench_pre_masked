
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int*** mv_cache; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 size_t* VAR_0 ;

__attribute__((used)) static inline int FUNC_2(H264SliceContext *VAR_1,
                                         int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = VAR_1->mv_cache[VAR_5][VAR_0[VAR_2]][1];
    int VAR_7 = (VAR_6 & 3) ? 3 : 0;
    int VAR_8 = (VAR_6 >> 2) + VAR_4;
    int VAR_9 = VAR_8 + VAR_7 + VAR_3;

    FUNC_1(VAR_3 >= 0);

    return FUNC_0(0, VAR_9);
}
