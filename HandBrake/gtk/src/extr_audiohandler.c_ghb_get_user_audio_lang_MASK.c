
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_title_t ;
typedef int gint ;
typedef char gchar ;
typedef int GhbValue ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int const*,int ) ;

const gchar*
FUNC_5(GhbValue *VAR_0, const hb_title_t *VAR_1, gint VAR_2)
{
    GhbValue *VAR_3, *VAR_4;
    const gchar *VAR_5;

    VAR_3 = FUNC_3(VAR_0);
    if (FUNC_1(VAR_3) <= VAR_2)
        return "und";
    VAR_4 = FUNC_0(VAR_3, VAR_2);
    VAR_2 = FUNC_2(VAR_4, "Track");
    VAR_5 = FUNC_4(VAR_1, VAR_2);
    return VAR_5;
}
