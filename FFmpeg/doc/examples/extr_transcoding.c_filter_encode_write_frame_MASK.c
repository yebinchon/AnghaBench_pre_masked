
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int buffersink_ctx; int buffersrc_ctx; } ;
struct TYPE_9__ {int pict_type; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_1__*,unsigned int,int *) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_7(AVFrame *VAR_7, unsigned int VAR_8)
{
    int VAR_9;
    AVFrame *VAR_10;

    FUNC_5(((void*)0), VAR_2, "Pushing decoded frame to filters\n");

    VAR_9 = FUNC_2(VAR_6[VAR_8].buffersrc_ctx,
            VAR_7, 0);
    if (VAR_9 < 0) {
        FUNC_5(((void*)0), VAR_1, "Error while feeding the filtergraph\n");
        return VAR_9;
    }


    while (1) {
        VAR_10 = FUNC_3();
        if (!VAR_10) {
            VAR_9 = FUNC_0(VAR_5);
            break;
        }
        FUNC_5(((void*)0), VAR_2, "Pulling filtered frame from filters\n");
        VAR_9 = FUNC_1(VAR_6[VAR_8].buffersink_ctx,
                VAR_10);
        if (VAR_9 < 0) {




            if (VAR_9 == FUNC_0(VAR_4) || VAR_9 == VAR_0)
                VAR_9 = 0;
            FUNC_4(&VAR_10);
            break;
        }

        VAR_10->pict_type = VAR_3;
        VAR_9 = FUNC_6(VAR_10, VAR_8, ((void*)0));
        if (VAR_9 < 0)
            break;
    }

    return VAR_9;
}
