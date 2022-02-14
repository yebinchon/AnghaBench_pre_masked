
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mmxctx ;
typedef int cctx ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int ** pix_abs; } ;
typedef TYPE_1__ MECmpContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,int ) ;

int FUNC_8(int VAR_4, char **VAR_5)
{
    AVCodecContext *VAR_6;
    int VAR_7;
    MECmpContext VAR_8, VAR_9;
    int VAR_10[2] = { VAR_1, VAR_2 };
    int VAR_11 = VAR_3 ? 2 : 1;

    if (VAR_4 > 1) {
        FUNC_4();
        return 1;
    }

    FUNC_6("ffmpeg motion test\n");

    VAR_6 = FUNC_2(((void*)0));
    VAR_6->flags |= VAR_0;
    FUNC_0(0);
    FUNC_5(&VAR_8, 0, sizeof(VAR_8));
    FUNC_3(&VAR_8, VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
        int VAR_12;
        FUNC_0(VAR_10[VAR_7]);
        FUNC_5(&VAR_9, 0, sizeof(VAR_9));
        FUNC_3(&VAR_9, VAR_6);

        for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
            FUNC_6("%s for %dx%d pixels\n", VAR_7 ? "mmx2" : "mmx",
                   VAR_12 ? 8 : 16, VAR_12 ? 8 : 16);
            FUNC_7("mmx", VAR_9.pix_abs[VAR_12][0], VAR_8.pix_abs[VAR_12][0]);
            FUNC_7("mmx_x2", VAR_9.pix_abs[VAR_12][1], VAR_8.pix_abs[VAR_12][1]);
            FUNC_7("mmx_y2", VAR_9.pix_abs[VAR_12][2], VAR_8.pix_abs[VAR_12][2]);
            FUNC_7("mmx_xy2", VAR_9.pix_abs[VAR_12][3], VAR_8.pix_abs[VAR_12][3]);
        }
    }
    FUNC_1(VAR_6);

    return 0;
}
