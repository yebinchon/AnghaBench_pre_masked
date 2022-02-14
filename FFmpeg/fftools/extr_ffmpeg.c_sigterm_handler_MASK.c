
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
    int VAR_3;
    VAR_1 = VAR_2;
    VAR_0++;
    FUNC_2();
    if(VAR_0 > 3) {
        VAR_3 = FUNC_3(2 , "Received > 3 system signals, hard exiting\n",
                    FUNC_1("Received > 3 system signals, hard exiting\n"));
        if (VAR_3 < 0) { };
        FUNC_0(123);
    }
}
