
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int outbuf ;
struct TYPE_6__ {scalar_t__ sess_ctx; int free_ctx; scalar_t__ user_ctx; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static esp_err_t FUNC_8(httpd_req_t *VAR_5)
{

    unsigned *VAR_6 = (unsigned *)VAR_5->user_ctx;
    FUNC_0(VAR_3, "/adder visitor count = %d", ++(*VAR_6));

    char VAR_7[10];
    char VAR_8[50];
    int VAR_9;


    VAR_9 = FUNC_2(VAR_5, VAR_7, sizeof(VAR_7));
    if (VAR_9 <= 0) {
        if (VAR_9 == VAR_2) {
            FUNC_4(VAR_5);
        }
        return VAR_0;
    }

    VAR_7[VAR_9] = '\0';
    int VAR_10 = FUNC_1(VAR_7);
    FUNC_0(VAR_3, "/adder PUT handler read %d", VAR_10);


    if (! VAR_5->sess_ctx) {
        FUNC_0(VAR_3, "/adder PUT allocating new session");
        VAR_5->sess_ctx = FUNC_5(sizeof(int));
        VAR_5->free_ctx = VAR_4;
    }
    *(int *)VAR_5->sess_ctx = VAR_10;


    FUNC_6(VAR_8, sizeof(VAR_8),"%d", *((int *)VAR_5->sess_ctx));
    FUNC_3(VAR_5, VAR_8, FUNC_7(VAR_8));
    return VAR_1;
}
