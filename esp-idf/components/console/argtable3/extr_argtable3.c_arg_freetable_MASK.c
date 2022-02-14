
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int dummy; } ;


 int FUNC_0 (struct arg_hdr*) ;

void FUNC_1(void * *VAR_0, size_t VAR_1)
{
    struct arg_hdr * *VAR_2 = (struct arg_hdr * *)VAR_0;
    size_t VAR_3 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if (VAR_2[VAR_3] == ((void*)0))
            continue;

        FUNC_0(VAR_2[VAR_3]);
        VAR_2[VAR_3] = ((void*)0);
    };
}
