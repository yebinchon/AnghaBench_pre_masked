
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT16 ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,char*,int ) ;
 int FUNC_3 (char*,char*,char*,int*,...) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0)
{
    UINT16 VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
    char VAR_6[33];
    UINT16 VAR_7;
    int VAR_8;
    int VAR_9;
    FUNC_0(VAR_0, "+CLCC:");

    VAR_8 = FUNC_3(VAR_0, "%hu,%hu,%hu,%hu,%hu%n",
                 &VAR_1, &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_9);
    if (VAR_8 < 5) {
        return ((void*)0);
    }

    VAR_0 += VAR_9;


    if (*VAR_0 == ',') {
        int VAR_10;

        VAR_10 = FUNC_3(VAR_0, ",\"%32[^\"]\",%hu%n", VAR_6, &VAR_7, &VAR_9);
        if (VAR_10 < 0) {
            return ((void*)0);
        }

        if (VAR_10 == 0) {
            VAR_10 = FUNC_3(VAR_0, ",\"\",%hu%n", &VAR_7, &VAR_9);
            if (VAR_8 < 0) {
                return ((void*)0);
            }


            VAR_10++;
            VAR_6[0] = '\0';
        }

        if (VAR_10 < 2) {
            return ((void*)0);
        }

        VAR_8 += VAR_10;
        VAR_0 += VAR_9;
    }

    FUNC_1(VAR_0);

    if (VAR_8 > 6) {

        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    } else {

        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), 0);
    }

    return VAR_0;
}
