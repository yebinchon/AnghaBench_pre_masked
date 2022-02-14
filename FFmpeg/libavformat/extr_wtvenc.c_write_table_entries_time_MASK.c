
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_st_pairs; int last_serial; int last_pts; TYPE_1__* st_pairs; } ;
typedef TYPE_2__ WtvContext ;
struct TYPE_7__ {TYPE_2__* priv_data; int * pb; } ;
struct TYPE_5__ {int serial; int value; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    AVIOContext *VAR_1 = VAR_0->pb;
    WtvContext *VAR_2 = VAR_0->priv_data;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->nb_st_pairs; VAR_3++) {
        FUNC_0(VAR_1, VAR_2->st_pairs[VAR_3].value);
        FUNC_0(VAR_1, VAR_2->st_pairs[VAR_3].serial);
    }
    FUNC_0(VAR_1, VAR_2->last_pts);
    FUNC_0(VAR_1, VAR_2->last_serial);
}
