
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ cl_mem ;
typedef int cl_int ;
struct TYPE_10__ {TYPE_3__* priv; } ;
struct TYPE_8__ {TYPE_1__* hwctx; } ;
struct TYPE_9__ {double* threshold; int coordinates; scalar_t__ coord; TYPE_2__ ocf; } ;
struct TYPE_7__ {int context; } ;
typedef TYPE_3__ NeighborOpenCLContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_5)
{
    NeighborOpenCLContext *VAR_6 = VAR_5->priv;
    cl_int VAR_7[9];
    cl_mem VAR_8;
    cl_int VAR_9;
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
        VAR_6->threshold[VAR_10] /= 255.0;
    }

    VAR_7[4] = 0;
    for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
        if (VAR_6->coordinates & (1 << VAR_10)) {
            VAR_7[VAR_10 > 3 ? VAR_10 + 1: VAR_10] = 1;
        }
    }
    VAR_8 = FUNC_2(VAR_6->ocf.hwctx->context,
                            VAR_3 |
                            VAR_1 |
                            VAR_2,
                            9 * sizeof(cl_int), VAR_7, &VAR_9);
    if (!VAR_8) {
        FUNC_1(VAR_5, VAR_0, "Failed to create matrix buffer: "
               "%d.\n", VAR_9);
        return FUNC_0(VAR_4);
    }
    VAR_6->coord = VAR_8;

    return 0;
}
