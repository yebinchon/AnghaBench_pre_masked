
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
    int VAR_2;

    VAR_2 = FUNC_3(0, &VAR_1);
    FUNC_1(VAR_2 == 0);

    uint8_t VAR_3[6] = {0};
    VAR_2 = FUNC_2(VAR_1, VAR_3, ((void*)0));

    FUNC_0(VAR_0, "Device Address: ");
    FUNC_5(VAR_3);
    FUNC_0(VAR_0, "\n");


    FUNC_4();
}
