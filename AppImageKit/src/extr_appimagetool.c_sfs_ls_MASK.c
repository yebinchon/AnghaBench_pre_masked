
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_9__ {char* path; int dir_end; } ;
typedef TYPE_1__ sqfs_traverse ;
typedef scalar_t__ sqfs_err ;
struct TYPE_10__ {int fd; } ;
typedef TYPE_2__ sqfs ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;

int FUNC_9(char* VAR_1) {
    sqfs_err VAR_2 = VAR_0;
    sqfs_traverse VAR_3;
    sqfs VAR_4;

    ssize_t VAR_5 = FUNC_0(VAR_1);


    if (VAR_5 < 0)
        FUNC_1("failed to read elf size");

    if ((VAR_2 = FUNC_5(&VAR_4, VAR_1, VAR_5)))
        FUNC_1("sqfs_open_image error");

    if ((VAR_2 = FUNC_8(&VAR_3, &VAR_4, FUNC_4(&VAR_4))))
        FUNC_1("sqfs_traverse_open error");
    while (FUNC_7(&VAR_3, &VAR_2)) {
        if (!VAR_3.dir_end) {
            FUNC_2("%s\n", VAR_3.path);
        }
    }
    if (VAR_2)
        FUNC_1("sqfs_traverse_next error");
    FUNC_6(&VAR_3);

    FUNC_3(VAR_4.fd);
    return 0;
}
