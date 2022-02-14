
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int * program; TYPE_1__* hwctx; } ;
struct TYPE_6__ {int device_id; int context; } ;
typedef TYPE_2__ OpenCLFilterContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,char*) ;
 char* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int *,int,int *,int *,int *,int *) ;
 int * FUNC_5 (int ,int,char const**,int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,int ,int ,size_t,char*,size_t*) ;
 int FUNC_7 (int *) ;

int FUNC_8(AVFilterContext *VAR_5,
                                  const char **VAR_6,
                                  int VAR_7)
{
    OpenCLFilterContext *VAR_8 = VAR_5->priv;
    cl_int VAR_9;

    VAR_8->program = FUNC_5(VAR_8->hwctx->context, VAR_7,
                                             VAR_6,
                                             ((void*)0), &VAR_9);
    if (!VAR_8->program) {
        FUNC_2(VAR_5, VAR_0, "Failed to create program: %d.\n", VAR_9);
        return FUNC_0(VAR_4);
    }

    VAR_9 = FUNC_4(VAR_8->program, 1, &VAR_8->hwctx->device_id,
                         ((void*)0), ((void*)0), ((void*)0));
    if (VAR_9 != VAR_3) {
        FUNC_2(VAR_5, VAR_0, "Failed to build program: %d.\n", VAR_9);

        if (VAR_9 == VAR_1) {
            char *VAR_10;
            size_t VAR_11;

            FUNC_6(VAR_8->program, VAR_8->hwctx->device_id,
                                  VAR_2, 0, ((void*)0), &VAR_11);

            VAR_10 = FUNC_3(VAR_11);
            if (VAR_10) {
                VAR_9 = FUNC_6(VAR_8->program,
                                            VAR_8->hwctx->device_id,
                                            VAR_2,
                                            VAR_11, VAR_10, ((void*)0));
                if (VAR_9 == VAR_3)
                    FUNC_2(VAR_5, VAR_0, "Build log:\n%s\n", VAR_10);
            }

            FUNC_1(VAR_10);
        }

        FUNC_7(VAR_8->program);
        VAR_8->program = ((void*)0);
        return FUNC_0(VAR_4);
    }

    return 0;
}
