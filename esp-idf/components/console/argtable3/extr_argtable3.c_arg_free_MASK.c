
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct arg_hdr*) ;

void FUNC_1(void * *VAR_1)
{
    struct arg_hdr * *VAR_2 = (struct arg_hdr * *)VAR_1;
    int VAR_3 = 0;
    int VAR_4;

    do
    {






        if (VAR_2[VAR_3] == ((void*)0))
            break;

        VAR_4 = VAR_2[VAR_3]->flag;
        FUNC_0(VAR_2[VAR_3]);
        VAR_2[VAR_3++] = ((void*)0);

    } while(!(VAR_4 & VAR_0));
}
