
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ EventBits_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int ,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_11(void)
{
    char VAR_3[19];
    uint8_t VAR_4[6];
    EventBits_t VAR_5;

    FUNC_5();

    FUNC_3();

    FUNC_8("SoftAP mac", VAR_3, 19);

    FUNC_1(FUNC_7(VAR_3, VAR_4));

    FUNC_9(VAR_4);

    FUNC_6("STA connected");

    VAR_5 = FUNC_10(VAR_2, VAR_0, 1, 0, 60000 / VAR_1);

    FUNC_2("wait finish\n");
    FUNC_0(VAR_5 == 0);

    FUNC_4();
}
