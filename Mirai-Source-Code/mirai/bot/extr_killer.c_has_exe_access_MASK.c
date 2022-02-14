
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* VAR_6 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static BOOL FUNC_11(void)
{
    char VAR_7[VAR_2], *VAR_8 = VAR_7, VAR_9[16];
    int VAR_10, VAR_11;

    FUNC_7(VAR_4);
    FUNC_7(VAR_3);


    VAR_8 += FUNC_9(VAR_8, FUNC_6(VAR_4, ((void*)0)));
    VAR_8 += FUNC_9(VAR_8, FUNC_8(FUNC_1(), 10, VAR_9));
    VAR_8 += FUNC_9(VAR_8, FUNC_6(VAR_3, ((void*)0)));


    if ((VAR_10 = FUNC_2(VAR_7, VAR_1)) == -1)
    {



        return VAR_0;
    }
    FUNC_0(VAR_10);

    FUNC_5(VAR_4);
    FUNC_5(VAR_3);

    if ((VAR_11 = FUNC_4(VAR_7, VAR_6, VAR_2 - 1)) != -1)
    {
        VAR_6[VAR_11] = 0;



    }

    FUNC_10(VAR_7, VAR_8 - VAR_7);

    return VAR_5;
}
