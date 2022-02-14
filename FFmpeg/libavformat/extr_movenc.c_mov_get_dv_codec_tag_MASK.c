
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* st; TYPE_1__* par; } ;
struct TYPE_7__ {int den; } ;
struct TYPE_8__ {TYPE_2__ time_base; } ;
struct TYPE_6__ {int width; int height; scalar_t__ format; } ;
typedef TYPE_4__ MOVTrack ;
typedef int AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, MOVTrack *VAR_4)
{
    int VAR_5;

    if (VAR_4->par->width == 720) {
        if (VAR_4->par->height == 480) {
            if (VAR_4->par->format == VAR_2) VAR_5 = FUNC_0('d','v','5','n');
            else VAR_5 = FUNC_0('d','v','c',' ');
       }else if (VAR_4->par->format == VAR_2) VAR_5 = FUNC_0('d','v','5','p');
        else if (VAR_4->par->format == VAR_1) VAR_5 = FUNC_0('d','v','c','p');
        else VAR_5 = FUNC_0('d','v','p','p');
    } else if (VAR_4->par->height == 720) {
        if (VAR_4->st->time_base.den == 50) VAR_5 = FUNC_0('d','v','h','q');
        else VAR_5 = FUNC_0('d','v','h','p');
    } else if (VAR_4->par->height == 1080) {
        if (VAR_4->st->time_base.den == 25) VAR_5 = FUNC_0('d','v','h','5');
        else VAR_5 = FUNC_0('d','v','h','6');
    } else {
        FUNC_1(VAR_3, VAR_0, "unsupported height for dv codec\n");
        return 0;
    }

    return VAR_5;
}
