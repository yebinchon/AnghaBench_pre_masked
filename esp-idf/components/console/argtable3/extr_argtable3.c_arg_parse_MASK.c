
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int dummy; } ;
struct arg_end {int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct arg_hdr**) ;
 int FUNC_1 (struct arg_hdr**,struct arg_end*) ;
 int FUNC_2 (int,char**,struct arg_hdr**,struct arg_end*) ;
 int FUNC_3 (int,char**,struct arg_hdr**,struct arg_end*) ;
 int FUNC_4 (struct arg_end*,struct arg_end*,int ,int *) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (char**) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_1, char * *VAR_2, void * *VAR_3)
{
    struct arg_hdr * *VAR_4 = (struct arg_hdr * *)VAR_3;
    struct arg_end *VAR_5;
    int VAR_6;
    char * *VAR_7 = ((void*)0);




    FUNC_5(VAR_3);


    VAR_6 = FUNC_0(VAR_4);
    VAR_5 = (struct arg_end *)VAR_4[VAR_6];




    if (VAR_1 == 0)
    {

        FUNC_1(VAR_4, VAR_5);


        return VAR_5->count;
    }

    VAR_7 = (char **)FUNC_7(sizeof(char *) * (VAR_1 + 1));
    if (VAR_7)
    {
        int VAR_8;






        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
            VAR_7[VAR_8] = VAR_2[VAR_8];

        VAR_7[VAR_1] = ((void*)0);


        FUNC_2(VAR_1, VAR_7, VAR_4, VAR_5);


        FUNC_3(VAR_1, VAR_7, VAR_4, VAR_5);


        if (VAR_5->count == 0)
            FUNC_1(VAR_4, VAR_5);


        FUNC_6(VAR_7);
    }
    else
    {

        FUNC_4(VAR_5, VAR_5, VAR_0, ((void*)0));
    }

    return VAR_5->count;
}
