
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int avail_in; scalar_t__ avail_out; int next_out; int const* next_in; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ bytestream_end; scalar_t__ bytestream; int buf; TYPE_5__ zstream; } ;
typedef TYPE_1__ PNGEncContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
    PNGEncContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    VAR_6->zstream.avail_in = VAR_5;
    VAR_6->zstream.next_in = VAR_4;
    while (VAR_6->zstream.avail_in > 0) {
        VAR_7 = FUNC_0(&VAR_6->zstream, VAR_1);
        if (VAR_7 != VAR_2)
            return -1;
        if (VAR_6->zstream.avail_out == 0) {
            if (VAR_6->bytestream_end - VAR_6->bytestream > VAR_0 + 100)
                FUNC_1(VAR_3, VAR_6->buf, VAR_0);
            VAR_6->zstream.avail_out = VAR_0;
            VAR_6->zstream.next_out = VAR_6->buf;
        }
    }
    return 0;
}
