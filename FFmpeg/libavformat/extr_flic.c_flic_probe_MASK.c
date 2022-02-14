
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_6)
{
    int VAR_7;

    if(VAR_6->buf_size < VAR_5)
        return 0;

    VAR_7 = FUNC_0(&VAR_6->buf[4]);
    if ((VAR_7 != VAR_2) &&
        (VAR_7 != VAR_3) &&
        (VAR_7 != VAR_4))
        return 0;

    if(FUNC_0(&VAR_6->buf[0x10]) != VAR_1){
        if(FUNC_1(&VAR_6->buf[0x10]) > 2000)
            return 0;
    }

    if( FUNC_0(&VAR_6->buf[0x08]) > 4096
       || FUNC_0(&VAR_6->buf[0x0A]) > 4096)
        return 0;


    return VAR_0 - 1;
}
