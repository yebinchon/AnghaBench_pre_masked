
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; int iswopen; scalar_t__ resv; TYPE_1__* w; scalar_t__ free; int path; } ;
struct TYPE_5__ {scalar_t__ filesize; } ;
typedef TYPE_2__ File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int*,int) ;

void
FUNC_7(File *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7;
    int VAR_8 = VAR_2;

    VAR_5 = FUNC_3(VAR_4->path, VAR_1|VAR_0, 0400);
    if (VAR_5 < 0) {
        FUNC_4("open %s", VAR_4->path);
        return;
    }

    VAR_6 = FUNC_1(VAR_5, VAR_4->w->filesize);
    if (VAR_6) {
        if (FUNC_0(VAR_5) == -1)
            FUNC_4("close");
        VAR_3 = VAR_6;
        FUNC_4("falloc %s", VAR_4->path);
        VAR_6 = FUNC_5(VAR_4->path);
        if (VAR_6) {
            FUNC_4("unlink %s", VAR_4->path);
        }
        return;
    }

    VAR_7 = FUNC_6(VAR_5, &VAR_8, sizeof(int));
    if (VAR_7 < 0 || (size_t)VAR_7 < sizeof(int)) {
        FUNC_4("write %s", VAR_4->path);
        if (FUNC_0(VAR_5) == -1)
            FUNC_4("close");
        return;
    }

    VAR_4->fd = VAR_5;
    VAR_4->iswopen = 1;
    FUNC_2(VAR_4);
    VAR_4->free = VAR_4->w->filesize - VAR_7;
    VAR_4->resv = 0;
}
