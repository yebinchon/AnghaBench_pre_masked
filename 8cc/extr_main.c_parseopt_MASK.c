
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ,char) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(int VAR_10, char **VAR_11) {
    VAR_0 = FUNC_4();
    for (;;) {
        int VAR_12 = FUNC_3(VAR_10, VAR_11, "I:ED:O:SU:W:acd:f:gm:o:hw");
        if (VAR_12 == -1)
            break;
        switch (VAR_12) {
        case 'I': FUNC_0(VAR_7); break;
        case 'E': VAR_1 = 1; break;
        case 'D': {
            char *VAR_13 = FUNC_8(VAR_7, '=');
            if (VAR_13)
                *VAR_13 = ' ';
            FUNC_1(VAR_0, "#define %s\n", VAR_7);
            break;
        }
        case 'O': break;
        case 'S': VAR_3 = 1; break;
        case 'U':
            FUNC_1(VAR_0, "#undef %s\n", VAR_7);
            break;
        case 'W': FUNC_7(VAR_7); break;
        case 'c': VAR_2 = 1; break;
        case 'f': FUNC_5(VAR_7); break;
        case 'm': FUNC_6(VAR_7); break;
        case 'g': break;
        case 'o': VAR_9 = VAR_7; break;
        case 'w': VAR_5 = 0; break;
        case 'h':
            FUNC_9(0);
        default:
            FUNC_9(1);
        }
    }
    if (VAR_8 != VAR_10 - 1)
        FUNC_9(1);

    if (!VAR_4 && !VAR_1 && !VAR_3 && !VAR_2)
        FUNC_2("One of -a, -c, -E or -S must be specified");
    VAR_6 = VAR_11[VAR_8];
}
