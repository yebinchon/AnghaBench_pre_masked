
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int method; int uri; } ;
typedef TYPE_1__ httpd_uri_t ;
typedef int httpd_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6(httpd_handle_t VAR_3)
{
    int VAR_4;
    char VAR_5[VAR_1+1][FUNC_4(VAR_1)+1];
    httpd_uri_t VAR_6[VAR_1+1];

    for (VAR_4 = 0; VAR_4 < VAR_1 + 1; VAR_4++) {
        FUNC_5(VAR_5[VAR_4],"%d",VAR_4);
        VAR_6[VAR_4] = FUNC_1(VAR_5[VAR_4]);
    }


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_0(FUNC_2(VAR_3, &VAR_6[VAR_4]) == VAR_0);
    }


    FUNC_0(FUNC_2(VAR_3, &VAR_6[VAR_1]) != VAR_0);


    FUNC_0(FUNC_3(VAR_3, VAR_6[0].uri, VAR_6[0].method) == VAR_0);


    FUNC_0(FUNC_3(VAR_3, VAR_6[0].uri, VAR_6[0].method) != VAR_0);


    FUNC_0(FUNC_2(VAR_3, &VAR_6[0]) == VAR_0);


    FUNC_0(FUNC_2(VAR_3, &VAR_6[0]) != VAR_0);


    FUNC_0(FUNC_2(VAR_3, &VAR_6[VAR_1]) != VAR_0);


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_0(FUNC_3(VAR_3, VAR_6[VAR_4].uri, VAR_6[VAR_4].method) == VAR_0);
    }
    VAR_2 = 0;
}
