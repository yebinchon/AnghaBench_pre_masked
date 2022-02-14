
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode_changed; char* server_addr; int server_port; int create_radius; int render_radius; int delete_radius; int block1; int block0; int db_path; void* mode; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int,int,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int,char*,char*,...) ;
 int FUNC_12 (int *,int,int,int,int,int) ;
 int FUNC_13 (char const*,char*,...) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int *) ;

void FUNC_17(const char *VAR_7, int VAR_8) {
    char VAR_9[128] = {0};
    char VAR_10[128] = {0};
    char VAR_11[VAR_2];
    int VAR_12 = VAR_1;
    char VAR_13[VAR_3];
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    if (FUNC_13(VAR_7, "/identity %128s %128s", VAR_9, VAR_10) == 2) {
        FUNC_8(VAR_9, VAR_10);
        FUNC_0("Successfully imported identity token!");
        FUNC_9();
    }
    else if (FUNC_14(VAR_7, "/logout") == 0) {
        FUNC_7();
        FUNC_9();
    }
    else if (FUNC_13(VAR_7, "/login %128s", VAR_9) == 1) {
        if (FUNC_6(VAR_9)) {
            FUNC_9();
        }
        else {
            FUNC_0("Unknown username.");
        }
    }
    else if (FUNC_13(VAR_7,
        "/online %128s %d", VAR_11, &VAR_12) >= 1)
    {
        VAR_6->mode_changed = 1;
        VAR_6->mode = VAR_5;
        FUNC_15(VAR_6->server_addr, VAR_11, VAR_2);
        VAR_6->server_port = VAR_12;
        FUNC_11(VAR_6->db_path, VAR_3,
            "cache.%s.%d.db", VAR_6->server_addr, VAR_6->server_port);
    }
    else if (FUNC_13(VAR_7, "/offline %128s", VAR_13) == 1) {
        VAR_6->mode_changed = 1;
        VAR_6->mode = VAR_4;
        FUNC_11(VAR_6->db_path, VAR_3, "%s.db", VAR_13);
    }
    else if (FUNC_14(VAR_7, "/offline") == 0) {
        VAR_6->mode_changed = 1;
        VAR_6->mode = VAR_4;
        FUNC_11(VAR_6->db_path, VAR_3, "%s", VAR_0);
    }
    else if (FUNC_13(VAR_7, "/view %d", &VAR_14) == 1) {
        if (VAR_14 >= 1 && VAR_14 <= 24) {
            VAR_6->create_radius = VAR_14;
            VAR_6->render_radius = VAR_14;
            VAR_6->delete_radius = VAR_14 + 4;
        }
        else {
            FUNC_0("Viewing distance must be between 1 and 24.");
        }
    }
    else if (FUNC_14(VAR_7, "/copy") == 0) {
        FUNC_3();
    }
    else if (FUNC_14(VAR_7, "/paste") == 0) {
        FUNC_10();
    }
    else if (FUNC_14(VAR_7, "/tree") == 0) {
        FUNC_16(&VAR_6->block0);
    }
    else if (FUNC_13(VAR_7, "/array %d %d %d", &VAR_16, &VAR_17, &VAR_18) == 3) {
        FUNC_1(&VAR_6->block1, &VAR_6->block0, VAR_16, VAR_17, VAR_18);
    }
    else if (FUNC_13(VAR_7, "/array %d", &VAR_15) == 1) {
        FUNC_1(&VAR_6->block1, &VAR_6->block0, VAR_15, VAR_15, VAR_15);
    }
    else if (FUNC_14(VAR_7, "/fcube") == 0) {
        FUNC_4(&VAR_6->block0, &VAR_6->block1, 1);
    }
    else if (FUNC_14(VAR_7, "/cube") == 0) {
        FUNC_4(&VAR_6->block0, &VAR_6->block1, 0);
    }
    else if (FUNC_13(VAR_7, "/fsphere %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 1, 0, 0, 0);
    }
    else if (FUNC_13(VAR_7, "/sphere %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 0, 0, 0, 0);
    }
    else if (FUNC_13(VAR_7, "/fcirclex %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 1, 1, 0, 0);
    }
    else if (FUNC_13(VAR_7, "/circlex %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 0, 1, 0, 0);
    }
    else if (FUNC_13(VAR_7, "/fcircley %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 1, 0, 1, 0);
    }
    else if (FUNC_13(VAR_7, "/circley %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 0, 0, 1, 0);
    }
    else if (FUNC_13(VAR_7, "/fcirclez %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 1, 0, 0, 1);
    }
    else if (FUNC_13(VAR_7, "/circlez %d", &VAR_14) == 1) {
        FUNC_12(&VAR_6->block0, VAR_14, 0, 0, 0, 1);
    }
    else if (FUNC_13(VAR_7, "/fcylinder %d", &VAR_14) == 1) {
        FUNC_5(&VAR_6->block0, &VAR_6->block1, VAR_14, 1);
    }
    else if (FUNC_13(VAR_7, "/cylinder %d", &VAR_14) == 1) {
        FUNC_5(&VAR_6->block0, &VAR_6->block1, VAR_14, 0);
    }
    else if (VAR_8) {
        FUNC_2(VAR_7);
    }
}
