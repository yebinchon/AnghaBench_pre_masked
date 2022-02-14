
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extradata_size; scalar_t__ extradata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, AVCodecParameters *VAR_1)
{
    if (VAR_1->extradata && VAR_1->extradata_size == 2)
        FUNC_1(VAR_0, VAR_1->extradata, 2);
    else
        FUNC_0(VAR_0, 0x403);
    return 0;
}
