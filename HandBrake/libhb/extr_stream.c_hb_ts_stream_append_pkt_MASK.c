
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
struct TYPE_8__ {TYPE_2__ ts; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_9__ {int size; int alloc; scalar_t__ data; } ;
struct TYPE_6__ {int packet_len; TYPE_5__* buf; scalar_t__ skipbad; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_3(hb_stream_t *VAR_0, int VAR_1,
                                    const uint8_t *VAR_2, int VAR_3)
{
    if (VAR_0->ts.list[VAR_1].skipbad || VAR_3 <= 0)
        return;

    if (VAR_0->ts.list[VAR_1].buf->size + VAR_3 > VAR_0->ts.list[VAR_1].buf->alloc)
    {
        int VAR_4;

        VAR_4 = FUNC_0(VAR_0->ts.list[VAR_1].buf->alloc * 2,
                   VAR_0->ts.list[VAR_1].buf->size + VAR_3);
        FUNC_1(VAR_0->ts.list[VAR_1].buf, VAR_4);
    }
    FUNC_2(VAR_0->ts.list[VAR_1].buf->data + VAR_0->ts.list[VAR_1].buf->size,
           VAR_2, VAR_3);
    VAR_0->ts.list[VAR_1].buf->size += VAR_3;
    VAR_0->ts.list[VAR_1].packet_len += VAR_3;
}
