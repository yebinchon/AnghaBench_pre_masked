
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ unchar ;
typedef int ulong ;
struct gdth_cmndinfo {scalar_t__ wait_for_completion; } ;
struct TYPE_10__ {int smp_lock; TYPE_1__* cmd_tab; } ;
typedef TYPE_3__ gdth_ha_str ;
struct TYPE_11__ {TYPE_2__* device; } ;
struct TYPE_9__ {scalar_t__ channel; scalar_t__ id; } ;
struct TYPE_8__ {TYPE_4__* cmnd; } ;
typedef TYPE_4__ Scsi_Cmnd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 struct gdth_cmndinfo* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(gdth_ha_str *VAR_1, int VAR_2, int VAR_3)
{
    ulong VAR_4;
    int VAR_5;
    Scsi_Cmnd *VAR_6;
    struct gdth_cmndinfo *VAR_7;
    unchar VAR_8, VAR_9;

    FUNC_3(&VAR_1->smp_lock, VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        VAR_6 = VAR_1->cmd_tab[VAR_5].cmnd;
        VAR_7 = FUNC_2(VAR_6);

        VAR_8 = VAR_6->device->channel;
        VAR_9 = VAR_6->device->id;
        if (!FUNC_0(VAR_6) && VAR_9 == (unchar)VAR_3 &&
            VAR_8 == (unchar)VAR_2) {
            VAR_7->wait_for_completion = 0;
            FUNC_4(&VAR_1->smp_lock, VAR_4);
            while (!VAR_7->wait_for_completion)
                FUNC_1();
            FUNC_3(&VAR_1->smp_lock, VAR_4);
        }
    }
    FUNC_4(&VAR_1->smp_lock, VAR_4);
}
