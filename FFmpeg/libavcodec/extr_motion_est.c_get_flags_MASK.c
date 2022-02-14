
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* avctx; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ MotionEstContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(MotionEstContext *VAR_4, int VAR_5, int VAR_6){
    return ((VAR_4->avctx->flags&VAR_0) ? VAR_3 : 0)
           + (VAR_5 ? VAR_2 : 0)
           + (VAR_6 ? VAR_1 : 0);
}
