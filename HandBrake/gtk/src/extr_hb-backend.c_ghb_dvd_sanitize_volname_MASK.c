
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;



__attribute__((used)) static void
FUNC_0(gchar *VAR_0)
{
    gchar *VAR_1, *VAR_2;

    VAR_1 = VAR_2 = VAR_0;
    while (*VAR_2)
    {
        switch(*VAR_2)
        {
        case '<':
            VAR_2++;
            break;
        case '>':
            VAR_2++;
            break;
        default:
            *VAR_1 = *VAR_2 & 0x7f;
            VAR_1++; VAR_2++;
            break;
        }
    }
    *VAR_1 = 0;
}
