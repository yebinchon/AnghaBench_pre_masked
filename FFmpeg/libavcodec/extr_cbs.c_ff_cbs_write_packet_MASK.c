
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int data; int * buf; } ;
struct TYPE_6__ {int data_size; int data; int data_ref; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,TYPE_1__*) ;

int FUNC_4(CodedBitstreamContext *VAR_1,
                        AVPacket *VAR_2,
                        CodedBitstreamFragment *VAR_3)
{
    AVBufferRef *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_1, VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_4 = FUNC_1(VAR_3->data_ref);
    if (!VAR_4)
        return FUNC_0(VAR_0);

    FUNC_2(&VAR_2->buf);

    VAR_2->buf = VAR_4;
    VAR_2->data = VAR_3->data;
    VAR_2->size = VAR_3->data_size;

    return 0;
}
