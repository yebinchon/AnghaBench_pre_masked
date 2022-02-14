
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flock {scalar_t__ l_len; scalar_t__ l_start; int l_whence; int l_type; } ;
struct TYPE_3__ {char* dir; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,size_t,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(Wal *VAR_5)
{
    int VAR_6;
    int VAR_7;
    struct flock VAR_8;
    char *VAR_9;
    size_t VAR_10;

    VAR_10 = FUNC_5(VAR_5->dir) + FUNC_5("/lock") + 1;
    if ((VAR_9 = FUNC_2(VAR_10)) == ((void*)0)) {
        FUNC_6("malloc");
        return 0;
    }
    FUNC_4(VAR_9, VAR_10, "%s/lock", VAR_5->dir);

    VAR_7 = FUNC_3(VAR_9, VAR_3|VAR_2, 0600);
    FUNC_1(VAR_9);
    if (VAR_7 == -1) {
        FUNC_6("open");
        return 0;
    }

    VAR_8.l_type = VAR_1;
    VAR_8.l_whence = VAR_4;
    VAR_8.l_start = 0;
    VAR_8.l_len = 0;
    VAR_6 = FUNC_0(VAR_7, VAR_0, &VAR_8);
    if (VAR_6) {
        FUNC_6("fcntl");
        return 0;
    }



    return 1;
}
