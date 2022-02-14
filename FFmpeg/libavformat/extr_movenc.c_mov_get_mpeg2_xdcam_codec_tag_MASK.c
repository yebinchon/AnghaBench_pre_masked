
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
        VAR_5 = FUNC_0('m', '2', 'v', '1');

    if (VAR_4->par->format == VAR_1) {
        if (VAR_4->par->width == 1280 && VAR_4->par->height == 720) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('x','d','v','4');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','v','5');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','v','1');
                else if (VAR_8 == 50) VAR_5 = FUNC_0('x','d','v','a');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('x','d','v','9');
            }
        } else if (VAR_4->par->width == 1440 && VAR_4->par->height == 1080) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('x','d','v','6');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','v','7');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','v','8');
            } else {
                if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','v','3');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','v','2');
            }
        } else if (VAR_4->par->width == 1920 && VAR_4->par->height == 1080) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('x','d','v','d');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','v','e');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','v','f');
            } else {
                if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','v','c');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','v','b');
            }
        }
    } else if (VAR_4->par->format == VAR_2) {
        if (VAR_4->par->width == 1280 && VAR_4->par->height == 720) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('x','d','5','4');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','5','5');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','5','1');
                else if (VAR_8 == 50) VAR_5 = FUNC_0('x','d','5','a');
                else if (VAR_8 == 60) VAR_5 = FUNC_0('x','d','5','9');
            }
        } else if (VAR_4->par->width == 1920 && VAR_4->par->height == 1080) {
            if (!VAR_6) {
                if (VAR_8 == 24) VAR_5 = FUNC_0('x','d','5','d');
                else if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','5','e');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','5','f');
            } else {
                if (VAR_8 == 25) VAR_5 = FUNC_0('x','d','5','c');
                else if (VAR_8 == 30) VAR_5 = FUNC_0('x','d','5','b');
            }
        }
    }

    return VAR_5;
}
