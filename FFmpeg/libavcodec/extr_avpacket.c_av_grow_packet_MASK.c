
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int size; int * data; } ;
struct TYPE_5__ {unsigned int size; int * data; TYPE_3__* buf; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__**,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,unsigned int) ;

int FUNC_6(AVPacket *VAR_3, int VAR_4)
{
    int VAR_5;
    FUNC_1((unsigned)VAR_3->size <= VAR_2 - VAR_0);
    if ((unsigned)VAR_4 >
        VAR_2 - (VAR_3->size + VAR_0))
        return FUNC_0(VAR_1);

    VAR_5 = VAR_3->size + VAR_4 + VAR_0;
    if (VAR_3->buf) {
        size_t VAR_6;
        uint8_t *VAR_7 = VAR_3->data;
        if (VAR_3->data == ((void*)0)) {
            VAR_6 = 0;
            VAR_3->data = VAR_3->buf->data;
        } else {
            VAR_6 = VAR_3->data - VAR_3->buf->data;
            if (VAR_6 > VAR_2 - VAR_5)
                return FUNC_0(VAR_1);
        }

        if (VAR_5 + VAR_6 > VAR_3->buf->size) {
            int VAR_8 = FUNC_3(&VAR_3->buf, VAR_5 + VAR_6);
            if (VAR_8 < 0) {
                VAR_3->data = VAR_7;
                return VAR_8;
            }
            VAR_3->data = VAR_3->buf->data + VAR_6;
        }
    } else {
        VAR_3->buf = FUNC_2(VAR_5);
        if (!VAR_3->buf)
            return FUNC_0(VAR_1);
        if (VAR_3->size > 0)
            FUNC_4(VAR_3->buf->data, VAR_3->data, VAR_3->size);
        VAR_3->data = VAR_3->buf->data;
    }
    VAR_3->size += VAR_4;
    FUNC_5(VAR_3->data + VAR_3->size, 0, VAR_0);

    return 0;
}
