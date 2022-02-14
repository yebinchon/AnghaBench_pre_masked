
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iswopen; int fd; scalar_t__ free; TYPE_1__* w; } ;
struct TYPE_5__ {scalar_t__ filesize; } ;
typedef TYPE_2__ File ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*) ;

void
FUNC_4(File *VAR_1)
{
    if (!VAR_1) return;
    if (!VAR_1->iswopen) return;
    if (VAR_1->free) {
        VAR_0 = 0;
        if (FUNC_2(VAR_1->fd, VAR_1->w->filesize - VAR_1->free) != 0) {
            FUNC_3("ftruncate");
        }
    }
    if (FUNC_0(VAR_1->fd) == -1)
        FUNC_3("close");
    VAR_1->iswopen = 0;
    FUNC_1(VAR_1);
}
