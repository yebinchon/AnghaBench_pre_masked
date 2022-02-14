
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,char const) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, const char *VAR_4)
{
    char VAR_5[1024];

    if (!*VAR_4) return FUNC_0(VAR_1);
    switch (*++VAR_4) {
        case '5':
        case '9':
            VAR_4 = FUNC_4(VAR_4, '/');
            if (!VAR_4) return FUNC_0(VAR_1);
            break;
        default:
            FUNC_1(VAR_3, VAR_0,
                   "Gopher protocol type '%c' not supported yet!\n",
                   *VAR_4);
            return FUNC_0(VAR_1);
    }


    FUNC_3(VAR_5, sizeof(VAR_5), "%s\r\n", VAR_4);

    if (FUNC_2(VAR_3, VAR_5, FUNC_5(VAR_5)) < 0)
        return FUNC_0(VAR_2);

    return 0;
}
