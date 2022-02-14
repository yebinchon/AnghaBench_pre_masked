
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int GDir ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int ,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (char*,int const*,int const*) ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static void
FUNC_8(const gchar *VAR_2, gboolean VAR_3)
{
    const gchar *VAR_4;

    if (FUNC_3(VAR_2, VAR_0))
    {
        GDir *VAR_5 = FUNC_1(VAR_2, 0, ((void*)0));
        VAR_4 = FUNC_2(VAR_5);
        while (VAR_4)
        {
            gchar *VAR_6;
            VAR_6 = FUNC_6("%s/%s", VAR_2, VAR_4);
            FUNC_8(VAR_6, VAR_1);
            FUNC_4(VAR_6);
            VAR_4 = FUNC_2(VAR_5);
        }
        if (VAR_3)
            FUNC_5(VAR_2);
        FUNC_0(VAR_5);
    }
    else
    {
        FUNC_7(VAR_2);
    }
}
