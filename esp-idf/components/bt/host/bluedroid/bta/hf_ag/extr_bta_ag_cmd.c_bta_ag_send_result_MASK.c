
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ conn_service; int conn_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int buf ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {char* p_res; scalar_t__ fmt; } ;
typedef scalar_t__ INT16 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int ,char*,int ,int *) ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(tBTA_AG_SCB *VAR_6, UINT8 VAR_7, char *VAR_8, INT16 VAR_9)
{
    char VAR_10[VAR_0 + 16];
    char *VAR_11 = VAR_10;
    UINT16 VAR_12;

    FUNC_3(VAR_10, ((void*)0), sizeof(VAR_10));


    *VAR_11++ = '\r';
    *VAR_11++ = '\n';


    FUNC_1(VAR_11, sizeof(VAR_10), VAR_5[VAR_7].p_res);
    VAR_11 += FUNC_4(VAR_5[VAR_7].p_res);


    if (VAR_5[VAR_7].fmt == VAR_2) {
        VAR_11 += FUNC_5((UINT16) VAR_9, VAR_11);
    } else if (VAR_5[VAR_7].fmt == VAR_3) {
        FUNC_1(VAR_11, sizeof(VAR_10), VAR_8);
        VAR_11 += FUNC_4(VAR_8);
    }

    *VAR_11++ = '\r';
    *VAR_11++ = '\n';
    FUNC_0("bta_ag_send_result: %s", VAR_10);

    FUNC_2(VAR_6->conn_handle, VAR_10, (UINT16) (VAR_11 - VAR_10), &VAR_12);
}
