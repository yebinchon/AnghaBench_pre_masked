
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ignore_sess_ctx_changes; scalar_t__ free_ctx; scalar_t__ sess_ctx; scalar_t__ user_ctx; scalar_t__ aux; scalar_t__ content_len; scalar_t__ uri; scalar_t__ method; scalar_t__ handle; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int httpd_config_t ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static void FUNC_1(httpd_req_t *VAR_0, httpd_config_t *VAR_1)
{
    VAR_0->handle = 0;
    VAR_0->method = 0;
    FUNC_0((char*)VAR_0->uri, 0, sizeof(VAR_0->uri));
    VAR_0->content_len = 0;
    VAR_0->aux = 0;
    VAR_0->user_ctx = 0;
    VAR_0->sess_ctx = 0;
    VAR_0->free_ctx = 0;
    VAR_0->ignore_sess_ctx_changes = 0;
}
