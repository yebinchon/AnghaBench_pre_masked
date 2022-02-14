
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int uint32_t ;
struct symbol {char* name; unsigned int name_len; char* indirect; unsigned int indirect_len; int flags; } ;
typedef int optionstr ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int VAR_1 ;
 char* FUNC_5 (char*,char,scalar_t__) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int VAR_2 ;
 int FUNC_7 (char*,char*,unsigned int) ;

__attribute__((used)) static uint32_t
FUNC_8(char * VAR_3, vm_size_t VAR_4, struct symbol * VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
    char * VAR_8;
    char * VAR_9;
    char * VAR_10;
    char * VAR_11;

    uint32_t VAR_12;

    VAR_12 = 0;

    for (VAR_8 = VAR_3, VAR_9 = VAR_3; 1; VAR_8 = VAR_11, VAR_9 = VAR_11) {

        char * VAR_13 = ((void*)0);
        char * VAR_14 = ((void*)0);
        unsigned int VAR_15 = 0;
        char * VAR_16 = ((void*)0);
        char * VAR_17 = ((void*)0);
        unsigned int VAR_18 = 0;
        char * VAR_19 = ((void*)0);
        char * VAR_20 = ((void*)0);
        unsigned int VAR_21 = 0;
        char VAR_22[256];
        boolean_t VAR_23 = 0;

        VAR_10 = FUNC_5(VAR_8, '\n', VAR_4 - (VAR_8 - VAR_3));
        if (VAR_10 == ((void*)0)) {
            break;
        }
        VAR_11 = VAR_10 + 1;



        if (VAR_10 == VAR_8) {
            continue;
        }

        *VAR_10 = '\0';



        if (VAR_8[0] == '#') {
            continue;
        }


        while ((VAR_8 < VAR_10) && !FUNC_3(*VAR_8)) {
            VAR_8++;
        }



        if (VAR_8 == VAR_10) {
            continue;
        }



        if (VAR_8[0] == '.') {
            continue;
        }

        VAR_13 = VAR_8;



        while ((*VAR_8 != '\0') && FUNC_3(*VAR_8)) {
            VAR_8++;
        }



        VAR_14 = VAR_8;



        VAR_15 = VAR_14 - VAR_13 + 1;



        if (*VAR_8 != '\0') {
            while ((*VAR_8 != '\0') && FUNC_4(*VAR_8)) {
                VAR_8++;
            }
            if (*VAR_8 == ':') {
                VAR_8++;
                while ((*VAR_8 != '\0') && FUNC_4(*VAR_8)) {
                    VAR_8++;
                }
                if (FUNC_3(*VAR_8)) {
                    VAR_16 = VAR_8;



                    while ((*VAR_8 != '\0') && FUNC_3(*VAR_8)) {
                        VAR_8++;
                    }



                    VAR_17 = VAR_8;



                    VAR_18 = VAR_17 - VAR_16 + 1;

                } else if (*VAR_8 == '\0') {
      FUNC_1(VAR_2, "bad format in symbol line: %s\n", VAR_9);
      FUNC_0(1);
  }
            } else if (*VAR_8 != '\0' && *VAR_8 != '-') {
                FUNC_1(VAR_2, "bad format in symbol line: %s\n", VAR_9);
                FUNC_0(1);
            }
        }



        if (*VAR_8 != '\0') {
            while ((*VAR_8 != '\0') && FUNC_4(*VAR_8)) {
                VAR_8++;
            }

            if (*VAR_8 == '-') {
                VAR_8++;

                if (FUNC_2(*VAR_8)) {
                    VAR_19 = VAR_8;



                    while ((*VAR_8 != '\0') && FUNC_2(*VAR_8)) {
                        VAR_8++;
                    }



                    VAR_20 = VAR_8;
                    VAR_21 = VAR_20 - VAR_19;

                    if (VAR_21 >= sizeof(VAR_22)) {
                        FUNC_1(VAR_2, "option too long in symbol line: %s\n", VAR_9);
                        FUNC_0(1);
                    }
                    FUNC_6(VAR_22, VAR_19, VAR_21);
                    VAR_22[VAR_21] = '\0';



                    if (!FUNC_7(VAR_22, "obsolete", VAR_21)) {
                        VAR_23 = VAR_0;
                    }

                } else if (*VAR_8 == '\0') {
      FUNC_1(VAR_2, "bad format in symbol line: %s\n", VAR_9);
      FUNC_0(1);
  }

            }

        }

        if(VAR_6 >= VAR_7) {
            FUNC_1(VAR_2, "symbol[%d/%d] overflow: %s\n", VAR_6, VAR_7, VAR_9);
            FUNC_0(1);
        }

        *VAR_14 = '\0';
        if (VAR_17) {
            *VAR_17 = '\0';
        }

        VAR_5[VAR_6].name = VAR_13;
        VAR_5[VAR_6].name_len = VAR_15;
        VAR_5[VAR_6].indirect = VAR_16;
        VAR_5[VAR_6].indirect_len = VAR_18;
        VAR_5[VAR_6].flags = (VAR_23) ? VAR_1 : 0;

        VAR_12 += VAR_5[VAR_6].name_len + VAR_5[VAR_6].indirect_len;
        VAR_6++;
    }

    return VAR_12;
}
