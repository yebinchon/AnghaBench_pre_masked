
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_10__ {size_t layout; uintptr_t h; uintptr_t w; } ;
struct TYPE_12__ {int* stride; TYPE_5__* allocator_data; int ** data; TYPE_2__ p; TYPE_1__* seq_hdr; } ;
struct TYPE_11__ {int pool_size; int pool; } ;
struct TYPE_9__ {size_t hbd; } ;
typedef TYPE_3__ Libdav1dContext ;
typedef TYPE_4__ Dav1dPicture ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (uintptr_t,int) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__**) ;
 int FUNC_6 (int **,int*,int *,int,int,int,int) ;
 int FUNC_7 (int **,int,int,int *,int*) ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_8(Dav1dPicture *VAR_3, void *VAR_4)
{
    Libdav1dContext *VAR_5 = VAR_4;
    enum AVPixelFormat VAR_6 = VAR_2[VAR_3->p.layout][VAR_3->seq_hdr->hbd];
    int VAR_7, VAR_8[4], VAR_9 = FUNC_1(VAR_3->p.h, 128);
    uint8_t *VAR_10, *VAR_11[4];
    AVBufferRef *VAR_12;

    VAR_7 = FUNC_6(VAR_11, VAR_8, ((void*)0), VAR_6, FUNC_1(VAR_3->p.w, 128),
                               VAR_9, VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_7 != VAR_5->pool_size) {
        FUNC_4(&VAR_5->pool);

        VAR_5->pool = FUNC_3(VAR_7 + VAR_0 * 2, ((void*)0));
        if (!VAR_5->pool) {
            VAR_5->pool_size = 0;
            return FUNC_0(VAR_1);
        }
        VAR_5->pool_size = VAR_7;
    }
    VAR_12 = FUNC_2(VAR_5->pool);
    if (!VAR_12)
        return FUNC_0(VAR_1);





    VAR_10 = (uint8_t *)FUNC_1((uintptr_t)VAR_12->data, VAR_0);
    VAR_7 = FUNC_7(VAR_11, VAR_6, VAR_9, VAR_10, VAR_8);
    if (VAR_7 < 0) {
        FUNC_5(&VAR_12);
        return VAR_7;
    }

    VAR_3->data[0] = VAR_11[0];
    VAR_3->data[1] = VAR_11[1];
    VAR_3->data[2] = VAR_11[2];
    VAR_3->stride[0] = VAR_8[0];
    VAR_3->stride[1] = VAR_8[1];
    VAR_3->allocator_data = VAR_12;

    return 0;
}
