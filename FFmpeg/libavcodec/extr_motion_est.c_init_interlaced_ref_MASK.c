
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__** src; scalar_t__** ref; } ;
struct TYPE_4__ {scalar_t__ uvlinesize; scalar_t__ linesize; TYPE_2__ me; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ MotionEstContext ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(MpegEncContext *VAR_1, int VAR_2){
    MotionEstContext * const VAR_3= &VAR_1->me;

    VAR_3->ref[1+VAR_2][0] = VAR_3->ref[0+VAR_2][0] + VAR_1->linesize;
    VAR_3->src[1][0] = VAR_3->src[0][0] + VAR_1->linesize;
    if(VAR_3->flags & VAR_0){
        VAR_3->ref[1+VAR_2][1] = VAR_3->ref[0+VAR_2][1] + VAR_1->uvlinesize;
        VAR_3->ref[1+VAR_2][2] = VAR_3->ref[0+VAR_2][2] + VAR_1->uvlinesize;
        VAR_3->src[1][1] = VAR_3->src[0][1] + VAR_1->uvlinesize;
        VAR_3->src[1][2] = VAR_3->src[0][2] + VAR_1->uvlinesize;
    }
}
