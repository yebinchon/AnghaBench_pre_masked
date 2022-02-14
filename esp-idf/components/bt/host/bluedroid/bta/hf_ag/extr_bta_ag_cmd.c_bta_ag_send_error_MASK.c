
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ conn_service; scalar_t__ cmee_enabled; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int INT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(tBTA_AG_SCB *VAR_3, INT16 VAR_4)
{

    if (VAR_3->conn_service == VAR_0 && VAR_3->cmee_enabled) {
        FUNC_0(VAR_3, VAR_1, ((void*)0), VAR_4);
    } else {
        FUNC_0(VAR_3, VAR_2, ((void*)0), 0);
    }
}
