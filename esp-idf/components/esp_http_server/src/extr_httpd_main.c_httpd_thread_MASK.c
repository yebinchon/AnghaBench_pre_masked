
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct httpd_data {TYPE_1__ hd_td; int listen_fd; int ctrl_fd; int msg_fd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct httpd_data*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct httpd_data*) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
    int VAR_5;
    struct httpd_data *VAR_6 = (struct httpd_data *) VAR_4;
    VAR_6->hd_td.status = VAR_2;

    FUNC_0(VAR_1, FUNC_1("web server started"));
    while (1) {
        VAR_5 = FUNC_6(VAR_6);
        if (VAR_5 != VAR_0) {
            break;
        }
    }

    FUNC_0(VAR_1, FUNC_1("web server exiting"));
    FUNC_2(VAR_6->msg_fd);
    FUNC_3(VAR_6->ctrl_fd);
    FUNC_4(VAR_6);
    FUNC_2(VAR_6->listen_fd);
    VAR_6->hd_td.status = VAR_3;
    FUNC_5();
}
