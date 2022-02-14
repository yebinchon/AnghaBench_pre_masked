
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,int) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (!FUNC_0("OggS", VAR_1->buf, 5) && VAR_1->buf[5] <= 0x7)
        return VAR_0;
    return 0;
}
