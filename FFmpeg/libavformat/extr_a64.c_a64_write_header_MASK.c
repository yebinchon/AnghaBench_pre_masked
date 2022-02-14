
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int extradata_size; int codec_id; scalar_t__ extradata; } ;
struct TYPE_7__ {int pb; TYPE_1__** streams; } ;
struct TYPE_6__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    AVCodecParameters *VAR_3 = VAR_2->streams[0]->codecpar;
    uint8_t VAR_4[5] = {
        0x00,
        0x40,
        0x00,
        0x00,
        0x00
    };

    if (VAR_3->extradata_size < 4) {
        FUNC_1(VAR_2, VAR_1, "Missing extradata\n");
        return VAR_0;
    }

    switch (VAR_3->codec_id) {
    case 129:
        VAR_4[2] = 0x00;
        VAR_4[3] = FUNC_0(VAR_3->extradata+0);
        VAR_4[4] = 2;
        break;
    case 128:
        VAR_4[2] = 0x01;
        VAR_4[3] = FUNC_0(VAR_3->extradata+0);
        VAR_4[4] = 3;
        break;
    default:
        return VAR_0;
    }
    FUNC_2(VAR_2->pb, VAR_4, 2);
    return 0;
}
