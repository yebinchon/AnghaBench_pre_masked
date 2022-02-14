
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {int seekable; } ;
struct TYPE_17__ {TYPE_8__* pb; int metadata; TYPE_2__* iformat; } ;
struct TYPE_16__ {int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_15__ {int raw_codec_id; } ;
struct TYPE_14__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,int *,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_8__*,int ,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6)
{
    AVStream *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_3(VAR_6, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_4);

    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_id = VAR_6->iformat->raw_codec_id;
    VAR_7->need_parsing = VAR_2;

    FUNC_8(VAR_6);
    if ((VAR_6->pb->seekable & VAR_0) &&
        !FUNC_2(VAR_6->metadata, "", ((void*)0), VAR_3)) {
        int64_t VAR_9 = FUNC_5(VAR_6->pb);
        FUNC_7(VAR_6);
        FUNC_4(VAR_6->pb, VAR_9, VAR_5);
    }

    VAR_8 = FUNC_1(VAR_6);
    if (VAR_8 < 0)
        return VAR_8;


    FUNC_6(VAR_7, 64, 1, 28224000);

    return 0;
}
