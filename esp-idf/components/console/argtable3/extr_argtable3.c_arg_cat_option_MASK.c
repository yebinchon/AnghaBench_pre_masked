
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char const*,size_t*) ;
 size_t FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static
void FUNC_3(char *VAR_0,
                    size_t VAR_1,
                    const char *VAR_2,
                    const char *VAR_3,
                    const char *VAR_4,
                    int VAR_5)
{
    if (VAR_2)
    {
        char VAR_6[3];



        VAR_6[0] = '-';
        VAR_6[1] = VAR_2[0];
        VAR_6[2] = 0;

        FUNC_0(&VAR_0, VAR_6, &VAR_1);
        if (VAR_4)
        {
            FUNC_0(&VAR_0, " ", &VAR_1);
            if (VAR_5)
            {
                FUNC_0(&VAR_0, "[", &VAR_1);
                FUNC_0(&VAR_0, VAR_4, &VAR_1);
                FUNC_0(&VAR_0, "]", &VAR_1);
            }
            else
                FUNC_0(&VAR_0, VAR_4, &VAR_1);
        }
    }
    else if (VAR_3)
    {
        size_t VAR_7;


        FUNC_0(&VAR_0, "--", &VAR_1);


        VAR_7 = FUNC_1(VAR_3, ",");
        FUNC_2(VAR_0, VAR_3, (VAR_7 < VAR_1) ? VAR_7 : VAR_1);

        if (VAR_4)
        {
            FUNC_0(&VAR_0, "=", &VAR_1);
            if (VAR_5)
            {
                FUNC_0(&VAR_0, "[", &VAR_1);
                FUNC_0(&VAR_0, VAR_4, &VAR_1);
                FUNC_0(&VAR_0, "]", &VAR_1);
            }
            else
                FUNC_0(&VAR_0, VAR_4, &VAR_1);
        }
    }
    else if (VAR_4)
    {
        if (VAR_5)
        {
            FUNC_0(&VAR_0, "[", &VAR_1);
            FUNC_0(&VAR_0, VAR_4, &VAR_1);
            FUNC_0(&VAR_0, "]", &VAR_1);
        }
        else
            FUNC_0(&VAR_0, VAR_4, &VAR_1);
    }
}
