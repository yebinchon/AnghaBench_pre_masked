
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {int act; int pid; int sig; } ;
typedef TYPE_1__ btc_msg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int *) ;

esp_err_t FUNC_2(void)
{
    btc_msg_t VAR_7;

    FUNC_0(VAR_4);

    VAR_7.sig = VAR_2;
    VAR_7.pid = VAR_1;
    VAR_7.act = VAR_0;
    return (FUNC_1(&VAR_7, ((void*)0), 0, ((void*)0)) == VAR_3 ? VAR_6 : VAR_5);
}
