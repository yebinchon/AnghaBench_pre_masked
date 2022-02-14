
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_23__ {int bytesperline; } ;
struct TYPE_22__ {TYPE_1__* plane_fmt; } ;
struct TYPE_24__ {TYPE_3__ pix; TYPE_2__ pix_mp; } ;
struct TYPE_25__ {TYPE_4__ fmt; } ;
struct TYPE_17__ {int type; TYPE_5__ format; } ;
typedef TYPE_10__ V4L2Context ;
struct TYPE_28__ {TYPE_9__* planes; int offset; } ;
struct TYPE_19__ {int index; int length; int bytesused; TYPE_8__ m; int type; int memory; } ;
struct TYPE_18__ {int num_planes; TYPE_9__* planes; TYPE_12__ buf; int status; TYPE_7__* plane_info; TYPE_10__* context; } ;
typedef TYPE_11__ V4L2Buffer ;
struct TYPE_26__ {int mem_offset; } ;
struct TYPE_29__ {int length; int bytesused; TYPE_6__ m; } ;
struct TYPE_27__ {int length; scalar_t__ mm_addr; int bytesperline; } ;
struct TYPE_21__ {int bytesperline; } ;
struct TYPE_20__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_15__* FUNC_3 (TYPE_11__*) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (int ,int ,TYPE_12__*) ;
 void* FUNC_6 (int *,int,int,int ,int ,int ) ;

int FUNC_7(V4L2Buffer* VAR_10, int VAR_11)
{
    V4L2Context *VAR_12 = VAR_10->context;
    int VAR_13, VAR_14;

    VAR_10->buf.memory = VAR_6;
    VAR_10->buf.type = VAR_12->type;
    VAR_10->buf.index = VAR_11;

    if (FUNC_1(VAR_12->type)) {
        VAR_10->buf.length = VAR_7;
        VAR_10->buf.m.planes = VAR_10->planes;
    }

    VAR_13 = FUNC_5(FUNC_3(VAR_10)->fd, VAR_8, &VAR_10->buf);
    if (VAR_13 < 0)
        return FUNC_0(VAR_9);

    if (FUNC_1(VAR_12->type)) {
        VAR_10->num_planes = 0;

        for (VAR_14 = 0; VAR_14 < VAR_10->buf.length; VAR_14++) {
            if (VAR_10->buf.m.planes[VAR_14].length)
                VAR_10->num_planes++;
        }
    } else
        VAR_10->num_planes = 1;

    for (VAR_14 = 0; VAR_14 < VAR_10->num_planes; VAR_14++) {

        VAR_10->plane_info[VAR_14].bytesperline = FUNC_1(VAR_12->type) ?
            VAR_12->format.fmt.pix_mp.plane_fmt[VAR_14].bytesperline :
            VAR_12->format.fmt.pix.bytesperline;

        if (FUNC_1(VAR_12->type)) {
            VAR_10->plane_info[VAR_14].length = VAR_10->buf.m.planes[VAR_14].length;
            VAR_10->plane_info[VAR_14].mm_addr = FUNC_6(((void*)0), VAR_10->buf.m.planes[VAR_14].length,
                                           VAR_3 | VAR_4, VAR_2,
                                           FUNC_3(VAR_10)->fd, VAR_10->buf.m.planes[VAR_14].m.mem_offset);
        } else {
            VAR_10->plane_info[VAR_14].length = VAR_10->buf.length;
            VAR_10->plane_info[VAR_14].mm_addr = FUNC_6(((void*)0), VAR_10->buf.length,
                                          VAR_3 | VAR_4, VAR_2,
                                          FUNC_3(VAR_10)->fd, VAR_10->buf.m.offset);
        }

        if (VAR_10->plane_info[VAR_14].mm_addr == VAR_1)
            return FUNC_0(VAR_0);
    }

    VAR_10->status = VAR_5;

    if (FUNC_2(VAR_12->type))
        return 0;

    if (FUNC_1(VAR_12->type)) {
        VAR_10->buf.m.planes = VAR_10->planes;
        VAR_10->buf.length = VAR_10->num_planes;

    } else {
        VAR_10->buf.bytesused = VAR_10->planes[0].bytesused;
        VAR_10->buf.length = VAR_10->planes[0].length;
    }

    return FUNC_4(VAR_10);
}
