
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ passthrough; } ;
typedef TYPE_2__ TransposeOpenCLContext ;
struct TYPE_9__ {TYPE_1__* dst; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int * FUNC_0 (TYPE_3__*,int,int) ;
 int * FUNC_1 (TYPE_3__*,int,int) ;

__attribute__((used)) static AVFrame *FUNC_2(AVFilterLink *VAR_0, int VAR_1, int VAR_2)
{
    TransposeOpenCLContext *VAR_3 = VAR_0->dst->priv;

    return VAR_3->passthrough ?
        FUNC_1 (VAR_0, VAR_1, VAR_2) :
        FUNC_0(VAR_0, VAR_1, VAR_2);
}
