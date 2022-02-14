
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct httpd_data {TYPE_1__ hd_td; int ctrl_fd; } ;
struct httpd_ctrl_data {int hc_msg; int hc_work_arg; int (* hc_work ) (int ) ;} ;
typedef int msg ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,...) ;


 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct httpd_ctrl_data*,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct httpd_data *VAR_3)
{
    struct httpd_ctrl_data VAR_4;
    int VAR_5 = FUNC_3(VAR_3->ctrl_fd, &VAR_4, sizeof(VAR_4), 0);
    if (VAR_5 <= 0) {
        FUNC_1(VAR_0, FUNC_2("error in recv (%d)"), VAR_2);
        return;
    }
    if (VAR_5 != sizeof(VAR_4)) {
        FUNC_1(VAR_0, FUNC_2("incomplete msg"));
        return;
    }

    switch (VAR_4.hc_msg) {
    case 128:
        if (VAR_4.hc_work) {
            FUNC_0(VAR_0, FUNC_2("work"));
            (*VAR_4.hc_work)(VAR_4.hc_work_arg);
        }
        break;
    case 129:
        FUNC_0(VAR_0, FUNC_2("shutdown"));
        VAR_3->hd_td.status = VAR_1;
        break;
    default:
        break;
    }
}
