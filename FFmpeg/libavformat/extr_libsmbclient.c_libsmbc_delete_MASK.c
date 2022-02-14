
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_6__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_2__ LIBSMBContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_2)
{
    LIBSMBContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;
    struct stat VAR_5;

    if ((VAR_4 = FUNC_3(VAR_2)) < 0)
        goto cleanup;

    if ((VAR_3->fd = FUNC_6(VAR_2->filename, VAR_0, 0666)) < 0) {
        VAR_4 = FUNC_0(VAR_1);
        goto cleanup;
    }

    if (FUNC_5(VAR_3->fd, &VAR_5) < 0) {
        VAR_4 = FUNC_0(VAR_1);
        goto cleanup;
    }

    FUNC_4(VAR_3->fd);
    VAR_3->fd = -1;

    if (FUNC_1(VAR_5.st_mode)) {
        if (FUNC_7(VAR_2->filename) < 0) {
            VAR_4 = FUNC_0(VAR_1);
            goto cleanup;
        }
    } else {
        if (FUNC_8(VAR_2->filename) < 0) {
            VAR_4 = FUNC_0(VAR_1);
            goto cleanup;
        }
    }

    VAR_4 = 0;

cleanup:
    FUNC_2(VAR_2);
    return VAR_4;
}
