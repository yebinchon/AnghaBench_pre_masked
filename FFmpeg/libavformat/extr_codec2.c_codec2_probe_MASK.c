
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* buf; } ;
typedef TYPE_1__ AVProbeData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_4)
{

    if (FUNC_0(VAR_4->buf) != VAR_0) {
        return 0;
    }



    if (VAR_4->buf[3] != VAR_2 ||
        VAR_4->buf[4] < VAR_3) {
        return 0;
    }


    return VAR_1 + 1;
}
