
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ frame_type; scalar_t__ frame_size; } ;
struct TYPE_7__ {scalar_t__ data; scalar_t__ size; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef int AVBSFContext ;
typedef TYPE_2__ AC3HeaderInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVBSFContext *VAR_4, AVPacket *VAR_5)
{
    AC3HeaderInfo VAR_6;
    GetBitContext VAR_7;
    int VAR_8;

    VAR_8 = FUNC_3(VAR_4, VAR_5);
    if (VAR_8 < 0)
        return VAR_8;
    VAR_8 = FUNC_4(&VAR_7, VAR_5->data, VAR_5->size);
    if (VAR_8 < 0)
        goto fail;

    VAR_8 = FUNC_2(&VAR_7, &VAR_6);
    if (VAR_8 < 0) {
        VAR_8 = VAR_0;
        goto fail;
    }

    if (VAR_6.frame_type == VAR_3 ||
        VAR_6.frame_type == VAR_1) {
        VAR_5->size = FUNC_0(VAR_6.frame_size, VAR_5->size);
    } else if (VAR_6.frame_type == VAR_2 && VAR_5->size > VAR_6.frame_size) {
        AC3HeaderInfo VAR_9;

        VAR_8 = FUNC_4(&VAR_7, VAR_5->data + VAR_6.frame_size, VAR_5->size - VAR_6.frame_size);
        if (VAR_8 < 0)
            goto fail;

        VAR_8 = FUNC_2(&VAR_7, &VAR_9);
        if (VAR_8 < 0) {
            VAR_8 = VAR_0;
            goto fail;
        }

        if (VAR_9 == VAR_3 ||
            VAR_9 == VAR_1) {
            VAR_5->size -= VAR_6.frame_size;
            VAR_5->data += VAR_6.frame_size;
        } else {
            VAR_5->size = 0;
        }
    } else {
        VAR_5->size = 0;
    }

    return 0;
fail:
    FUNC_1(VAR_5);
    return VAR_8;
}
