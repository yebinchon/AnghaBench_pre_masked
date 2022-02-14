
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 char VAR_3 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_4)
{



    if (VAR_4->buf_size < 57)
        return 0;


    if (*VAR_4->buf != 'A' || *(VAR_4->buf + 1) != 'M' || *(VAR_4->buf + 2) != 'V')
        return 0;


    if (VAR_4->buf[43] != 'M' || VAR_4->buf[44] != 'P' || VAR_4->buf[45] != '3')
        return 0;


    if(!(VAR_4->buf[51] && FUNC_0(&VAR_4->buf[52]) | FUNC_0(&VAR_4->buf[54])))
        return 0;


    if(!FUNC_0(&VAR_4->buf[52]) || !FUNC_0(&VAR_4->buf[54]))
    {
        if(!!FUNC_0(&VAR_4->buf[56]))
            return VAR_0;
        else
            return 0;
    }






    if(VAR_4->buf[51] != VAR_3)
        return VAR_0 / 2;





    if (VAR_4->buf_size < VAR_2)
        return VAR_0;

    return VAR_1;
}
