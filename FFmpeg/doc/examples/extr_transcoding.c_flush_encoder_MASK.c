
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* enc_ctx; } ;
struct TYPE_5__ {TYPE_1__* codec; } ;
struct TYPE_4__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 int FUNC_1 (int *,unsigned int,int*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (!(VAR_2[VAR_3].enc_ctx->codec->capabilities &
                VAR_0))
        return 0;

    while (1) {
        FUNC_0(((void*)0), VAR_1, "Flushing stream #%u encoder\n", VAR_3);
        VAR_4 = FUNC_1(((void*)0), VAR_3, &VAR_5);
        if (VAR_4 < 0)
            break;
        if (!VAR_5)
            return 0;
    }
    return VAR_4;
}
