
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; } ;


 int VAR_0 ;

int FUNC_0(void * *VAR_1)
{
    struct arg_hdr * *VAR_2 = (struct arg_hdr * *)VAR_1;
    int VAR_3;


    if (!VAR_2)
        return 1;

    VAR_3 = 0;
    do
    {

        if (!VAR_2[VAR_3])
            return 1;
    } while(!(VAR_2[VAR_3++]->flag & VAR_0));

    return 0;
}
