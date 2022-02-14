
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int buf ;
struct TYPE_4__ {char* rdb_filename; } ;
struct TYPE_3__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 unsigned long long FUNC_6 (int) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void) {
    int VAR_7 = VAR_4->fd;
    int VAR_8;
    unsigned long long VAR_9 = FUNC_6(VAR_7);
    char VAR_10[4096];

    FUNC_2(VAR_6,"SYNC sent to master, writing %llu bytes to '%s'\n",
        VAR_9, VAR_3.rdb_filename);


    if (!FUNC_7(VAR_3.rdb_filename,"-")) {
        VAR_8 = VAR_2;
    } else {
        VAR_8 = FUNC_4(VAR_3.rdb_filename, VAR_0|VAR_1, 0644);
        if (VAR_8 == -1) {
            FUNC_2(VAR_6, "Error opening '%s': %s\n", VAR_3.rdb_filename,
                FUNC_8(VAR_5));
            FUNC_1(1);
        }
    }

    while(VAR_9) {
        ssize_t VAR_11, VAR_12;

        VAR_11 = FUNC_5(VAR_7,VAR_10,(VAR_9 > sizeof(VAR_10)) ? sizeof(VAR_10) : VAR_9);
        if (VAR_11 <= 0) {
            FUNC_2(VAR_6,"I/O Error reading RDB payload from socket\n");
            FUNC_1(1);
        }
        VAR_12 = FUNC_9(VAR_8, VAR_10, VAR_11);
        if (VAR_12 != VAR_11) {
            FUNC_2(VAR_6,"Error writing data to file: %s\n",
                FUNC_8(VAR_5));
            FUNC_1(1);
        }
        VAR_9 -= VAR_11;
    }
    FUNC_0(VAR_7);
    FUNC_3(VAR_8);
    FUNC_2(VAR_6,"Transfer finished with success.\n");
    FUNC_1(0);
}
