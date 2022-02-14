
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulg ;
typedef int uch ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int ,int ,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_5 ;

int FUNC_12(FILE *VAR_6, ulg *VAR_7, ulg *VAR_8)
{
    uch VAR_9[8];





    FUNC_0(VAR_9, 1, 8, VAR_6);
    if (FUNC_10(VAR_9, 0, 8))
        return 1;




    VAR_4 = FUNC_2(FUNC_5(((void*)0)), ((void*)0), ((void*)0),
        ((void*)0));
    if (!VAR_4)
        return 4;

    VAR_3 = FUNC_1(VAR_4);
    if (!VAR_3) {
        FUNC_3(&VAR_4, ((void*)0), ((void*)0));
        return 4;
    }
    if (FUNC_11(FUNC_7(VAR_4))) {
        FUNC_3(&VAR_4, &VAR_3, ((void*)0));
        return 2;
    }


    FUNC_6(VAR_4, VAR_6);
    FUNC_9(VAR_4, 8);

    FUNC_8(VAR_4, VAR_3);






    FUNC_4(VAR_4, VAR_3, &VAR_5, &VAR_2, &VAR_0, &VAR_1,
      ((void*)0), ((void*)0), ((void*)0));
    *VAR_7 = VAR_5;
    *VAR_8 = VAR_2;




    return 0;
}
