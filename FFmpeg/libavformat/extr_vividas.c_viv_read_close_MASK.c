
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_entries; int sb_blocks; int sb_buf; int sb_pb; } ;
typedef TYPE_1__ VividasDemuxContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    VividasDemuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->sb_pb);
    FUNC_0(&VAR_1->sb_buf);
    FUNC_0(&VAR_1->sb_blocks);
    FUNC_0(&VAR_1->sb_entries);

    return 0;
}
