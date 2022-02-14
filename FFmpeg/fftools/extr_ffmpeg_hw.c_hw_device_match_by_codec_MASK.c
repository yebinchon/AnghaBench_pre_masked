
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int methods; int device_type; } ;
typedef int HWDevice ;
typedef TYPE_1__ AVCodecHWConfig ;
typedef int AVCodec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static HWDevice *FUNC_2(const AVCodec *VAR_1)
{
    const AVCodecHWConfig *VAR_2;
    HWDevice *VAR_3;
    int VAR_4;
    for (VAR_4 = 0;; VAR_4++) {
        VAR_2 = FUNC_0(VAR_1, VAR_4);
        if (!VAR_2)
            return ((void*)0);
        if (!(VAR_2->methods & VAR_0))
            continue;
        VAR_3 = FUNC_1(VAR_2->device_type);
        if (VAR_3)
            return VAR_3;
    }
}
