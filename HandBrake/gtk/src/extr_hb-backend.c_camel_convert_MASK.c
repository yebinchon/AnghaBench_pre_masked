
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef char gchar ;





__attribute__((used)) static void
FUNC_0(gchar *VAR_0)
{
    gint VAR_1 = 128;

    if (VAR_0 == ((void*)0)) return;
    while (*VAR_0)
    {
        if (*VAR_0 == '_') *VAR_0 = ' ';
        switch (VAR_1)
        {
            case 128:
            {
                if (*VAR_0 >= 'A' && *VAR_0 <= 'Z')
                    VAR_1 = 129;
                else
                    VAR_1 = 128;

            } break;
            case 129:
            {
                if (*VAR_0 >= 'A' && *VAR_0 <= 'Z')
                    *VAR_0 = *VAR_0 - 'A' + 'a';
                else
                    VAR_1 = 128;
            } break;
        }
        VAR_0++;
    }
}
