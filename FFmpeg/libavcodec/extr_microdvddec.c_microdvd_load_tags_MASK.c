
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microdvd_tag {int data1; char key; char* data_string; int data_string_len; int data2; void* persistent; int member_0; } ;


 void* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (struct microdvd_tag*,char*) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (struct microdvd_tag*,struct microdvd_tag) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static char *FUNC_4(struct microdvd_tag *VAR_2, char *VAR_3)
{
    VAR_3 = FUNC_0(VAR_2, VAR_3);

    while (*VAR_3 == '{') {
        char *VAR_4 = VAR_3;
        char VAR_5 = *(VAR_3 + 1);
        struct microdvd_tag VAR_6 = {0};

        if (!VAR_5 || *(VAR_3 + 2) != ':')
            break;
        VAR_3 += 3;

        switch (VAR_5) {


        case 'Y':
            VAR_6.persistent = VAR_0;
        case 'y':
            while (*VAR_3 && *VAR_3 != '}' && VAR_3 - VAR_4 < 256) {
                int VAR_7 = FUNC_1(VAR_1, *VAR_3);

                if (VAR_7 >= 0)
                    VAR_6.data1 |= (1 << VAR_7);
                VAR_3++;
            }
            if (*VAR_3 != '}')
                break;


            VAR_6.key = VAR_5;
            break;


        case 'C':
            VAR_6.persistent = VAR_0;
        case 'c':
            while (*VAR_3 == '$' || *VAR_3 == '#')
                VAR_3++;
            VAR_6.data1 = FUNC_3(VAR_3, &VAR_3, 16) & 0x00ffffff;
            if (*VAR_3 != '}')
                break;
            VAR_6.key = 'c';
            break;


        case 'F':
            VAR_6.persistent = VAR_0;
        case 'f': {
            int VAR_8 = FUNC_1(VAR_3, '}');
            if (VAR_8 < 0)
                break;
            VAR_6.data_string = VAR_3;
            VAR_6.data_string_len = VAR_8;
            VAR_3 += VAR_8;
            VAR_6.key = 'f';
            break;
        }


        case 'S':
            VAR_6.persistent = VAR_0;
        case 's':
            VAR_6.data1 = FUNC_3(VAR_3, &VAR_3, 10);
            if (*VAR_3 != '}')
                break;
            VAR_6.key = 's';
            break;


        case 'H': {

            int VAR_9 = FUNC_1(VAR_3, '}');
            if (VAR_9 < 0)
                break;
            VAR_6.data_string = VAR_3;
            VAR_6.data_string_len = VAR_9;
            VAR_3 += VAR_9;
            VAR_6.key = 'h';
            break;
        }


        case 'P':
            if (!*VAR_3)
                break;
            VAR_6.persistent = VAR_0;
            VAR_6.data1 = (*VAR_3++ == '1');
            if (*VAR_3 != '}')
                break;
            VAR_6.key = 'p';
            break;


        case 'o':
            VAR_6.persistent = VAR_0;
            VAR_6.data1 = FUNC_3(VAR_3, &VAR_3, 10);
            if (*VAR_3 != ',')
                break;
            VAR_3++;
            VAR_6.data2 = FUNC_3(VAR_3, &VAR_3, 10);
            if (*VAR_3 != '}')
                break;
            VAR_6.key = 'o';
            break;

        default:
            break;
        }

        if (VAR_6.key == 0)
            return VAR_4;

        FUNC_2(VAR_2, VAR_6);
        VAR_3++;
    }
    return FUNC_0(VAR_2, VAR_3);
}
