
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extradata_size; scalar_t__ extradata; } ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

int FUNC_4(AVCodecParameters *VAR_4, int VAR_5)
{
    FUNC_1(&VAR_4->extradata);
    VAR_4->extradata_size = 0;

    if (VAR_5 < 0 || VAR_5 >= VAR_3 - VAR_0)
        return FUNC_0(VAR_1);

    VAR_4->extradata = FUNC_2(VAR_5 + VAR_0);
    if (!VAR_4->extradata)
        return FUNC_0(VAR_2);

    FUNC_3(VAR_4->extradata + VAR_5, 0, VAR_0);
    VAR_4->extradata_size = VAR_5;

    return 0;
}
