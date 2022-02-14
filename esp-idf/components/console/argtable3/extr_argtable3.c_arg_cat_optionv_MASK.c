
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
                     int VAR_5,
                     const char *VAR_6)
{
    VAR_6 = VAR_6 ? VAR_6 : "";

    if (VAR_2)
    {
        const char *VAR_7 = VAR_2;
        while(*VAR_7)
        {

            char VAR_8[3];



            VAR_8[0] = '-';
            VAR_8[1] = *VAR_7;
            VAR_8[2] = 0;

            FUNC_0(&VAR_0, VAR_8, &VAR_1);
            if (*++VAR_7)
                FUNC_0(&VAR_0, VAR_6, &VAR_1);
        }
    }


    if (VAR_2 && VAR_3)
        FUNC_0(&VAR_0, VAR_6, &VAR_1);

    if (VAR_3)
    {
        const char *VAR_9 = VAR_3;
        while(*VAR_9)
        {
            size_t VAR_10;


            FUNC_0(&VAR_0, "--", &VAR_1);


            VAR_10 = FUNC_1(VAR_9, ",");
            FUNC_2(VAR_0, VAR_9, (VAR_10 < VAR_1) ? VAR_10 : VAR_1);
            VAR_9 += VAR_10;


            if (*VAR_9 == ',')
            {
                FUNC_0(&VAR_0, VAR_6, &VAR_1);
                VAR_9++;
            }
        }
    }

    if (VAR_4)
    {
        if (VAR_3)
            FUNC_0(&VAR_0, "=", &VAR_1);
        else if (VAR_2)
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
