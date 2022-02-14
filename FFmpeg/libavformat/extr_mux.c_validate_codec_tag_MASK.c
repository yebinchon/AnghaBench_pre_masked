
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {scalar_t__ id; scalar_t__ tag; } ;
struct TYPE_11__ {scalar_t__ strict_std_compliance; TYPE_1__* oformat; } ;
struct TYPE_10__ {TYPE_2__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_tag; int codec_id; } ;
struct TYPE_8__ {TYPE_5__** codec_tag; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecTag ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, AVStream *VAR_3)
{
    const AVCodecTag *VAR_4;
    int VAR_5;
    enum AVCodecID VAR_6 = VAR_0;
    int64_t VAR_7 = -1;







    for (VAR_5 = 0; VAR_2->oformat->codec_tag[VAR_5]; VAR_5++) {
        VAR_4 = VAR_2->oformat->codec_tag[VAR_5];
        while (VAR_4->id != VAR_0) {
            if (FUNC_0(VAR_4->tag) == FUNC_0(VAR_3->codecpar->codec_tag)) {
                VAR_6 = VAR_4->id;
                if (VAR_6 == VAR_3->codecpar->codec_id)
                    return 1;
            }
            if (VAR_4->id == VAR_3->codecpar->codec_id)
                VAR_7 = VAR_4->tag;
            VAR_4++;
        }
    }
    if (VAR_6 != VAR_0)
        return 0;
    if (VAR_7 >= 0 && (VAR_2->strict_std_compliance >= VAR_1))
        return 0;
    return 1;
}
