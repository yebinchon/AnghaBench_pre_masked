
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {TYPE_3__* h264; TYPE_2__** ref_list; } ;
struct TYPE_8__ {int avctx; } ;
struct TYPE_7__ {int poc; TYPE_1__* parent; } ;
struct TYPE_6__ {scalar_t__ long_ref; } ;
typedef TYPE_4__ H264SliceContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(H264SliceContext *VAR_1,
                            int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_1->ref_list[0][VAR_4].poc;
    int64_t VAR_6 = VAR_3 - (int64_t)VAR_5;
    int VAR_7 = FUNC_1(VAR_6);

    if (VAR_6 != (int)VAR_6)
        FUNC_4(VAR_1->h264->avctx, "pocdiff overflow\n");

    if (VAR_7 == 0 || VAR_1->ref_list[0][VAR_4].parent->long_ref) {
        return 256;
    } else {
        int64_t VAR_8 = VAR_2 - (int64_t)VAR_5;
        int VAR_9 = FUNC_1(VAR_8);
        int VAR_10 = (16384 + (FUNC_0(VAR_7) >> 1)) / VAR_7;

        if (VAR_8 != (int)VAR_8)
            FUNC_3(VAR_1->h264->avctx, VAR_0, "pocdiff0 overflow\n");

        return FUNC_2((VAR_9 * VAR_10 + 32) >> 6, 10);
    }
}
