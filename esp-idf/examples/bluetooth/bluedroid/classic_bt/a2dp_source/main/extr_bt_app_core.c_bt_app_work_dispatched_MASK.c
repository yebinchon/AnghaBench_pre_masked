
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int param; int event; int (* cb ) (int ,int ) ;} ;
typedef TYPE_1__ bt_app_msg_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(bt_app_msg_t *VAR_0)
{
    if (VAR_0->cb) {
        VAR_0->cb(VAR_0->event, VAR_0->param);
    }
}
