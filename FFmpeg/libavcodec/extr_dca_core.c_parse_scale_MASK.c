
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int FUNC_4(DCACoreDecoder *VAR_5, int *VAR_6, int VAR_7)
{
    const uint32_t *VAR_8;
    unsigned int VAR_9;


    if (VAR_7 > 5) {
        VAR_8 = VAR_3;
        VAR_9 = FUNC_0(VAR_3);
    } else {
        VAR_8 = VAR_2;
        VAR_9 = FUNC_0(VAR_2);
    }


    if (VAR_7 < 5)
        *VAR_6 += FUNC_2(&VAR_5->gb, &VAR_4, VAR_7);
    else
        *VAR_6 = FUNC_3(&VAR_5->gb, VAR_7 + 1);


    if ((unsigned int)*VAR_6 >= VAR_9) {
        FUNC_1(VAR_5->avctx, VAR_1, "Invalid scale factor index\n");
        return VAR_0;
    }

    return VAR_8[*VAR_6];
}
