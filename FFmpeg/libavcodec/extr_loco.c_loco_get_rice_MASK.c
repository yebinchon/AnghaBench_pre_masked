
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int run; scalar_t__ save; int run2; int lossy; int gb; } ;
typedef TYPE_1__ RICEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_4(RICEContext *VAR_2)
{
    int VAR_3;
    if (VAR_2->run > 0) {
        VAR_2->run--;
        FUNC_3(VAR_2, 0);
        return 0;
    }
    if (FUNC_0(&VAR_2->gb) < 1)
        return VAR_1;
    VAR_3 = FUNC_1(&VAR_2->gb, FUNC_2(VAR_2), VAR_0, 0);
    FUNC_3(VAR_2, (VAR_3 + 1) >> 1);
    if (!VAR_3) {
        if (VAR_2->save >= 0) {
            VAR_2->run = FUNC_1(&VAR_2->gb, 2, VAR_0, 0);
            if (VAR_2->run > 1)
                VAR_2->save += VAR_2->run + 1;
            else
                VAR_2->save -= 3;
        } else
            VAR_2->run2++;
    } else {
        VAR_3 = ((VAR_3 >> 1) + VAR_2->lossy) ^ -(VAR_3 & 1);
        if (VAR_2->run2 > 0) {
            if (VAR_2->run2 > 2)
                VAR_2->save += VAR_2->run2;
            else
                VAR_2->save -= 3;
            VAR_2->run2 = 0;
        }
    }

    return VAR_3;
}
