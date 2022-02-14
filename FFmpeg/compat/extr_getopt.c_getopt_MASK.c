
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(int VAR_5, char *VAR_6[], char *VAR_7)
{
    static int VAR_8 = 1;
    int VAR_9;
    char *VAR_10;

    if (VAR_8 == 1) {
        if (VAR_2 >= VAR_5 ||
            VAR_6[VAR_2][0] != '-' || VAR_6[VAR_2][1] == '\0')
            return VAR_0;
        else if (!FUNC_2(VAR_6[VAR_2], "--")) {
            VAR_2++;
            return VAR_0;
        }
    }
    VAR_3 = VAR_9 = VAR_6[VAR_2][VAR_8];
    if (VAR_9 == ':' || !(VAR_10 = FUNC_1(VAR_7, VAR_9))) {
        FUNC_0(VAR_4, ": illegal option -- %c\n", VAR_9);
        if (VAR_6[VAR_2][++VAR_8] == '\0') {
            VAR_2++;
            VAR_8 = 1;
        }
        return '?';
    }
    if (*++VAR_10 == ':') {
        if (VAR_6[VAR_2][VAR_8+1] != '\0')
            VAR_1 = &VAR_6[VAR_2++][VAR_8+1];
        else if(++VAR_2 >= VAR_5) {
            FUNC_0(VAR_4, ": option requires an argument -- %c\n", VAR_9);
            VAR_8 = 1;
            return '?';
        } else
            VAR_1 = VAR_6[VAR_2++];
        VAR_8 = 1;
    } else {
        if (VAR_6[VAR_2][++VAR_8] == '\0') {
            VAR_8 = 1;
            VAR_2++;
        }
        VAR_1 = ((void*)0);
    }

    return VAR_9;
}
