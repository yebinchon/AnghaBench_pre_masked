
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* par; int * st; } ;
struct TYPE_4__ {int codec_tag; scalar_t__ field_order; scalar_t__ format; int width; int height; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVStream ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, MOVTrack *VAR_4)
{
    int VAR_5 = VAR_4->par->codec_tag;
    int VAR_6 = VAR_4->par->field_order > VAR_0;
    AVStream *VAR_7 = VAR_4->st;
    int VAR_8 = FUNC_1(VAR_3, VAR_7);

    if (!VAR_5)
        VAR_5 = FUNC_0('a', 'v', 'c', 'i');

    if (VAR_4->par->format == VAR_1) {
        if (VAR_4->par->width == 960 && VAR_4->par->height == 720) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('a','i','5','p');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('a','i','5','q');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('a','i','5','p');
                else if (VAR_8 == 50) VAR_5 = FUNC_0('a','i','5','q');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('a','i','5','p');
            }
        } else if (VAR_4->par->width == 1440 && VAR_4->par->height == 1080) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('a','i','5','3');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('a','i','5','2');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('a','i','5','3');
            } else {
                if (VAR_8 == 50) VAR_5 = FUNC_0('a','i','5','5');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('a','i','5','6');
            }
        }
    } else if (VAR_4->par->format == VAR_2) {
        if (VAR_4->par->width == 1280 && VAR_4->par->height == 720) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('a','i','1','p');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('a','i','1','q');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('a','i','1','p');
                else if (VAR_8 == 50) VAR_5 = FUNC_0('a','i','1','q');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('a','i','1','p');
            }
        } else if (VAR_4->par->width == 1920 && VAR_4->par->height == 1080) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('a','i','1','3');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('a','i','1','2');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('a','i','1','3');
            } else {
                if (VAR_8 == 25) VAR_5 = FUNC_0('a','i','1','5');
                else if (VAR_8 == 50) VAR_5 = FUNC_0('a','i','1','5');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('a','i','1','6');
            }
        } else if ( VAR_4->par->width == 4096 && VAR_4->par->height == 2160
                   || VAR_4->par->width == 3840 && VAR_4->par->height == 2160
                   || VAR_4->par->width == 2048 && VAR_4->par->height == 1080) {
            VAR_5 = FUNC_0('a','i','v','x');
        }
    }

    return VAR_5;
}
