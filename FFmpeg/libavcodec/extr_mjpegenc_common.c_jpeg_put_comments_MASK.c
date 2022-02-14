
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_6__ {int flags; scalar_t__ pix_fmt; scalar_t__ color_range; TYPE_1__ sample_aspect_ratio; } ;
typedef int PutBitContext ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int) ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int,int) ;
 int FUNC_2 (int*,int*,int,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(AVCodecContext *VAR_10, PutBitContext *VAR_11)
{
    int VAR_12;
    uint8_t *VAR_13;

    if (VAR_10->sample_aspect_ratio.num > 0 && VAR_10->sample_aspect_ratio.den > 0) {
        AVRational VAR_14 = VAR_10->sample_aspect_ratio;

        if (VAR_14.num > 65535 || VAR_14.den > 65535) {
            if (!FUNC_2(&VAR_14.num, &VAR_14.den, VAR_10->sample_aspect_ratio.num, VAR_10->sample_aspect_ratio.den, 65535))
                FUNC_1(VAR_10, VAR_4,
                    "Cannot store exact aspect ratio %d:%d\n",
                    VAR_10->sample_aspect_ratio.num,
                    VAR_10->sample_aspect_ratio.den);
        }


        FUNC_7(VAR_11, VAR_0);
        FUNC_5(VAR_11, 16, 16);
        FUNC_3(VAR_11, "JFIF", 1);



        FUNC_5(VAR_11, 16, 0x0102);
        FUNC_5(VAR_11, 8, 0);
        FUNC_5(VAR_11, 16, VAR_14.num);
        FUNC_5(VAR_11, 16, VAR_14.den);
        FUNC_5(VAR_11, 8, 0);
        FUNC_5(VAR_11, 8, 0);
    }


    if (!(VAR_10->flags & VAR_3)) {
        FUNC_7(VAR_11, VAR_8);
        FUNC_4(VAR_11);
        VAR_13 = FUNC_6(VAR_11);
        FUNC_5(VAR_11, 16, 0);
        FUNC_3(VAR_11, VAR_9, 1);
        VAR_12 = FUNC_8(VAR_9)+3;
        FUNC_0(VAR_13, VAR_12);
    }

    if (((VAR_10->pix_fmt == VAR_5 ||
          VAR_10->pix_fmt == VAR_6 ||
          VAR_10->pix_fmt == VAR_7) && VAR_10->color_range != VAR_1)
        || VAR_10->color_range == VAR_2) {
        FUNC_7(VAR_11, VAR_8);
        FUNC_4(VAR_11);
        VAR_13 = FUNC_6(VAR_11);
        FUNC_5(VAR_11, 16, 0);
        FUNC_3(VAR_11, "CS=ITU601", 1);
        VAR_12 = FUNC_8("CS=ITU601")+3;
        FUNC_0(VAR_13, VAR_12);
    }
}
