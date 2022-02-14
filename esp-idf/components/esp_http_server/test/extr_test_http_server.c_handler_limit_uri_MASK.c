
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* uri; int * user_ctx; int handler; int method; } ;
typedef TYPE_1__ httpd_uri_t ;


 int VAR_0 ;
 int VAR_1 ;

httpd_uri_t FUNC_0 (char* VAR_2)
{
    httpd_uri_t VAR_3 = {
        .uri = VAR_2,
        .method = VAR_0,
        .handler = VAR_1,
        .user_ctx = ((void*)0),
    };
    return VAR_3;
}
