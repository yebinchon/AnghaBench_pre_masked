
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void FUNC_2(void) {
    FUNC_1(VAR_0,"Usage: ./disque-server [/path/to/disque.conf] [options]\n");
    FUNC_1(VAR_0,"       ./disque-server - (read config from stdin)\n");
    FUNC_1(VAR_0,"       ./disque-server -v or --version\n");
    FUNC_1(VAR_0,"       ./disque-server -h or --help\n");
    FUNC_1(VAR_0,"       ./disque-server --test-memory <megabytes>\n\n");
    FUNC_1(VAR_0,"Examples:\n");
    FUNC_1(VAR_0,"       ./disque-server (run the server with default conf)\n");
    FUNC_1(VAR_0,"       ./disque-server /etc/disque/7711.conf\n");
    FUNC_1(VAR_0,"       ./disque-server --port 7777\n");
    FUNC_1(VAR_0,"       ./disque-server --port 7777 --slaveof 127.0.0.1 8888\n");
    FUNC_1(VAR_0,"       ./disque-server /etc/mydisque.conf --loglevel verbose\n\n");
    FUNC_0(1);
}
