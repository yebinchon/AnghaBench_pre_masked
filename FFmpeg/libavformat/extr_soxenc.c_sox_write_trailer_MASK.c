
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {scalar_t__ codec_id; } ;
struct TYPE_15__ {TYPE_3__* pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_14__ {int seekable; } ;
struct TYPE_13__ {long long header_size; } ;
struct TYPE_12__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ SoXContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3)
{
    SoXContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    AVCodecParameters *VAR_6 = VAR_3->streams[0]->codecpar;

    if (VAR_3->pb->seekable & VAR_0) {

        int64_t VAR_7 = FUNC_2(VAR_5);
        int64_t VAR_8 = (VAR_7 - VAR_4->header_size - 4LL) >> 2LL;
        FUNC_1(VAR_5, 8, VAR_2);
        if (VAR_6->codec_id == VAR_1) {
            FUNC_4(VAR_5, VAR_8);
        } else
            FUNC_3(VAR_5, VAR_8);
        FUNC_1(VAR_5, VAR_7, VAR_2);

        FUNC_0(VAR_5);
    }

    return 0;
}
