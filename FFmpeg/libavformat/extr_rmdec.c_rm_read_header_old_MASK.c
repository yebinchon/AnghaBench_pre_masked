
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int priv_data; } ;
struct TYPE_9__ {int old_format; } ;
typedef TYPE_1__ RMDemuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1)
{
    RMDemuxContext *VAR_2 = VAR_1->priv_data;
    AVStream *VAR_3;

    VAR_2->old_format = 1;
    VAR_3 = FUNC_1(VAR_1, ((void*)0));
    if (!VAR_3)
        return -1;
    VAR_3->priv_data = FUNC_2();
    if (!VAR_3->priv_data)
        return FUNC_0(VAR_0);
    return FUNC_3(VAR_1, VAR_1->pb, VAR_3, VAR_3->priv_data, 1);
}
