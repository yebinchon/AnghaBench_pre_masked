
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* codecpar; TYPE_4__* priv_data; } ;
struct TYPE_13__ {int nb_segments; TYPE_2__** segments; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_12__ {int edit_units_per_packet; scalar_t__ wrapping; TYPE_3__ edit_rate; int index_sid; } ;
struct TYPE_10__ {int edit_unit_byte_count; } ;
struct TYPE_9__ {scalar_t__ codec_type; int codec_id; } ;
typedef TYPE_4__ MXFTrack ;
typedef TYPE_5__ MXFIndexTable ;
typedef int MXFContext ;
typedef TYPE_6__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(MXFContext *VAR_2, AVStream *VAR_3)
{
    MXFTrack *VAR_4 = VAR_3->priv_data;
    MXFIndexTable *VAR_5;

    if (!VAR_4)
        return;
    VAR_4->edit_units_per_packet = 1;
    if (VAR_4->wrapping != VAR_1)
        return;

    VAR_5 = FUNC_2(VAR_2, VAR_4->index_sid);


    if (VAR_3->codecpar->codec_type != VAR_0 ||
        !FUNC_1(VAR_3->codecpar->codec_id) ||
        !VAR_5 ||
        VAR_5->nb_segments != 1 ||
        VAR_5->segments[0]->edit_unit_byte_count >= 32)
        return;





    VAR_4->edit_units_per_packet = FUNC_0(1, VAR_4->edit_rate.num / VAR_4->edit_rate.den / 25);
}
