
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* codec; } ;
struct TYPE_7__ {int (* split_fragment ) (TYPE_2__*,int *,int ) ;} ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ CodedBitstreamContext ;


 int FUNC_0 (TYPE_2__*,int *,int const*,size_t) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;

int FUNC_3(CodedBitstreamContext *VAR_0,
                CodedBitstreamFragment *VAR_1,
                const uint8_t *VAR_2, size_t VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_4 = VAR_0->codec->split_fragment(VAR_0, VAR_1, 0);
    if (VAR_4 < 0)
        return VAR_4;

    return FUNC_1(VAR_0, VAR_1);
}
