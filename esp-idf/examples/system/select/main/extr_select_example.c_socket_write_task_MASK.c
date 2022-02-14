
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_3)
{
    char VAR_4[20];

    FUNC_4();

    for (uint8_t VAR_5 = 1;; ++VAR_5) {
        FUNC_6(3000 / VAR_1);

        FUNC_2(VAR_4, sizeof(VAR_4), "Socket message S%d", VAR_5);
        int VAR_6 = FUNC_8(VAR_2, VAR_4, FUNC_5(VAR_4));
        if (VAR_6 < 0) {
            FUNC_0(VAR_0, "Socket write error");
        } else {
            FUNC_1(VAR_0, "%d bytes were written to socket: %s", VAR_6, VAR_4);
        }
    }

    FUNC_3();
    FUNC_7(((void*)0));
}
