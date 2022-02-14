
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int frame_size; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVAudioFifo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int const FUNC_1 (int *,void**,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,TYPE_2__*,int*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__**,TYPE_2__*,int const) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(AVAudioFifo *VAR_2,
                                 AVFormatContext *VAR_3,
                                 AVCodecContext *VAR_4)
{

    AVFrame *VAR_5;



    const int VAR_6 = FUNC_0(FUNC_2(VAR_2),
                                 VAR_4->frame_size);
    int VAR_7;


    if (FUNC_6(&VAR_5, VAR_4, VAR_6))
        return VAR_0;



    if (FUNC_1(VAR_2, (void **)VAR_5->data, VAR_6) < VAR_6) {
        FUNC_5(VAR_1, "Could not read data from FIFO\n");
        FUNC_3(&VAR_5);
        return VAR_0;
    }


    if (FUNC_4(VAR_5, VAR_3,
                           VAR_4, &VAR_7)) {
        FUNC_3(&VAR_5);
        return VAR_0;
    }
    FUNC_3(&VAR_5);
    return 0;
}
