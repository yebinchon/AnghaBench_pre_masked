
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_8__ {int id; } ;
typedef TYPE_1__ AVCodec ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static const AVCodec *FUNC_3(enum AVCodecID VAR_0, const AVCodec *VAR_1,
                                        int VAR_2)
{
    while ((VAR_1 = FUNC_2(VAR_1))) {
        if (VAR_1->id == VAR_0 &&
            (VAR_2 ? FUNC_1(VAR_1) : FUNC_0(VAR_1)))
            return VAR_1;
    }
    return ((void*)0);
}
