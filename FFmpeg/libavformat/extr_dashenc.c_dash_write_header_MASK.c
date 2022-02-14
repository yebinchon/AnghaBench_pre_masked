
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* streams; } ;
struct TYPE_7__ {scalar_t__ segment_type; int ctx; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ DASHContext ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1)
{
    DASHContext *VAR_2 = VAR_1->priv_data;
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
        OutputStream *VAR_5 = &VAR_2->streams[VAR_3];
        if ((VAR_4 = FUNC_0(VAR_5->ctx, ((void*)0))) < 0)
            return VAR_4;




        if (VAR_5->segment_type == VAR_0 &&
            (VAR_4 = FUNC_1(VAR_1, VAR_5)) < 0)
            return VAR_4;
    }
    return VAR_4;
}
