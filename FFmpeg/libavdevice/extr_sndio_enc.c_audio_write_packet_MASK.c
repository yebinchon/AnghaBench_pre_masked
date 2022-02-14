
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
struct TYPE_6__ {scalar_t__ buffer_size; scalar_t__ buffer_offset; scalar_t__ buffer; int softpos; int hdl; } ;
typedef TYPE_1__ SndioData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    SndioData *VAR_3 = VAR_1->priv_data;
    uint8_t *VAR_4= VAR_2->data;
    int VAR_5 = VAR_2->size;
    int VAR_6, VAR_7;

    while (VAR_5 > 0) {
        VAR_6 = FUNC_1(VAR_3->buffer_size - VAR_3->buffer_offset, VAR_5);
        FUNC_2(VAR_3->buffer + VAR_3->buffer_offset, VAR_4, VAR_6);
        VAR_4 += VAR_6;
        VAR_5 -= VAR_6;
        VAR_3->buffer_offset += VAR_6;
        if (VAR_3->buffer_offset >= VAR_3->buffer_size) {
            VAR_7 = FUNC_4(VAR_3->hdl, VAR_3->buffer, VAR_3->buffer_size);
            if (VAR_7 == 0 || FUNC_3(VAR_3->hdl))
                return FUNC_0(VAR_0);
            VAR_3->softpos += VAR_7;
            VAR_3->buffer_offset = 0;
        }
    }

    return 0;
}
