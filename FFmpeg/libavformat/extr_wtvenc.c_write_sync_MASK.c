
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int last_chunk_pos; int serial; int nb_sp_pairs; int sp_pairs; int last_timestamp_pos; int first_index_pos; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_7__ {TYPE_1__* priv_data; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int,int ) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1)
{
    AVIOContext *VAR_2 = VAR_1->pb;
    WtvContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4 = VAR_3->last_chunk_pos;

    FUNC_3(VAR_1, &VAR_0, 0x18, 0);
    FUNC_1(VAR_2, VAR_3->first_index_pos);
    FUNC_1(VAR_2, VAR_3->last_timestamp_pos);
    FUNC_1(VAR_2, 0);

    FUNC_2(VAR_1);
    FUNC_0(&VAR_3->sp_pairs, &VAR_3->nb_sp_pairs, VAR_3->serial, VAR_3->last_chunk_pos);

    VAR_3->last_chunk_pos = VAR_4;
}
