
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int uid; int local_tag; } ;
struct TYPE_16__ {int nb_streams; TYPE_2__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_15__ {int store_user_comments; } ;
struct TYPE_14__ {int avc_intra; } ;
struct TYPE_13__ {TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_12__ {scalar_t__ codec_id; } ;
typedef TYPE_3__ MXFStreamContext ;
typedef TYPE_4__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 TYPE_7__* VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_5 (int *,TYPE_7__*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_5)
{
    MXFContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8, VAR_9 = 0;
    int VAR_10 = 0;

    VAR_8 = FUNC_0(VAR_2);
    VAR_8 += VAR_6->store_user_comments * FUNC_0(VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_5->nb_streams; VAR_9++) {
        MXFStreamContext *VAR_11 = VAR_5->streams[VAR_9]->priv_data;
        if (VAR_5->streams[VAR_9]->codecpar->codec_id == VAR_0 && !VAR_11->avc_intra) {
            VAR_10 = FUNC_0(VAR_1);
            VAR_8 += VAR_10;
        }
    }

    FUNC_3(VAR_7, VAR_4, 16);
    FUNC_4(VAR_7, VAR_8 * 18 + 8);

    FUNC_2(VAR_7, VAR_8);
    FUNC_2(VAR_7, 18);

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
        FUNC_1(VAR_7, VAR_2[VAR_9].local_tag);
        FUNC_3(VAR_7, VAR_2[VAR_9].uid, 16);
    }
    if (VAR_6->store_user_comments)
        for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
            FUNC_1(VAR_7, VAR_3[VAR_9].local_tag);
            FUNC_3(VAR_7, VAR_3[VAR_9].uid, 16);
        }
    if (VAR_10 > 0)
        FUNC_5(VAR_7, VAR_1, VAR_10);
}
