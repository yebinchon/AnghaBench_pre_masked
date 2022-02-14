
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_5)
{
    int VAR_6 = (int)VAR_5;

    FUNC_2("Started %d\n", VAR_6);

    for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {


        FUNC_1( FUNC_5(VAR_3, VAR_0, 1, 0, VAR_4) );


        FUNC_4(VAR_3, FUNC_0(VAR_6));
    }

    FUNC_2("Task %d done\n", VAR_6);
    FUNC_6(VAR_2);
    FUNC_3(((void*)0));
}
