
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_2)
{
    uint8_t *VAR_3 = VAR_2->buf;


    if (FUNC_0(VAR_3+4) != VAR_0)
        return 0;

    return VAR_1 / 2;
}
