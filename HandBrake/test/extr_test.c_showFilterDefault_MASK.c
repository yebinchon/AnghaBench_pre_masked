
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (int * const,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int *) ;
 int * FUNC_3 (int,char const*,int *,int *) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char*,char) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(FILE* const VAR_11, int VAR_12)
{
    const char * VAR_13 = "default";

    FUNC_0(VAR_11, "                           Default:\n"
                 "                               ");
    switch (VAR_12)
    {
        case 128:
            VAR_13 = VAR_10;
            break;
        case 131:
            VAR_13 = VAR_7;
            break;
        case 138:
            VAR_13 = VAR_0;
            break;
        case 130:
            VAR_13 = VAR_8;
            break;
        case 134:
            VAR_13 = VAR_4;
            break;
        case 135:
            VAR_13 = VAR_3;
            break;
        case 133:
            VAR_13 = VAR_5;
            break;
        case 132:
            VAR_13 = VAR_6;
            break;
        case 137:
            VAR_13 = VAR_1;
            break;
        case 136:
            VAR_13 = VAR_2;
            break;
        default:
            break;
    }
    switch (VAR_12)
    {
        case 134:
        case 130:
        case 138:
        case 128:
        case 131:
        case 135:
        case 133:
        case 132:
        case 137:
        case 136:
        {
            hb_dict_t * VAR_14;
            VAR_14 = FUNC_3(VAR_12, VAR_13,
                                                   ((void*)0), ((void*)0));
            char * VAR_15 = FUNC_2(VAR_12, VAR_14);
            FUNC_6(&VAR_14);

            char ** VAR_16 = FUNC_5(VAR_15, ':');
            char * VAR_17 = "", * VAR_18;
            int VAR_19, VAR_20 = 0;

            for (VAR_19 = 0; VAR_16[VAR_19] != ((void*)0); VAR_19++)
            {
                int VAR_21 = FUNC_7(VAR_16[VAR_19]) + 1;
                if (VAR_20 + VAR_21 > 48)
                {
                    VAR_18 = "\n                               ";
                    VAR_20 = 0;
                }
                else
                {
                    VAR_18 = "";
                }
                FUNC_0(VAR_11, "%s%s%s", VAR_17, VAR_18, VAR_16[VAR_19]);
                VAR_20 += VAR_21;
                VAR_17 = ":";
            }
            FUNC_4(VAR_16);
            FUNC_1(VAR_15);
        } break;
        case 129:
            FUNC_0(VAR_11, "%s", VAR_9);
            break;
        default:
            break;
    }
    FUNC_0(VAR_11, "\n");
}
