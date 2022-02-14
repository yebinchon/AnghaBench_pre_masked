
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef enum MVJoint { ____Placeholder_MVJoint } MVJoint ;
struct TYPE_20__ {int * mv_joint; } ;
struct TYPE_21__ {TYPE_5__ counts; int c; TYPE_8__* b; TYPE_7__* s; } ;
typedef TYPE_6__ VP9TileData ;
struct TYPE_18__ {int mv_joint; } ;
struct TYPE_19__ {TYPE_3__ p; } ;
struct TYPE_16__ {scalar_t__ highprecisionmvs; } ;
struct TYPE_17__ {TYPE_1__ h; } ;
struct TYPE_22__ {TYPE_4__ prob; TYPE_2__ s; } ;
typedef TYPE_7__ VP9Context ;
struct TYPE_23__ {int * ref; scalar_t__ comp; } ;
typedef TYPE_8__ VP9Block ;
struct TYPE_24__ {int x; int y; } ;
typedef TYPE_9__ VP56mv ;


 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_6__*,TYPE_9__*,int ,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,int) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(VP9TileData *VAR_5, VP56mv *VAR_6, int VAR_7, int VAR_8)
{
    VP9Context *VAR_9 = VAR_5->s;
    VP9Block *VAR_10 = VAR_5->b;

    if (VAR_7 == VAR_3) {
        FUNC_0(VAR_6);
    } else {
        int VAR_11;


        FUNC_2(VAR_5, &VAR_6[0], VAR_10->ref[0], 0, VAR_7 == VAR_1,
                     VAR_7 == VAR_2 ? -1 : VAR_8);

        if ((VAR_7 == VAR_2 || VAR_8 == -1) &&
            !(VAR_11 = VAR_9->s.h.highprecisionmvs &&
              FUNC_1(VAR_6[0].x) < 64 && FUNC_1(VAR_6[0].y) < 64)) {
            if (VAR_6[0].y & 1) {
                if (VAR_6[0].y < 0)
                    VAR_6[0].y++;
                else
                    VAR_6[0].y--;
            }
            if (VAR_6[0].x & 1) {
                if (VAR_6[0].x < 0)
                    VAR_6[0].x++;
                else
                    VAR_6[0].x--;
            }
        }
        if (VAR_7 == VAR_2) {
            enum MVJoint VAR_12 = FUNC_4(VAR_5->c, VAR_4,
                                              VAR_9->prob.p.mv_joint);

            VAR_5->counts.mv_joint[VAR_12]++;
            if (VAR_12 >= VAR_0)
                VAR_6[0].y += FUNC_3(VAR_5, 0, VAR_11);
            if (VAR_12 & 1)
                VAR_6[0].x += FUNC_3(VAR_5, 1, VAR_11);
        }

        if (VAR_10->comp) {

            FUNC_2(VAR_5, &VAR_6[1], VAR_10->ref[1], 1, VAR_7 == VAR_1,
                         VAR_7 == VAR_2 ? -1 : VAR_8);
            if ((VAR_7 == VAR_2 || VAR_8 == -1) &&
                !(VAR_11 = VAR_9->s.h.highprecisionmvs &&
                  FUNC_1(VAR_6[1].x) < 64 && FUNC_1(VAR_6[1].y) < 64)) {
                if (VAR_6[1].y & 1) {
                    if (VAR_6[1].y < 0)
                        VAR_6[1].y++;
                    else
                        VAR_6[1].y--;
                }
                if (VAR_6[1].x & 1) {
                    if (VAR_6[1].x < 0)
                        VAR_6[1].x++;
                    else
                        VAR_6[1].x--;
                }
            }
            if (VAR_7 == VAR_2) {
                enum MVJoint VAR_13 = FUNC_4(VAR_5->c, VAR_4,
                                                  VAR_9->prob.p.mv_joint);

                VAR_5->counts.mv_joint[VAR_13]++;
                if (VAR_13 >= VAR_0)
                    VAR_6[1].y += FUNC_3(VAR_5, 0, VAR_11);
                if (VAR_13 & 1)
                    VAR_6[1].x += FUNC_3(VAR_5, 1, VAR_11);
            }
        }
    }
}
