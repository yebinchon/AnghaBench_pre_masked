
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int cache_size; int * buffer_ptr; int * buffer; int * soi_ptr; int buffer_size; } ;
typedef TYPE_1__ MXGContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, unsigned int VAR_3)
{
    MXGContext *VAR_4 = VAR_2->priv_data;
    unsigned int VAR_5 = VAR_4->buffer_ptr - VAR_4->buffer;
    unsigned int VAR_6;
    uint8_t *VAR_7;
    int VAR_8;


    if (VAR_5 > VAR_5 + VAR_3)
        return FUNC_0(VAR_1);
    VAR_6 = VAR_4->soi_ptr - VAR_4->buffer;
    VAR_7 = FUNC_1(VAR_4->buffer, &VAR_4->buffer_size,
                             VAR_5 + VAR_3 +
                             VAR_0);
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_4->buffer = VAR_7;
    VAR_4->buffer_ptr = VAR_4->buffer + VAR_5;
    if (VAR_4->soi_ptr) VAR_4->soi_ptr = VAR_4->buffer + VAR_6;


    VAR_8 = FUNC_2(VAR_2->pb, VAR_4->buffer_ptr + VAR_4->cache_size,
                     VAR_3 - VAR_4->cache_size);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_4->cache_size += VAR_8;

    return VAR_8;
}
