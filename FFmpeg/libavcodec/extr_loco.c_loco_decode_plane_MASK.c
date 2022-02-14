
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int lossy; } ;
struct TYPE_5__ {int sum; int count; int gb; int lossy; scalar_t__ run2; scalar_t__ run; scalar_t__ save; } ;
typedef TYPE_1__ RICEContext ;
typedef TYPE_2__ LOCOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(LOCOContext *VAR_2, uint8_t *VAR_3, int VAR_4, int VAR_5,
                             int VAR_6, const uint8_t *VAR_7, int VAR_8)
{
    RICEContext VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;

    if(VAR_8<=0)
        return -1;

    if ((VAR_11 = FUNC_1(&VAR_9.gb, VAR_7, VAR_8)) < 0)
        return VAR_11;

    VAR_9.save = 0;
    VAR_9.run = 0;
    VAR_9.run2 = 0;
    VAR_9.lossy = VAR_2->lossy;

    VAR_9.sum = 8;
    VAR_9.count = 1;


    VAR_10 = FUNC_2(&VAR_9);
    VAR_3[0] = 128 + VAR_10;

    for (VAR_12 = 1; VAR_12 < VAR_4; VAR_12++) {
        VAR_10 = FUNC_2(&VAR_9);
        if (VAR_10 == VAR_1)
           return VAR_0;
        VAR_3[VAR_12] = VAR_3[VAR_12 - 1] + VAR_10;
    }
    VAR_3 += VAR_6;
    for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++) {

        VAR_10 = FUNC_2(&VAR_9);
        if (VAR_10 == VAR_1)
           return VAR_0;
        VAR_3[0] = VAR_3[-VAR_6] + VAR_10;

        for (VAR_12 = 1; VAR_12 < VAR_4; VAR_12++) {
            VAR_10 = FUNC_2(&VAR_9);
            if (VAR_10 == VAR_1)
                return -1;
            VAR_3[VAR_12] = FUNC_3(&VAR_3[VAR_12], VAR_6) + VAR_10;
        }
        VAR_3 += VAR_6;
    }

    return (FUNC_0(&VAR_9.gb) + 7) >> 3;
}
