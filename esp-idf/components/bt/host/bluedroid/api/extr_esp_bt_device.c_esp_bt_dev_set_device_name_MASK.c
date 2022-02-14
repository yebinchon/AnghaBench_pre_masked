
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int device_name; } ;
struct TYPE_8__ {TYPE_1__ set_dev_name; } ;
typedef TYPE_3__ btc_dev_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

esp_err_t FUNC_4(const char *VAR_10)
{
    btc_msg_t VAR_11;
    btc_dev_args_t VAR_12;

    if (FUNC_1() != VAR_4) {
        return VAR_7;
    }
    if (!VAR_10){
        return VAR_6;
    }
    if (FUNC_3(VAR_10) > VAR_5) {
        return VAR_6;
    }

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    FUNC_2(VAR_12.set_dev_name.device_name, VAR_10);

    return (FUNC_0(&VAR_11, &VAR_12, sizeof(btc_dev_args_t), ((void*)0)) == VAR_3 ? VAR_9 : VAR_8);
}
