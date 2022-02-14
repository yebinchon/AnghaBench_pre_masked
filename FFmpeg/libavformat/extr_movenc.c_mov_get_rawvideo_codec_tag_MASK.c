
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {scalar_t__ pix_fmt; int tag; int bps; } ;
struct TYPE_7__ {TYPE_1__* par; } ;
struct TYPE_6__ {int codec_tag; scalar_t__ format; int bits_per_coded_sample; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5, MOVTrack *VAR_6)
{
    int VAR_7 = VAR_6->par->codec_tag;
    int VAR_8;
    enum AVPixelFormat VAR_9;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
        if (VAR_6->par->format == VAR_4[VAR_8].pix_fmt) {
            VAR_7 = VAR_4[VAR_8].tag;
            VAR_6->par->bits_per_coded_sample = VAR_4[VAR_8].bps;
            if (VAR_6->par->codec_tag == VAR_4[VAR_8].tag)
                break;
        }
    }

    VAR_9 = FUNC_4(VAR_3,
                                  VAR_6->par->bits_per_coded_sample);
    if (VAR_7 == FUNC_1('r','a','w',' ') &&
        VAR_6->par->format != VAR_9 &&
        VAR_6->par->format != VAR_1 &&
        VAR_6->par->format != VAR_2)
        FUNC_3(VAR_5, VAR_0, "%s rawvideo cannot be written to mov, output file will be unreadable\n",
               FUNC_2(VAR_6->par->format));
    return VAR_7;
}
