
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pix_fmt; TYPE_1__* codec; } ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,int*,int*) ;

void FUNC_1(AVCodecContext *VAR_6, int VAR_7[4], int VAR_8[4])
{
    int VAR_9, VAR_10;

    FUNC_0(VAR_6->pix_fmt, &VAR_9,
                                     &VAR_10);
    if (VAR_6->codec->id == VAR_0 &&
        ( VAR_6->pix_fmt == VAR_1
         || VAR_6->pix_fmt == VAR_3
         || VAR_6->pix_fmt == VAR_2)) {
        VAR_8[0] = VAR_7[0] =
        VAR_8[1] = VAR_7[1] =
        VAR_8[2] = VAR_7[2] =
        VAR_8[3] = VAR_7[3] = 1;
    } else if (VAR_6->pix_fmt == VAR_4 || VAR_6->pix_fmt == VAR_5) {
        VAR_8[0] = VAR_8[1] = VAR_8[2] = 2;
        VAR_7[0] = VAR_7[1] = VAR_7[2] = 1;
    } else {
        VAR_8[0] = 2;
        VAR_8[1] = 2 >> VAR_10;
        VAR_8[2] = 2 >> VAR_10;
        VAR_7[0] = 2;
        VAR_7[1] = 2 >> VAR_9;
        VAR_7[2] = 2 >> VAR_9;
    }
}
