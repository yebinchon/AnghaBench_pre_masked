
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_6__ {int mcast_ttl; int remote_ip; int remote_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_5(void)
{
    if(VAR_6) {
        return VAR_2;
    }
    VAR_6 = FUNC_2();
    if (!VAR_6) {
        return VAR_1;
    }
    if (FUNC_1(VAR_6, VAR_3, VAR_4) != 0) {
        FUNC_4(VAR_6);
        VAR_6 = ((void*)0);
        return VAR_0;
    }
    VAR_6->mcast_ttl = 1;
    VAR_6->remote_port = VAR_4;
    FUNC_0(VAR_6->remote_ip, VAR_8);
    FUNC_3(VAR_6, &VAR_7, VAR_5);
    return VAR_2;
}
