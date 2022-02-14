
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int * data; } ;
struct TYPE_6__ {scalar_t__ buffer_ptr; scalar_t__ buffer; int fd; } ;
typedef TYPE_1__ OSSAudioData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    OSSAudioData *VAR_7 = VAR_5->priv_data;
    int VAR_8, VAR_9;
    int VAR_10= VAR_6->size;
    uint8_t *VAR_11= VAR_6->data;

    while (VAR_10 > 0) {
        VAR_8 = FUNC_1(VAR_3 - VAR_7->buffer_ptr, VAR_10);
        FUNC_2(VAR_7->buffer + VAR_7->buffer_ptr, VAR_11, VAR_8);
        VAR_7->buffer_ptr += VAR_8;
        if (VAR_7->buffer_ptr >= VAR_3) {
            for(;;) {
                VAR_9 = FUNC_3(VAR_7->fd, VAR_7->buffer, VAR_3);
                if (VAR_9 > 0)
                    break;
                if (VAR_9 < 0 && (VAR_4 != VAR_0 && VAR_4 != VAR_1))
                    return FUNC_0(VAR_2);
            }
            VAR_7->buffer_ptr = 0;
        }
        VAR_11 += VAR_8;
        VAR_10 -= VAR_8;
    }
    return 0;
}
