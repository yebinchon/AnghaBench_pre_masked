
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int resv; TYPE_1__* w; int fd; } ;
struct TYPE_7__ {int walresv; int walused; } ;
struct TYPE_6__ {int resv; int alive; } ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ File ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*,int) ;

__attribute__((used)) static int
FUNC_2(File *VAR_0, Job *VAR_1, void *VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_1(VAR_0->fd, VAR_2, VAR_3);
    if (VAR_4 != VAR_3) {
        FUNC_0("write");
        return 0;
    }

    VAR_0->w->resv -= VAR_4;
    VAR_0->resv -= VAR_4;
    VAR_1->walresv -= VAR_4;
    VAR_1->walused += VAR_4;
    VAR_0->w->alive += VAR_4;
    return 1;
}
