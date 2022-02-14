
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int (* clear_blocks ) (int *) ;} ;
struct TYPE_6__ {int gb; TYPE_1__ bdsp; } ;
typedef TYPE_2__ MDECContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *,int const) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(MDECContext *VAR_1, int16_t VAR_2[6][64])
{
    int VAR_3, VAR_4;
    static const int VAR_5[6] = { 5, 4, 0, 1, 2, 3 };

    VAR_1->bdsp.clear_blocks(VAR_2[0]);

    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
        if ((VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_5[VAR_3]],
                                           VAR_5[VAR_3])) < 0)
            return VAR_4;
        if (FUNC_0(&VAR_1->gb) < 0)
            return VAR_0;
    }
    return 0;
}
