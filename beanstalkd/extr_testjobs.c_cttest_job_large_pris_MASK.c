
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Job ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int,int ,int,int ,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5()
{
    Job *VAR_1, *VAR_2;

    FUNC_0(VAR_0, FUNC_4("default"));
    VAR_1 = FUNC_3(1, 0, 1, 0, VAR_0);
    VAR_2 = FUNC_3(-5, 0, 1, 0, VAR_0);

    FUNC_1(FUNC_2(VAR_1, VAR_2), "should be less");

    VAR_1 = FUNC_3(-5, 0, 1, 0, VAR_0);
    VAR_2 = FUNC_3(1, 0, 1, 0, VAR_0);

    FUNC_1(!FUNC_2(VAR_1, VAR_2), "should not be less");
}
