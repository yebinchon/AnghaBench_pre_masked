
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int name; int sample_fmts; } ;
typedef TYPE_1__ AVCodec ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,char*,int ) ;

int FUNC_3(void){
    AVCodec *VAR_2 = ((void*)0);
    int VAR_3 = 0;

    while ((VAR_2 = FUNC_1(VAR_2))) {
        if (FUNC_0(VAR_2)) {
            if (VAR_2->type == VAR_0) {
                if (!VAR_2->sample_fmts) {
                    FUNC_2(((void*)0), VAR_1, "Encoder %s is missing the sample_fmts field\n", VAR_2->name);
                    VAR_3 = 1;
                }
            }
        }
    }
    return VAR_3;
}
