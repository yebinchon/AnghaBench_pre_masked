
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* global_user_ctx; } ;
struct httpd_data {TYPE_1__ config; } ;
typedef scalar_t__ httpd_handle_t ;



void *FUNC_0(httpd_handle_t VAR_0)
{
    return ((struct httpd_data *)VAR_0)->config.global_user_ctx;
}
