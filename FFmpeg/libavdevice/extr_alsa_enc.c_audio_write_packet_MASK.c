
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {int size; scalar_t__ dts; int duration; int * data; } ;
struct TYPE_9__ {int frame_size; scalar_t__ timestamp; int reorder_buf_size; int h; int * reorder_buf; int (* reorder_func ) (int *,int *,int) ;} ;
typedef TYPE_1__ AlsaData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AlsaData *VAR_7 = VAR_5->priv_data;
    int VAR_8;
    int VAR_9 = VAR_6->size;
    uint8_t *VAR_10 = VAR_6->data;

    VAR_9 /= VAR_7->frame_size;
    if (VAR_6->dts != VAR_1)
        VAR_7->timestamp = VAR_6->dts;
    VAR_7->timestamp += VAR_6->duration ? VAR_6->duration : VAR_9;

    if (VAR_7->reorder_func) {
        if (VAR_9 > VAR_7->reorder_buf_size)
            if (FUNC_2(VAR_7, VAR_9))
                return FUNC_0(VAR_4);
        VAR_7->reorder_func(VAR_10, VAR_7->reorder_buf, VAR_9);
        VAR_10 = VAR_7->reorder_buf;
    }
    while ((VAR_8 = FUNC_4(VAR_7->h, VAR_10, VAR_9)) < 0) {
        if (VAR_8 == -VAR_2) {

            return FUNC_0(VAR_2);
        }

        if (FUNC_3(VAR_5, VAR_8) < 0) {
            FUNC_1(VAR_5, VAR_0, "ALSA write error: %s\n",
                   FUNC_5(VAR_8));

            return FUNC_0(VAR_3);
        }
    }

    return 0;
}
