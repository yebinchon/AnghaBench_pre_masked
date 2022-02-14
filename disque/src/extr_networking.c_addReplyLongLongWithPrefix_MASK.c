
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
typedef int buf ;
struct TYPE_2__ {int * bulkhdr; int * mbulkhdr; } ;


 long long VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int,long long) ;
 TYPE_1__ VAR_1 ;

void FUNC_3(client *VAR_2, long long VAR_3, char VAR_4) {
    char VAR_5[128];
    int VAR_6;




    if (VAR_4 == '*' && VAR_3 < VAR_0) {
        FUNC_0(VAR_2,VAR_1.mbulkhdr[VAR_3]);
        return;
    } else if (VAR_4 == '$' && VAR_3 < VAR_0) {
        FUNC_0(VAR_2,VAR_1.bulkhdr[VAR_3]);
        return;
    }

    VAR_5[0] = VAR_4;
    VAR_6 = FUNC_2(VAR_5+1,sizeof(VAR_5)-1,VAR_3);
    VAR_5[VAR_6+1] = '\r';
    VAR_5[VAR_6+2] = '\n';
    FUNC_1(VAR_2,VAR_5,VAR_6+3);
}
