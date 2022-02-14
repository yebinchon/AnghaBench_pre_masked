
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_9__ {int* pix_fmts; int name; } ;
struct TYPE_8__ {scalar_t__ strict_std_compliance; int codec_id; } ;
struct TYPE_7__ {int nb_components; } ;
typedef int AVStream ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVCodec ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int const,int,int,int *) ;
 int* FUNC_4 (int ,int const*) ;

enum AVPixelFormat FUNC_5(AVStream *VAR_3, AVCodecContext *VAR_4, AVCodec *VAR_5, enum AVPixelFormat VAR_6)
{
    if (VAR_5 && VAR_5->pix_fmts) {
        const enum AVPixelFormat *VAR_7 = VAR_5->pix_fmts;
        const AVPixFmtDescriptor *VAR_8 = FUNC_2(VAR_6);

        int VAR_9 = VAR_8 ? VAR_8->nb_components % 2 == 0 : 0;
        enum AVPixelFormat VAR_10= VAR_1;

        if (VAR_4->strict_std_compliance <= VAR_2) {
            VAR_7 = FUNC_4(VAR_4->codec_id, VAR_7);
        }
        for (; *VAR_7 != VAR_1; VAR_7++) {
            VAR_10= FUNC_3(VAR_10, *VAR_7, VAR_6, VAR_9, ((void*)0));
            if (*VAR_7 == VAR_6)
                break;
        }
        if (*VAR_7 == VAR_1) {
            if (VAR_6 != VAR_1)
                FUNC_1(((void*)0), VAR_0,
                       "Incompatible pixel format '%s' for codec '%s', auto-selecting format '%s'\n",
                       FUNC_0(VAR_6),
                       VAR_5->name,
                       FUNC_0(VAR_10));
            return VAR_10;
        }
    }
    return VAR_6;
}
