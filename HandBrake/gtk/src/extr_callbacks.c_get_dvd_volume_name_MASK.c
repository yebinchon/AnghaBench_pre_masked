
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (char*,int *,...) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static gchar*
FUNC_9(gpointer VAR_2)
{
    gchar *VAR_3 = ((void*)0);
    gchar *VAR_4;
    gchar *VAR_5;

    VAR_5 = FUNC_7(VAR_2);
    FUNC_3(VAR_1);
    VAR_3 = FUNC_5(FUNC_2(VAR_0, VAR_5));
    FUNC_4(VAR_1);
    if (VAR_3 != ((void*)0))
    {
        if (FUNC_8(VAR_3))
        {
            FUNC_0(VAR_3);
        }



        VAR_4 = FUNC_6("%s - %s", VAR_5, VAR_3);

        FUNC_1(VAR_3);
    }
    else
    {
        VAR_4 = FUNC_6("%s", VAR_5);
    }
    FUNC_1(VAR_5);
    return VAR_4;
}
