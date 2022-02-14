
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_server; char* server_ip_or_name; char* server_port; char* wanted_if_name; char* local_tun_ip; char* remote_tun_ip; char* wanted_ext_gw_ip; int tun_fd; char* if_name; int firewall_rules_set; int server_ip; int * ext_if_name; int ext_gw_ip; } ;
typedef TYPE_1__ Context ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 () ;
 char* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int,char*) ;
 int FUNC_13 (int ,int ) ;
 int VAR_6 ;
 int FUNC_14 (int ,int,char*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*,int ) ;
 int FUNC_18 () ;

int FUNC_19(int VAR_8, char *VAR_9[])
{
    Context VAR_10;
    const char *VAR_11;

    if (VAR_8 < 3) {
        FUNC_18();
    }
    FUNC_7(&VAR_10, 0, sizeof VAR_10);
    VAR_10.is_server = FUNC_15(VAR_9[1], "server") == 0;
    if (FUNC_6(&VAR_10, VAR_9[2]) != 0) {
        FUNC_2(VAR_7, "Unable to load the key file [%s]\n", VAR_9[2]);
        return 1;
    }
    VAR_10.server_ip_or_name = (VAR_8 <= 3 || FUNC_15(VAR_9[3], "auto") == 0) ? ((void*)0) : VAR_9[3];
    if (VAR_10.server_ip_or_name == ((void*)0) && !VAR_10.is_server) {
        FUNC_18();
    }
    VAR_10.server_port = (VAR_8 <= 4 || FUNC_15(VAR_9[4], "auto") == 0) ? VAR_2 : VAR_9[4];
    VAR_10.wanted_if_name = (VAR_8 <= 5 || FUNC_15(VAR_9[5], "auto") == 0) ? ((void*)0) : VAR_9[5];
    VAR_10.local_tun_ip = (VAR_8 <= 6 || FUNC_15(VAR_9[6], "auto") == 0)
                               ? (VAR_10.is_server ? VAR_3 : VAR_0)
                               : VAR_9[6];
    VAR_10.remote_tun_ip = (VAR_8 <= 7 || FUNC_15(VAR_9[7], "auto") == 0)
                                ? (VAR_10.is_server ? VAR_0 : VAR_3)
                                : VAR_9[7];
    VAR_10.wanted_ext_gw_ip = (VAR_8 <= 8 || FUNC_15(VAR_9[8], "auto") == 0) ? ((void*)0) : VAR_9[8];
    VAR_11 = VAR_10.wanted_ext_gw_ip ? VAR_10.wanted_ext_gw_ip : FUNC_4();
    FUNC_14(VAR_10.ext_gw_ip, sizeof VAR_10.ext_gw_ip, "%s", VAR_11 == ((void*)0) ? "" : VAR_11);
    if (VAR_11 == ((void*)0) && !VAR_10.is_server) {
        FUNC_2(VAR_7, "Unable to automatically determine the gateway IP\n");
        return 1;
    }
    if ((VAR_10.ext_if_name = FUNC_3()) == ((void*)0) && VAR_10.is_server) {
        FUNC_2(VAR_7, "Unable to automatically determine the external interface\n");
        return 1;
    }
    FUNC_5(&VAR_10);
    VAR_10.tun_fd = FUNC_16(VAR_10.if_name, VAR_10.wanted_if_name);
    if (VAR_10.tun_fd == -1) {
        FUNC_8("tun device creation");
        return 1;
    }
    FUNC_10("Interface: [%s]\n", VAR_10.if_name);
    if (FUNC_17(VAR_10.if_name, VAR_1) != 0) {
        FUNC_8("mtu");
    }



    VAR_10.firewall_rules_set = -1;
    if (VAR_10.server_ip_or_name != ((void*)0) &&
        FUNC_12(VAR_10.server_ip, sizeof VAR_10.server_ip, VAR_10.server_ip_or_name) != 0) {
        FUNC_1(&VAR_10, 0, 1);
        return 1;
    }
    if (VAR_10.is_server) {
        if (FUNC_1(&VAR_10, 1, 0) != 0) {
            return -1;
        }




    } else {
        FUNC_1(&VAR_10, 0, 1);
    }
    FUNC_13(VAR_4, VAR_6);
    FUNC_13(VAR_5, VAR_6);
    if (FUNC_0(&VAR_10) != 0) {
        return -1;
    }
    FUNC_1(&VAR_10, 0, 0);
    FUNC_11("Done.");

    return 0;
}
