
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{

    if (FUNC_0(&VAR_1->buf[0]) != 0x55AA0000)
        return 0;


    if (FUNC_0(&VAR_1->buf[12]) != 22050 || VAR_1->buf[16] != 16 || VAR_1->buf[17] != 0)
        return 0;

    return VAR_0;
}
