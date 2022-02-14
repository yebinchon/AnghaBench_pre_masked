
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    int VAR_2;

    if (VAR_1->buf_size < 258)
        return 0;



    for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
        if (VAR_1->buf[VAR_2])
            return 0;

    if(VAR_1->buf[256]==0 && VAR_1->buf[257]==0)
        return 0;


    return VAR_0 / 4;
}
