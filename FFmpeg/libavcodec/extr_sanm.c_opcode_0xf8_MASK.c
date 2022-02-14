
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t ptrdiff_t ;
struct TYPE_4__ {int pitch; int gb; int * frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int,int ,int ,int,size_t) ;

__attribute__((used)) static int FUNC_4(SANMVideoContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, ptrdiff_t VAR_5)
{
    uint16_t *VAR_6 = VAR_1->frm0 + VAR_2 + VAR_3 * VAR_1->pitch;

    if (VAR_4 == 2) {
        if (FUNC_0(&VAR_1->gb) < 8)
            return VAR_0;

        VAR_6[0] = FUNC_2(&VAR_1->gb);
        VAR_6[1] = FUNC_2(&VAR_1->gb);
        VAR_6[VAR_5] = FUNC_2(&VAR_1->gb);
        VAR_6[VAR_5 + 1] = FUNC_2(&VAR_1->gb);
    } else {
        uint16_t VAR_7, VAR_8;
        int VAR_9;

        if (FUNC_0(&VAR_1->gb) < 5)
            return VAR_0;

        VAR_9 = FUNC_1(&VAR_1->gb);
        VAR_8 = FUNC_2(&VAR_1->gb);
        VAR_7 = FUNC_2(&VAR_1->gb);

        FUNC_3(VAR_1, VAR_6, VAR_9, VAR_7, VAR_8, VAR_4, VAR_5);
    }
    return 0;
}
