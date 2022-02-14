
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rdbuf ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static BOOL FUNC_7(char *VAR_8)
{
    int VAR_9, VAR_10;
    char VAR_11[4096];
    char *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    BOOL VAR_22 = VAR_0;

    if ((VAR_9 = FUNC_2(VAR_8, VAR_1)) == -1)
        return VAR_0;

    FUNC_6(VAR_2);
    FUNC_6(VAR_3);
    FUNC_6(VAR_4);
    FUNC_6(VAR_5);
    FUNC_6(VAR_6);

    VAR_12 = FUNC_5(VAR_2, &VAR_17);
    VAR_13 = FUNC_5(VAR_3, &VAR_18);
    VAR_14 = FUNC_5(VAR_4, &VAR_19);
    VAR_15 = FUNC_5(VAR_5, &VAR_20);
    VAR_16 = FUNC_5(VAR_6, &VAR_21);

    while ((VAR_10 = FUNC_3(VAR_9, VAR_11, sizeof (VAR_11))) > 0)
    {
        if (FUNC_1(VAR_11, VAR_10, VAR_12, VAR_17) ||
            FUNC_1(VAR_11, VAR_10, VAR_13, VAR_18) ||
            FUNC_1(VAR_11, VAR_10, VAR_14, VAR_19) ||
            FUNC_1(VAR_11, VAR_10, VAR_15, VAR_20) ||
            FUNC_1(VAR_11, VAR_10, VAR_16, VAR_21))
        {
            VAR_22 = VAR_7;
            break;
        }
    }

    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);

    FUNC_0(VAR_9);

    return VAR_22;
}
