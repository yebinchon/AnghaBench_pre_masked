
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {TYPE_1__* index_entries; int nb_index_entries; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int tmcd_flags; int pb; } ;
struct TYPE_9__ {int pos; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4, AVStream *VAR_5)
{
    MOVStreamContext *VAR_6 = VAR_5->priv_data;
    int VAR_7 = 0;
    int64_t VAR_8 = FUNC_2(VAR_6->pb);
    uint32_t VAR_9;

    if (!VAR_5->nb_index_entries)
        return -1;

    FUNC_1(VAR_6->pb, VAR_5->index_entries->pos, VAR_3);
    VAR_9 = FUNC_0(VAR_4->pb);

    if (VAR_6->tmcd_flags & 0x0001) VAR_7 |= VAR_2;
    if (VAR_6->tmcd_flags & 0x0002) VAR_7 |= VAR_0;
    if (VAR_6->tmcd_flags & 0x0004) VAR_7 |= VAR_1;






    FUNC_3(VAR_4, VAR_5, VAR_9, VAR_7);

    FUNC_1(VAR_6->pb, VAR_8, VAR_3);
    return 0;
}
