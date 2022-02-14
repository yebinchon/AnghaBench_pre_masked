
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, char *VAR_2, int *VAR_3, const char **VAR_4)
{
    if (*VAR_1) {
        *VAR_2 = *VAR_1;
        switch (*VAR_1) {
        case 'g':
            break;
        case 's':
            if (*(++VAR_1) && *VAR_1 != ':') {
                FUNC_0(((void*)0), VAR_0, "Invalid metadata specifier %s.\n", VAR_1);
                FUNC_1(1);
            }
            *VAR_4 = *VAR_1 == ':' ? VAR_1 + 1 : "";
            break;
        case 'c':
        case 'p':
            if (*(++VAR_1) == ':')
                *VAR_3 = FUNC_2(++VAR_1, ((void*)0), 0);
            break;
        default:
            FUNC_0(((void*)0), VAR_0, "Invalid metadata type %c.\n", *VAR_1);
            FUNC_1(1);
        }
    } else
        *VAR_2 = 'g';
}
