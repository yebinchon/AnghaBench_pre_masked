
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{

    if( VAR_1->buf[0] == 1
       && VAR_1->buf[1] == 1
       && VAR_1->buf[2] == 3
       && VAR_1->buf[3] == 0xB8
       && VAR_1->buf[4] == 0x80
       && VAR_1->buf[5] == 0x60
      )
        return VAR_0-2;

    return 0;
}
