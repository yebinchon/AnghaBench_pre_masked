
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extradata_size; int extradata; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{

    VAR_0->extradata_size = 8;
    VAR_0->extradata = FUNC_0(VAR_0->extradata_size);
    return 0;
}
