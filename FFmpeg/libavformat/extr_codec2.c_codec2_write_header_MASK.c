
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_streams; int pb; TYPE_2__** streams; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;

    if (VAR_5->nb_streams != 1 || VAR_5->streams[0]->codecpar->codec_id != VAR_2) {
        FUNC_1(VAR_5, VAR_3, ".c2 files must have exactly one codec2 stream\n");
        return FUNC_0(VAR_4);
    }

    VAR_6 = VAR_5->streams[0];

    if (VAR_6->codecpar->extradata_size != VAR_0) {
        FUNC_1(VAR_5, VAR_3, ".c2 files require exactly %i bytes of extradata (got %i)\n",
               VAR_0, VAR_6->codecpar->extradata_size);
        return FUNC_0(VAR_4);
    }

    FUNC_2(VAR_5->pb, VAR_1);
    FUNC_3(VAR_5->pb, VAR_6->codecpar->extradata, VAR_0);

    return 0;
}
