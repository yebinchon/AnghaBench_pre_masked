
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pix_fmt; int height; int width; } ;
struct TYPE_8__ {TYPE_1__* st; int * tmp_frame; void* frame; TYPE_3__* enc; } ;
struct TYPE_7__ {int codecpar; } ;
typedef TYPE_2__ OutputStream ;
typedef int AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_3__ AVCodecContext ;
typedef int AVCodec ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int *,int **) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_2, AVCodec *VAR_3, OutputStream *VAR_4, AVDictionary *VAR_5)
{
    int VAR_6;
    AVCodecContext *VAR_7 = VAR_4->enc;
    AVDictionary *VAR_8 = ((void*)0);

    FUNC_1(&VAR_8, VAR_5, 0);


    VAR_6 = FUNC_4(VAR_7, VAR_3, &VAR_8);
    FUNC_2(&VAR_8);
    if (VAR_6 < 0) {
        FUNC_7(VAR_1, "Could not open video codec: %s\n", FUNC_3(VAR_6));
        FUNC_6(1);
    }


    VAR_4->frame = FUNC_0(VAR_7->pix_fmt, VAR_7->width, VAR_7->height);
    if (!VAR_4->frame) {
        FUNC_7(VAR_1, "Could not allocate video frame\n");
        FUNC_6(1);
    }




    VAR_4->tmp_frame = ((void*)0);
    if (VAR_7->pix_fmt != VAR_0) {
        VAR_4->tmp_frame = FUNC_0(VAR_0, VAR_7->width, VAR_7->height);
        if (!VAR_4->tmp_frame) {
            FUNC_7(VAR_1, "Could not allocate temporary picture\n");
            FUNC_6(1);
        }
    }


    VAR_6 = FUNC_5(VAR_4->st->codecpar, VAR_7);
    if (VAR_6 < 0) {
        FUNC_7(VAR_1, "Could not copy the stream parameters\n");
        FUNC_6(1);
    }
}
