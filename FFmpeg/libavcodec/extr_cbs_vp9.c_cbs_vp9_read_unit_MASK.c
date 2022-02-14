
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data_size; scalar_t__ data; int data_ref; } ;
typedef TYPE_1__ VP9RawFrame ;
struct TYPE_7__ {int data_size; int data; int data_ref; TYPE_1__* content; } ;
typedef int GetBitContext ;
typedef TYPE_2__ CodedBitstreamUnit ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_2__*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(CodedBitstreamContext *VAR_2,
                             CodedBitstreamUnit *VAR_3)
{
    VP9RawFrame *VAR_4;
    GetBitContext VAR_5;
    int VAR_6, VAR_7;

    VAR_6 = FUNC_6(&VAR_5, VAR_3->data, 8 * VAR_3->data_size);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_4(VAR_2, VAR_3, sizeof(*VAR_4),
                                    &VAR_1);
    if (VAR_6 < 0)
        return VAR_6;
    VAR_4 = VAR_3->content;

    VAR_6 = FUNC_3(VAR_2, &VAR_5, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_7 = FUNC_5(&VAR_5);
    FUNC_1(VAR_7 % 8 == 0);
    VAR_7 /= 8;
    FUNC_1(VAR_7 <= VAR_3->data_size);

    if (VAR_7 == VAR_3->data_size) {

    } else {
        VAR_4->data_ref = FUNC_2(VAR_3->data_ref);
        if (!VAR_4->data_ref)
            return FUNC_0(VAR_0);

        VAR_4->data = VAR_3->data + VAR_7;
        VAR_4->data_size = VAR_3->data_size - VAR_7;
    }

    return 0;
}
