
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int ff_asf_guid ;
struct TYPE_5__ {int last_chunk_pos; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int const*,int ,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, const ff_asf_guid *VAR_1, int VAR_2)
{
    WtvContext *VAR_3 = VAR_0->priv_data;
    AVIOContext *VAR_4 = VAR_0->pb;

    int64_t VAR_5 = VAR_3->last_chunk_pos;
    FUNC_1(VAR_0, VAR_1, 0, VAR_2);
    FUNC_0(VAR_4, VAR_5);
}
