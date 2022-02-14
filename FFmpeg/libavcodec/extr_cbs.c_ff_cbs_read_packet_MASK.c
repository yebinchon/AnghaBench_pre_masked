
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int size; int data; scalar_t__ buf; } ;
struct TYPE_16__ {TYPE_1__* codec; } ;
struct TYPE_15__ {int data_size; int data; int data_ref; } ;
struct TYPE_14__ {int (* split_fragment ) (TYPE_3__*,TYPE_2__*,int ) ;} ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef TYPE_3__ CodedBitstreamContext ;
typedef TYPE_4__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int ) ;

int FUNC_5(CodedBitstreamContext *VAR_1,
                       CodedBitstreamFragment *VAR_2,
                       const AVPacket *VAR_3)
{
    int VAR_4;

    if (VAR_3->buf) {
        VAR_2->data_ref = FUNC_1(VAR_3->buf);
        if (!VAR_2->data_ref)
            return FUNC_0(VAR_0);

        VAR_2->data = VAR_3->data;
        VAR_2->data_size = VAR_3->size;

    } else {
        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3->data, VAR_3->size);
        if (VAR_4 < 0)
            return VAR_4;
    }

    VAR_4 = VAR_1->codec->split_fragment(VAR_1, VAR_2, 0);
    if (VAR_4 < 0)
        return VAR_4;

    return FUNC_3(VAR_1, VAR_2);
}
