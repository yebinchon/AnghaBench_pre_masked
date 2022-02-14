
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t gint ;
typedef char gchar ;
typedef int GtkEntry ;


 int FUNC_0 (int *) ;
 char const VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,size_t,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(GtkEntry *VAR_1)
{
    const gchar *VAR_2;
    gint VAR_3, VAR_4;

    VAR_2 = FUNC_1(VAR_1);
    for (VAR_4 = FUNC_3(VAR_2)-1; VAR_4 > 0; VAR_4--)
    {
        if (VAR_2[VAR_4] == '.')
        {
            break;
        }
    }
    for (VAR_3 = VAR_4; VAR_3 >= 0; VAR_3--)
    {
        if (VAR_2[VAR_3] == VAR_0)
        {
            VAR_3++;
            break;
        }
    }
    if (VAR_3 < 0) VAR_3 = 0;
    if (VAR_3 < VAR_4)
    {
        FUNC_2(FUNC_0(VAR_1), VAR_3, VAR_4);
    }
}
