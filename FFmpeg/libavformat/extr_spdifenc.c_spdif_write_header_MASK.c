
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_9__ {int hd_buf; int header_info; } ;
struct TYPE_8__ {int codec_id; } ;
struct TYPE_7__ {TYPE_2__* codecpar; } ;
typedef TYPE_3__ IEC61937Context ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_9)
{
    IEC61937Context *VAR_10 = VAR_9->priv_data;

    switch (VAR_9->streams[0]->codecpar->codec_id) {
    case 135:
        VAR_10->header_info = VAR_4;
        break;
    case 133:
        VAR_10->header_info = VAR_6;
        break;
    case 131:
    case 130:
    case 129:
        VAR_10->header_info = VAR_7;
        break;
    case 134:
        VAR_10->header_info = VAR_5;
        break;
    case 136:
        VAR_10->header_info = VAR_3;
        break;
    case 128:
    case 132:
        VAR_10->header_info = VAR_8;
        VAR_10->hd_buf = FUNC_1(VAR_2);
        if (!VAR_10->hd_buf)
            return FUNC_0(VAR_1);
        break;
    default:
        FUNC_2(VAR_9, "Codec %d",
                                      VAR_9->streams[0]->codecpar->codec_id);
        return VAR_0;
    }
    return 0;
}
