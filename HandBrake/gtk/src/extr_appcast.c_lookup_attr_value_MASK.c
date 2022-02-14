
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t gint ;
typedef int gchar ;


 scalar_t__ FUNC_0 (int const*,int const*) ;

__attribute__((used)) static const gchar*
FUNC_1(
    const gchar *VAR_0,
    const gchar **VAR_1,
    const gchar **VAR_2)
{
    gint VAR_3;

    if (VAR_1 == ((void*)0)) return ((void*)0);
    for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++)
    {
        if (FUNC_0(VAR_0, VAR_1[VAR_3]) == 0)
            return VAR_2[VAR_3];
    }
    return ((void*)0);
}
