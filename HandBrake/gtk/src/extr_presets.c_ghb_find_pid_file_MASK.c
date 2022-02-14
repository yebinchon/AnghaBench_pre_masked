
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int *,int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int const*,char*,int*) ;
 scalar_t__ FUNC_12 (int const*,char*,int) ;

int
FUNC_13()
{
    const gchar *VAR_3;
    gchar *VAR_4;

    VAR_4 = FUNC_8(((void*)0));

    if (FUNC_4(VAR_4, VAR_1))
    {
        GDir *VAR_5;
        VAR_5 = FUNC_2(VAR_4, 0, ((void*)0));
        VAR_3 = FUNC_3(VAR_5);
        while (VAR_3)
        {
            if (FUNC_12(VAR_3, "ghb.pid.", 8) == 0)
            {
                gchar *VAR_6;
                int VAR_7;

                FUNC_11(VAR_3, "ghb.pid.%d", &VAR_7);
                VAR_6 = FUNC_6("%s/%s", VAR_4, VAR_3);


                int VAR_8, VAR_9 = 1;

                VAR_8 = FUNC_10(VAR_6, VAR_2);
                if (VAR_8 >= 0)
                {
                    VAR_9 = FUNC_9(VAR_8, VAR_0, 0);
                }
                if (VAR_9 == 0)
                {
                    FUNC_0(VAR_8);
                    FUNC_1(VAR_5);
                    FUNC_7(VAR_6);
                    FUNC_5(VAR_6);
                    FUNC_5(VAR_4);
                    return VAR_7;
                }
                FUNC_5(VAR_6);
                FUNC_0(VAR_8);







            }
            VAR_3 = FUNC_3(VAR_5);
        }
        FUNC_1(VAR_5);
    }
    FUNC_5(VAR_4);
    return -1;
}
