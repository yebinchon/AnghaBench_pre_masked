
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int mode; } ;
struct TYPE_13__ {scalar_t__ result; TYPE_1__ fcr; } ;
typedef TYPE_4__ tL2CAP_CFG_INFO ;
struct TYPE_11__ {int mode; } ;
struct TYPE_12__ {TYPE_2__ fcr; scalar_t__ fcr_present; } ;
struct TYPE_14__ {int gap_handle; int (* p_callback ) (int ,int ) ;TYPE_3__ cfg; int con_flags; } ;
typedef TYPE_5__ tGAP_CCB ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (UINT16 VAR_4, tL2CAP_CFG_INFO *VAR_5)
{
    tGAP_CCB *VAR_6;


    if ((VAR_6 = FUNC_1 (VAR_4)) == ((void*)0)) {
        return;
    }

    if (VAR_5->result == VAR_2) {
        VAR_6->con_flags |= VAR_0;


        if (VAR_6->cfg.fcr_present) {
            VAR_6->cfg.fcr.mode = VAR_5->fcr.mode;
        } else {
            VAR_6->cfg.fcr.mode = VAR_3;
        }

        FUNC_0 (VAR_6);
    } else {
        VAR_6->p_callback (VAR_6->gap_handle, VAR_1);
        FUNC_2 (VAR_6);
    }
}
