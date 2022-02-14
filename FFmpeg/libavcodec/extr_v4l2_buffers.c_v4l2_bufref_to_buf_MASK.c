
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {unsigned int bytesused; unsigned int length; int type; } ;
struct TYPE_9__ {int num_planes; TYPE_3__ buf; TYPE_2__* planes; TYPE_1__* plane_info; } ;
typedef TYPE_4__ V4L2Buffer ;
struct TYPE_7__ {unsigned int bytesused; unsigned int length; } ;
struct TYPE_6__ {unsigned int length; scalar_t__ mm_addr; } ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(V4L2Buffer *VAR_1, int VAR_2, const uint8_t* VAR_3, int VAR_4, int VAR_5, AVBufferRef* VAR_6)
{
    unsigned int VAR_7, VAR_8;

    if (VAR_2 >= VAR_1->num_planes)
        return FUNC_0(VAR_0);

    VAR_8 = VAR_1->plane_info[VAR_2].length;
    VAR_7 = FUNC_1(VAR_4+VAR_5, VAR_8);

    FUNC_3((uint8_t*)VAR_1->plane_info[VAR_2].mm_addr+VAR_5, VAR_3, FUNC_1(VAR_4, VAR_8-VAR_5));

    if (FUNC_2(VAR_1->buf.type)) {
        VAR_1->planes[VAR_2].bytesused = VAR_7;
        VAR_1->planes[VAR_2].length = VAR_8;
    } else {
        VAR_1->buf.bytesused = VAR_7;
        VAR_1->buf.length = VAR_8;
    }

    return 0;
}
