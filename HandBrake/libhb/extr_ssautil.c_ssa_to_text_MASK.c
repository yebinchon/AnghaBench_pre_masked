
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_subtitle_style_context_t ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char * FUNC_3(const char *VAR_0, int *VAR_1,
                          hb_subtitle_style_context_t *VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = 0;
    char *VAR_6 = FUNC_0(FUNC_2(VAR_0) + 1);

    for (VAR_4 = 0; VAR_0[VAR_4] != '\0'; VAR_4++)
    {
        if ((VAR_3 = FUNC_1(VAR_0 + VAR_4, VAR_2)))
        {
            *VAR_1 = VAR_4 + VAR_3;
            VAR_6[VAR_5++] = '\0';
            return VAR_6;
        }

        if (VAR_0[VAR_4] == '\\')
        {
            VAR_4++;
            switch (VAR_0[VAR_4])
            {
                case '\0':
                    VAR_4--;
                    break;
                case 'N':
                case 'n':
                    VAR_6[VAR_5++] = '\n';
                    break;
                case 'h':
                    VAR_6[VAR_5++] = ' ';
                    break;
                default:
                    VAR_6[VAR_5++] = VAR_0[VAR_4];
                    break;
            }
        }
        else
        {
            VAR_6[VAR_5++] = VAR_0[VAR_4];
        }
    }
    *VAR_1 = VAR_4;
    VAR_6[VAR_5++] = '\0';
    return VAR_6;
}
