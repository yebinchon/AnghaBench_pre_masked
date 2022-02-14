
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int extradata_size; int extradata; } ;
struct TYPE_10__ {TYPE_1__* codec; } ;
struct TYPE_9__ {int (* split_fragment ) (TYPE_2__*,int *,int) ;} ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ CodedBitstreamContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;

int FUNC_3(CodedBitstreamContext *VAR_0,
                          CodedBitstreamFragment *VAR_1,
                          const AVCodecParameters *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2->extradata,
                                 VAR_2->extradata_size);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_3 = VAR_0->codec->split_fragment(VAR_0, VAR_1, 1);
    if (VAR_3 < 0)
        return VAR_3;

    return FUNC_1(VAR_0, VAR_1);
}
