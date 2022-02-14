
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ remote_bd_name; int length; } ;
typedef TYPE_4__ tBTM_REMOTE_DEV_NAME ;
struct TYPE_11__ {int event; } ;
struct TYPE_9__ {scalar_t__* bd_name; int bd_addr; } ;
struct TYPE_10__ {TYPE_1__ disc_res; } ;
struct TYPE_13__ {TYPE_3__ hdr; TYPE_2__ result; } ;
typedef TYPE_5__ tBTA_DM_REM_NAME ;
struct TYPE_14__ {scalar_t__ transport; int peer_bdaddr; scalar_t__* peer_name; int name_discover_done; } ;
typedef int BD_NAME ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int,char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7 (tBTM_REMOTE_DEV_NAME *VAR_6)
{
    tBTA_DM_REM_NAME *VAR_7;

    FUNC_0("bta_dm_remname_cback len = %d name=<%s>", VAR_6->length,
                     VAR_6->remote_bd_name);

    VAR_4.name_discover_done = VAR_3;
    FUNC_1((char *)VAR_4.peer_name, sizeof(BD_NAME), (char *)VAR_6->remote_bd_name, (VAR_0));
    VAR_4.peer_name[VAR_0] = 0;

    FUNC_2(&VAR_5);


    if (VAR_4.transport == VAR_2 ) {
        FUNC_3 (VAR_4.peer_bdaddr);
    }


    if ((VAR_7 = (tBTA_DM_REM_NAME *) FUNC_6(sizeof(tBTA_DM_REM_NAME))) != ((void*)0)) {
        FUNC_4 (VAR_7->result.disc_res.bd_addr, VAR_4.peer_bdaddr);
        FUNC_1((char *)VAR_7->result.disc_res.bd_name, sizeof(BD_NAME), (char *)VAR_6->remote_bd_name, (VAR_0));


        VAR_7->result.disc_res.bd_name[VAR_0] = 0;

        VAR_7->hdr.event = VAR_1;
        FUNC_5(VAR_7);
    }
}
