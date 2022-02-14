
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int refs ;
typedef int int16_t ;
struct TYPE_12__ {int* mb_type; } ;
struct TYPE_16__ {int mb_height; TYPE_1__ cur_pic; } ;
struct TYPE_15__ {int reference; TYPE_2__* parent; } ;
struct TYPE_14__ {int mb_xy; int* sub_mb_type; int list_count; TYPE_4__** ref_list; } ;
struct TYPE_13__ {int field_picture; int reference; int tf; } ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Ref ;
typedef TYPE_5__ H264Context ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_5__ const*) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const,int,int) ;
 int FUNC_7 (int const) ;
 scalar_t__ FUNC_8 (int const) ;
 scalar_t__ FUNC_9 (int const) ;
 scalar_t__ FUNC_10 (int const) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (TYPE_5__ const*,TYPE_3__*,int**,int const,int,int,int ,int ,int*) ;
 int FUNC_15 (int**,int,int) ;

__attribute__((used)) static void FUNC_16(const H264Context *VAR_0, H264SliceContext *VAR_1)
{
    const int VAR_2 = VAR_1->mb_xy;
    const int VAR_3 = VAR_0->cur_pic.mb_type[VAR_2];
    int16_t VAR_4[2][48];
    int VAR_5[2] = { 0 };
    int VAR_6, VAR_7;

    FUNC_15(VAR_4, -1, sizeof(VAR_4));

    if (FUNC_2(VAR_3)) {
        FUNC_14(VAR_0, VAR_1, VAR_4, 0, 16, 0,
                          FUNC_6(VAR_3, 0, 0), FUNC_6(VAR_3, 0, 1), VAR_5);
    } else if (FUNC_3(VAR_3)) {
        FUNC_14(VAR_0, VAR_1, VAR_4, 0, 8, 0,
                          FUNC_6(VAR_3, 0, 0), FUNC_6(VAR_3, 0, 1), VAR_5);
        FUNC_14(VAR_0, VAR_1, VAR_4, 8, 8, 8,
                          FUNC_6(VAR_3, 1, 0), FUNC_6(VAR_3, 1, 1), VAR_5);
    } else if (FUNC_4(VAR_3)) {
        FUNC_14(VAR_0, VAR_1, VAR_4, 0, 16, 0,
                          FUNC_6(VAR_3, 0, 0), FUNC_6(VAR_3, 0, 1), VAR_5);
        FUNC_14(VAR_0, VAR_1, VAR_4, 4, 16, 0,
                          FUNC_6(VAR_3, 1, 0), FUNC_6(VAR_3, 1, 1), VAR_5);
    } else {
        int VAR_8;

        FUNC_12(FUNC_5(VAR_3));

        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            const int VAR_9 = VAR_1->sub_mb_type[VAR_8];
            const int VAR_10 = 4 * VAR_8;
            int VAR_11 = (VAR_8 & 2) << 2;

            if (FUNC_10(VAR_9)) {
                FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10, 8, VAR_11,
                                  FUNC_6(VAR_9, 0, 0),
                                  FUNC_6(VAR_9, 0, 1),
                                  VAR_5);
            } else if (FUNC_9(VAR_9)) {
                FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10, 4, VAR_11,
                                  FUNC_6(VAR_9, 0, 0),
                                  FUNC_6(VAR_9, 0, 1),
                                  VAR_5);
                FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10 + 2, 4, VAR_11 + 4,
                                  FUNC_6(VAR_9, 0, 0),
                                  FUNC_6(VAR_9, 0, 1),
                                  VAR_5);
            } else if (FUNC_8(VAR_9)) {
                FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10, 8, VAR_11,
                                  FUNC_6(VAR_9, 0, 0),
                                  FUNC_6(VAR_9, 0, 1),
                                  VAR_5);
                FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10 + 1, 8, VAR_11,
                                  FUNC_6(VAR_9, 0, 0),
                                  FUNC_6(VAR_9, 0, 1),
                                  VAR_5);
            } else {
                int VAR_12;
                FUNC_12(FUNC_7(VAR_9));
                for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
                    int VAR_13 = VAR_11 + 2 * (VAR_12 & 2);
                    FUNC_14(VAR_0, VAR_1, VAR_4, VAR_10 + VAR_12, 4, VAR_13,
                                      FUNC_6(VAR_9, 0, 0),
                                      FUNC_6(VAR_9, 0, 1),
                                      VAR_5);
                }
            }
        }
    }

    for (VAR_7 = VAR_1->list_count - 1; VAR_7 >= 0; VAR_7--)
        for (VAR_6 = 0; VAR_6 < 48 && VAR_5[VAR_7]; VAR_6++) {
            int VAR_14 = VAR_4[VAR_7][VAR_6];
            if (VAR_14 >= 0) {
                H264Ref *VAR_15 = &VAR_1->ref_list[VAR_7][VAR_6];
                int VAR_16 = VAR_15->reference - 1;
                int VAR_17 = VAR_15->parent->field_picture;
                int VAR_18 = 16 * VAR_0->mb_height >> VAR_17;

                VAR_14 <<= FUNC_11(VAR_1);
                VAR_5[VAR_7]--;

                if (!FUNC_1(VAR_0) && VAR_17) {
                    FUNC_12((VAR_15->parent->reference & 3) == 3);
                    FUNC_13(&VAR_15->parent->tf,
                                             FUNC_0((VAR_14 >> 1) - !(VAR_14 & 1),
                                                   VAR_18 - 1),
                                             1);
                    FUNC_13(&VAR_15->parent->tf,
                                             FUNC_0((VAR_14 >> 1), VAR_18 - 1),
                                             0);
                } else if (FUNC_1(VAR_0) && !VAR_17) {
                    FUNC_13(&VAR_15->parent->tf,
                                             FUNC_0(VAR_14 * 2 + VAR_16,
                                                   VAR_18 - 1),
                                             0);
                } else if (FUNC_1(VAR_0)) {
                    FUNC_13(&VAR_15->parent->tf,
                                             FUNC_0(VAR_14, VAR_18 - 1),
                                             VAR_16);
                } else {
                    FUNC_13(&VAR_15->parent->tf,
                                             FUNC_0(VAR_14, VAR_18 - 1),
                                             0);
                }
            }
        }
}
