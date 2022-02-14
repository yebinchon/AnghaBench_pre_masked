
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GVariant ;
typedef int GError ;
typedef int GDBusProxy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int *,int ,int,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static gboolean
FUNC_8()
{
    gboolean VAR_5 = VAR_0;

    GDBusProxy *VAR_6;
    GError *VAR_7 = ((void*)0);
    GVariant *VAR_8;

    VAR_6 = FUNC_7(VAR_3,
                            VAR_2, VAR_1);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_8 = FUNC_1(VAR_6, "CanShutdown", ((void*)0),
                                 VAR_4, -1, ((void*)0), &VAR_7);
    FUNC_3(FUNC_0(VAR_6));
    if (!VAR_8)
    {
        if (VAR_7 != ((void*)0))
        {
            FUNC_2(VAR_7);
        }

        VAR_5 = FUNC_6();
    }
    else
    {
        FUNC_4(VAR_8, "(b)", &VAR_5);
        FUNC_5(VAR_8);
    }

    return VAR_5;
}
