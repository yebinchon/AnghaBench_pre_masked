
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_2__ {int exec_argv; int executable; scalar_t__ maxclients; scalar_t__ configfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int) ;

int FUNC_7(int VAR_8, mstime_t VAR_9) {
    int VAR_10;



    if (FUNC_1(VAR_7.executable,VAR_5) == -1) return VAR_0;


    if (VAR_8 & VAR_2 &&
        VAR_7.configfile &&
        FUNC_5(VAR_7.configfile) == -1) return VAR_0;


    if (VAR_8 & VAR_3 &&
        FUNC_4(VAR_4) != VAR_1) return VAR_0;



    for (VAR_10 = 3; VAR_10 < (int)VAR_7.maxclients + 1024; VAR_10++) FUNC_2(VAR_10);


    if (VAR_9) FUNC_6(VAR_9*1000);
    FUNC_3(VAR_7.executable,VAR_7.exec_argv,VAR_6);


    FUNC_0(1);

    return VAR_0;
}
