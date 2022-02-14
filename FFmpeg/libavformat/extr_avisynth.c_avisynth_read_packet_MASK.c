
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int vi; scalar_t__ error; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AviSynthContext ;
typedef TYPE_3__ AVStream ;
typedef int AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__**,int *,int*) ;
 int FUNC_1 (TYPE_4__*,int *,int) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AviSynthContext *VAR_5 = VAR_3->priv_data;
    AVStream *VAR_6;
    int VAR_7 = 0;
    int VAR_8;

    if (VAR_5->error)
        return VAR_1;



    FUNC_0(VAR_3, &VAR_6, VAR_4, &VAR_7);
    if (VAR_6->codecpar->codec_type == VAR_2) {
        VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_7);
        if (VAR_8 == VAR_0 && FUNC_3(VAR_5->vi)) {
            FUNC_0(VAR_3, &VAR_6, VAR_4, &VAR_7);
            return FUNC_1(VAR_3, VAR_4, VAR_7);
        }
    } else {
        VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
        if (VAR_8 == VAR_0 && FUNC_4(VAR_5->vi)) {
            FUNC_0(VAR_3, &VAR_6, VAR_4, &VAR_7);
            return FUNC_2(VAR_3, VAR_4, VAR_7);
        }
    }

    return VAR_8;
}
