
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resolvbuf ;
typedef int ipv4_t ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int,int ) ;

__attribute__((used)) static ipv4_t FUNC_12(void)
{
    int VAR_5;

    FUNC_9(VAR_3);
    VAR_5 = FUNC_3(FUNC_8(VAR_3, ((void*)0)), VAR_1);
    FUNC_7(VAR_3);
    if (VAR_5 >= 0)
    {
        int VAR_6, VAR_7;
        char VAR_8[2048];

        VAR_6 = FUNC_6(VAR_5, VAR_8, sizeof (VAR_8));
        FUNC_1(VAR_5);
        FUNC_9(VAR_2);
        VAR_7 = FUNC_11(VAR_8, VAR_6, FUNC_8(VAR_2, ((void*)0)));
        FUNC_7(VAR_2);
        if (VAR_7 != -1)
        {
            int VAR_9;
            char VAR_10[32];
            BOOL VAR_11 = VAR_0;
            BOOL VAR_12 = VAR_0;

            for (VAR_9 = VAR_7; VAR_9 < VAR_6; VAR_9++)
            {
                char VAR_13 = VAR_8[VAR_9];


                if (!VAR_11)
                {
                    if (VAR_13 == ' ' || VAR_13 == '\t')
                        continue;
                    else
                        VAR_11 = VAR_4;
                }


                if ((VAR_13 != '.' && (VAR_13 < '0' || VAR_13 > '9')) || (VAR_9 == (VAR_6 - 1)))
                {
                    FUNC_10(VAR_10, VAR_8 + VAR_7, VAR_9 - VAR_7);
                    VAR_10[VAR_9 - VAR_7] = 0;
                    VAR_12 = VAR_4;
                    break;
                }
            }

            if (VAR_12)
            {



                return FUNC_2(VAR_10);
            }
        }
    }

    switch (FUNC_5() % 4)
    {
    case 0:
        return FUNC_0(8,8,8,8);
    case 1:
        return FUNC_0(74,82,42,42);
    case 2:
        return FUNC_0(64,6,64,6);
    case 3:
        return FUNC_0(4,2,2,2);
    }
}
