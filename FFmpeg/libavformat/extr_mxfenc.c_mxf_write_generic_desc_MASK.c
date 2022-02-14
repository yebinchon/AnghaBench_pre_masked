
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_16__ {int const container_ul; } ;
struct TYPE_15__ {int * oformat; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_14__ {int index; TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int den; int num; } ;
struct TYPE_13__ {TYPE_2__ time_base; } ;
struct TYPE_12__ {size_t index; } ;
struct TYPE_10__ {scalar_t__ codec_id; int sample_rate; } ;
typedef TYPE_3__ MXFStreamContext ;
typedef TYPE_4__ MXFContext ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 TYPE_9__* VAR_4 ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int64_t FUNC_6(AVFormatContext *VAR_5, AVStream *VAR_6, const UID VAR_7)
{
    MXFContext *VAR_8 = VAR_5->priv_data;
    MXFStreamContext *VAR_9 = VAR_6->priv_data;
    AVIOContext *VAR_10 = VAR_5->pb;
    int64_t VAR_11;

    FUNC_2(VAR_10, VAR_7, 16);
    FUNC_3(VAR_10, 0);
    VAR_11 = FUNC_0(VAR_10);

    FUNC_4(VAR_10, 16, 0x3C0A);
    FUNC_5(VAR_10, VAR_2, VAR_6->index);

    FUNC_4(VAR_10, 4, 0x3006);
    FUNC_1(VAR_10, VAR_6->index+2);

    FUNC_4(VAR_10, 8, 0x3001);
    if (VAR_5->oformat == &VAR_3) {
        FUNC_1(VAR_10, VAR_8->time_base.den);
        FUNC_1(VAR_10, VAR_8->time_base.num);
    } else {
        if (VAR_6->codecpar->codec_id == VAR_0 ||
            VAR_6->codecpar->codec_id == VAR_1) {
            FUNC_1(VAR_10, VAR_6->codecpar->sample_rate);
            FUNC_1(VAR_10, 1);
        } else {
            FUNC_1(VAR_10, VAR_8->time_base.den);
            FUNC_1(VAR_10, VAR_8->time_base.num);
        }
    }

    FUNC_4(VAR_10, 16, 0x3004);
    FUNC_2(VAR_10, VAR_4[VAR_9->index].container_ul, 16);

    return VAR_11;
}
