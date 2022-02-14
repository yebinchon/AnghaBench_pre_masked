
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char** set; char** unset; } ;
struct TYPE_4__ {int firewall_rules_set; int is_server; int * if_name; int * ext_gw_ip; int * ext_if_name; int * server_port; int * server_ip; int * remote_tun_ip; int * local_tun_ip; int * remote_tun_ip6; int * local_tun_ip6; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char const***,char const* const,int) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(Context *VAR_2, int VAR_3, int VAR_4)
{
    const char * VAR_5[][2] = { { "$LOCAL_TUN_IP6", VAR_2->local_tun_ip6 },
                                { "$REMOTE_TUN_IP6", VAR_2->remote_tun_ip6 },
                                { "$LOCAL_TUN_IP", VAR_2->local_tun_ip },
                                { "$REMOTE_TUN_IP", VAR_2->remote_tun_ip },
                                { "$EXT_IP", VAR_2->server_ip },
                                { "$EXT_PORT", VAR_2->server_port },
                                { "$EXT_IF_NAME", VAR_2->ext_if_name },
                                { "$EXT_GW_IP", VAR_2->ext_gw_ip },
                                { "$IF_NAME", VAR_2->if_name },
                                { ((void*)0), ((void*)0) } };
    const char *const *VAR_6;
    size_t VAR_7;

    if (VAR_2->firewall_rules_set == VAR_3) {
        return 0;
    }
    if ((VAR_6 = (VAR_3 ? FUNC_0(VAR_2->is_server).set
                     : FUNC_0(VAR_2->is_server).unset)) == ((void*)0)) {
        FUNC_1(VAR_1,
                "Routing commands for that operating system have not been "
                "added yet.\n");
        return 0;
    }
    for (VAR_7 = 0; VAR_6[VAR_7] != ((void*)0); VAR_7++) {
        if (FUNC_2(VAR_5, VAR_6[VAR_7], VAR_4) != 0) {
            FUNC_1(VAR_1, "Unable to run [%s]: [%s]\n", VAR_6[VAR_7], FUNC_3(VAR_0));
            return -1;
        }
    }
    VAR_2->firewall_rules_set = VAR_3;
    return 0;
}
