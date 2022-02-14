
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int gchar ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int *,int,...) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int*,int*,int*) ;
 int FUNC_7 (int *,int **) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int*,int*) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(const gchar *VAR_1)
{
    gchar *VAR_2, *VAR_3;
    hb_value_t *VAR_4;

    VAR_2 = FUNC_3(((void*)0));
    VAR_3 = FUNC_2 ("%s/%s", VAR_2, VAR_1);
    FUNC_1(VAR_2);
    if (!FUNC_0(VAR_3, VAR_0))
        return -1;
    VAR_4 = FUNC_8(VAR_3);
    FUNC_1(VAR_3);
    if (VAR_4 != ((void*)0))
    {
        int VAR_5, VAR_6, VAR_7;
        int VAR_8, VAR_9, VAR_10;
        FUNC_9(VAR_4, &VAR_8, &VAR_9, &VAR_10);
        FUNC_6(&VAR_5, &VAR_6, &VAR_7);
        if (VAR_8 != VAR_5)
        {

            VAR_2 = FUNC_3(((void*)0));
            VAR_3 = FUNC_2 ("%s/presets.%d.%d.%d.json",
                            VAR_2, VAR_8, VAR_9, VAR_10);
            FUNC_11(VAR_4, VAR_3);
            FUNC_1(VAR_2);
            FUNC_1(VAR_3);
        }

        if (VAR_8 > VAR_5)
        {



            FUNC_10(&VAR_4);
            return -2;
        }

        hb_value_t *VAR_11;
        FUNC_7(VAR_4, &VAR_11);
        FUNC_4(VAR_11);
        if (VAR_8 != VAR_5 || VAR_9 != VAR_6 || VAR_10 != VAR_7)
        {

            FUNC_5();
            FUNC_12();
        }
        FUNC_10(&VAR_11);
        FUNC_10(&VAR_4);
        return 0;
    }
    return -1;
}
