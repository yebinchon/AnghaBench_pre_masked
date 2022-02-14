
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* p_cmd_buf; int p_user; int (* p_err_cback ) (int ,int ,char*) ;int (* p_cmd_cback ) (int ,size_t,int,char*,scalar_t__) ;TYPE_1__* p_at_tbl; } ;
typedef TYPE_2__ tBTA_AG_AT_CB ;
typedef int UINT8 ;
typedef size_t UINT16 ;
struct TYPE_4__ {scalar_t__* p_cmd; int arg_type; scalar_t__ fmt; scalar_t__ max; scalar_t__ min; } ;
typedef scalar_t__ INT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,size_t,int,char*,scalar_t__) ;
 int FUNC_3 (int ,size_t,int,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*,char*) ;

void FUNC_8(tBTA_AG_AT_CB *VAR_8)
{
    UINT16 VAR_9;
    UINT8 VAR_10;
    char *VAR_11;
    INT16 VAR_12 = 0;

    for (VAR_9 = 0; VAR_8->p_at_tbl[VAR_9].p_cmd[0] != 0; VAR_9++) {
        if (!FUNC_7(VAR_8->p_at_tbl[VAR_9].p_cmd, VAR_8->p_cmd_buf)) {
            break;
        }
    }


    if (VAR_8->p_at_tbl[VAR_9].p_cmd[0] != 0) {

        VAR_11 = VAR_8->p_cmd_buf + FUNC_0(VAR_8->p_at_tbl[VAR_9].p_cmd);

        if (VAR_11[0] == 0) {
            VAR_10 = VAR_2;
        }

        else if (VAR_11[0] == '?' && VAR_11[1] == 0) {
            VAR_10 = VAR_3;
        }

        else if (VAR_11[0] == '=' && VAR_11[1] != 0) {
            if (VAR_11[1] == '?' && VAR_11[2] == 0) {
                VAR_10 = VAR_5;
            } else {
                VAR_10 = VAR_4;
                VAR_11++;
            }
        }

        else {
            VAR_10 = VAR_0;
        }

        if ((VAR_10 & VAR_8->p_at_tbl[VAR_9].arg_type) != 0) {

            if (VAR_10 == VAR_4 && VAR_8->p_at_tbl[VAR_9].fmt == VAR_1) {
                VAR_12 = FUNC_6(VAR_11);
                if (VAR_12 < (INT16) VAR_8->p_at_tbl[VAR_9].min ||
                    VAR_12 > (INT16) VAR_8->p_at_tbl[VAR_9].max) {

                    (*VAR_8->p_err_cback)(VAR_8->p_user, VAR_6, ((void*)0));
                } else {
                    (*VAR_8->p_cmd_cback)(VAR_8->p_user, VAR_9, VAR_10, VAR_11, VAR_12);
                }
            } else {
                (*VAR_8->p_cmd_cback)(VAR_8->p_user, VAR_9, VAR_10, VAR_11, VAR_12);
            }
        } else {

            (*VAR_8->p_err_cback)(VAR_8->p_user, VAR_6, ((void*)0));
        }
    } else {

        (*VAR_8->p_err_cback)(VAR_8->p_user, VAR_7, VAR_8->p_cmd_buf);
    }
}
