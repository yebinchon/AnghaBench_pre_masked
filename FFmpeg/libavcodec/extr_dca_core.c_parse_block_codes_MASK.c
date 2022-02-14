
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int,int,int,int *) ;
 int* VAR_3 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline int FUNC_3(DCACoreDecoder *VAR_4, int32_t *VAR_5, int VAR_6)
{

    int VAR_7 = FUNC_2(&VAR_4->gb, VAR_2[VAR_6 - 1]);
    int VAR_8 = FUNC_2(&VAR_4->gb, VAR_2[VAR_6 - 1]);
    int VAR_9 = VAR_3[VAR_6];


    if (FUNC_1(VAR_7, VAR_8, VAR_9, VAR_5)) {
        FUNC_0(VAR_4->avctx, VAR_1, "Failed to decode block code(s)\n");
        return VAR_0;
    }

    return 0;
}
