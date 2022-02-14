
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_18__ {TYPE_4__* progress; } ;
struct TYPE_19__ {TYPE_5__ tf; } ;
struct TYPE_22__ {int picture_structure; TYPE_6__ cur_pic; } ;
struct TYPE_21__ {int reference; TYPE_3__* parent; } ;
struct TYPE_20__ {int mb_y; int** ref_cache; TYPE_8__** ref_list; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_1__* progress; } ;
struct TYPE_16__ {TYPE_2__ tf; } ;
struct TYPE_14__ {scalar_t__ data; } ;
typedef TYPE_7__ H264SliceContext ;
typedef TYPE_8__ H264Ref ;
typedef TYPE_9__ H264Context ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,int,int,int,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static inline void FUNC_3(const H264Context *VAR_1, H264SliceContext *VAR_2,
                                     int16_t VAR_3[2][48], int VAR_4,
                                     int VAR_5, int VAR_6, int VAR_7,
                                     int VAR_8, int *VAR_9)
{
    int VAR_10;

    VAR_6 += 16 * (VAR_2->mb_y >> FUNC_1(VAR_2));

    if (VAR_7) {
        int VAR_11 = VAR_2->ref_cache[0][VAR_0[VAR_4]];
        H264Ref *VAR_12 = &VAR_2->ref_list[0][VAR_11];




        if (VAR_12->parent->tf.progress->data != VAR_1->cur_pic.tf.progress->data ||
            (VAR_12->reference & 3) != VAR_1->picture_structure) {
            VAR_10 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, 0);
            if (VAR_3[0][VAR_11] < 0)
                VAR_9[0] += 1;
            VAR_3[0][VAR_11] = FUNC_0(VAR_3[0][VAR_11], VAR_10);
        }
    }

    if (VAR_8) {
        int VAR_13 = VAR_2->ref_cache[1][VAR_0[VAR_4]];
        H264Ref *VAR_14 = &VAR_2->ref_list[1][VAR_13];

        if (VAR_14->parent->tf.progress->data != VAR_1->cur_pic.tf.progress->data ||
            (VAR_14->reference & 3) != VAR_1->picture_structure) {
            VAR_10 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, 1);
            if (VAR_3[1][VAR_13] < 0)
                VAR_9[1] += 1;
            VAR_3[1][VAR_13] = FUNC_0(VAR_3[1][VAR_13], VAR_10);
        }
    }
}
