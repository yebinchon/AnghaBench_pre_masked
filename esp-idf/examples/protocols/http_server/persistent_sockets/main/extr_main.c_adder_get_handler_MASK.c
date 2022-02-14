
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int outbuf ;
struct TYPE_4__ {scalar_t__ sess_ctx; int free_ctx; scalar_t__ user_ctx; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static esp_err_t FUNC_5(httpd_req_t *VAR_3)
{

    unsigned *VAR_4 = (unsigned *)VAR_3->user_ctx;
    FUNC_0(VAR_1, "/adder visitor count = %d", ++(*VAR_4));

    char VAR_5[50];


    if (! VAR_3->sess_ctx) {
        FUNC_0(VAR_1, "/adder GET allocating new session");
        VAR_3->sess_ctx = FUNC_2(sizeof(int));
        VAR_3->free_ctx = VAR_2;
        *(int *)VAR_3->sess_ctx = 0;
    }
    FUNC_0(VAR_1, "/adder GET handler send %d", *(int *)VAR_3->sess_ctx);


    FUNC_3(VAR_5, sizeof(VAR_5),"%d", *((int *)VAR_3->sess_ctx));
    FUNC_1(VAR_3, VAR_5, FUNC_4(VAR_5));
    return VAR_0;
}
