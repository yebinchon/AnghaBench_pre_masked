
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_9__ {TYPE_1__* mtab; } ;
typedef TYPE_3__ TwinVQContext ;
struct TYPE_8__ {int sub; } ;
struct TYPE_7__ {int size; int n_lsp; TYPE_2__* fmode; } ;





 int FUNC_0 (float) ;
 int FUNC_1 (TYPE_3__*,float*,float*) ;
 int FUNC_2 (TYPE_3__*,int,float*,float*,int,int) ;

__attribute__((used)) static void FUNC_3(TwinVQContext *VAR_0, float *VAR_1,
                                 enum TwinVQFrameType VAR_2, float *VAR_3)
{
    int VAR_4;
    int VAR_5 = VAR_0->mtab->size / VAR_0->mtab->fmode[VAR_2].sub;

    for (VAR_4 = 0; VAR_4 < VAR_0->mtab->n_lsp; VAR_4++)
        VAR_1[VAR_4] = 2 * FUNC_0(VAR_1[VAR_4]);

    switch (VAR_2) {
    case 130:
        FUNC_2(VAR_0, VAR_2, VAR_1, VAR_3, VAR_5, 8);
        break;
    case 129:
        FUNC_2(VAR_0, VAR_2, VAR_1, VAR_3, VAR_5, 2);
        break;
    case 128:
        FUNC_1(VAR_0, VAR_1, VAR_3);
        break;
    }
}
