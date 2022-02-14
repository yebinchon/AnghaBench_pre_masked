
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_5__ {int * buf; } ;
typedef TYPE_2__ Picture ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, Picture *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_4) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            if (!VAR_3[VAR_5].f->buf[0])
                return VAR_5;
        }
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            if (FUNC_2(&VAR_3[VAR_5]))
                return VAR_5;
        }
    }

    FUNC_1(VAR_2, VAR_0,
           "Internal error, picture buffer overflow\n");
    FUNC_0();
    return -1;
}
