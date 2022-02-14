
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_3)
{
    int VAR_4;

    if ((FUNC_0(&VAR_3->buf[0]) != VAR_1) ||
        (FUNC_0(&VAR_3->buf[8]) != VAR_2) ||
        (FUNC_0(&VAR_3->buf[16]) != 16))
    return 0;


    if (VAR_3->buf_size<512)
        return 0;

    for(VAR_4=44; VAR_4<256; VAR_4++)
        if(VAR_3->buf[VAR_4])
            return 0;

    if(VAR_3->buf[256]!=0x84)
        return 0;

    for(VAR_4=264; VAR_4<512; VAR_4++)
        if(VAR_3->buf[VAR_4])
            return 0;

    return VAR_0;
}
