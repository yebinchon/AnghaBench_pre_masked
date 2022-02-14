
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ extradata_size; scalar_t__ extradata; } ;
struct TYPE_6__ {scalar_t__ data_size; int data; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;

int FUNC_6(CodedBitstreamContext *VAR_2,
                           AVCodecParameters *VAR_3,
                           CodedBitstreamFragment *VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_3(VAR_2, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_1(&VAR_3->extradata);

    VAR_3->extradata = FUNC_2(VAR_4->data_size +
                               VAR_0);
    if (!VAR_3->extradata)
        return FUNC_0(VAR_1);

    FUNC_4(VAR_3->extradata, VAR_4->data, VAR_4->data_size);
    FUNC_5(VAR_3->extradata + VAR_4->data_size, 0,
           VAR_0);
    VAR_3->extradata_size = VAR_4->data_size;

    return 0;
}
