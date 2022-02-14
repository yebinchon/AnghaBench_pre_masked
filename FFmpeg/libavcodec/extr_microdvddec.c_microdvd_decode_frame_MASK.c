
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct microdvd_tag {int member_0; } ;
struct TYPE_19__ {int str; scalar_t__ len; } ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {char* data; int size; } ;
struct TYPE_16__ {scalar_t__ num_rects; } ;
struct TYPE_15__ {int readorder; } ;
typedef int MICRODVD_TAGS ;
typedef TYPE_1__ FFASSDecoderContext ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVBPrint ;


 int FUNC_0 (TYPE_5__*,char,int) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_5__*,struct microdvd_tag*) ;
 char* FUNC_6 (struct microdvd_tag*,char*) ;
 int FUNC_7 (TYPE_5__*,struct microdvd_tag*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_0,
                                 void *VAR_1, int *VAR_2, AVPacket *VAR_3)
{
    AVSubtitle *VAR_4 = VAR_1;
    AVBPrint VAR_5;
    char *VAR_6 = VAR_3->data;
    char *VAR_7 = VAR_3->data + VAR_3->size;
    FFASSDecoderContext *VAR_8 = VAR_0->priv_data;
    struct microdvd_tag VAR_9[sizeof(MICRODVD_TAGS) - 1] = {{0}};

    if (VAR_3->size <= 0)
        return VAR_3->size;

    FUNC_2(&VAR_5, 0, 2048);


    while (VAR_6 < VAR_7 && *VAR_6) {


        VAR_6 = FUNC_6(VAR_9, VAR_6);
        FUNC_7(&VAR_5, VAR_9);


        while (VAR_6 < VAR_7 && *VAR_6 && *VAR_6 != '|') {
            FUNC_0(&VAR_5, *VAR_6, 1);
            VAR_6++;
        }


        if (VAR_6 < VAR_7 && *VAR_6 == '|') {
            FUNC_5(&VAR_5, VAR_9);
            FUNC_3(&VAR_5, "\\N");
            VAR_6++;
        }
    }
    if (VAR_5.len) {
        int VAR_10 = FUNC_4(VAR_4, VAR_5.str, VAR_8->readorder++, 0, ((void*)0), ((void*)0));
        FUNC_1(&VAR_5, ((void*)0));
        if (VAR_10 < 0)
            return VAR_10;
    }

    *VAR_2 = VAR_4->num_rects > 0;
    return VAR_3->size;
}
