
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pb; TYPE_1__* avctx; } ;
struct TYPE_4__ {int flags2; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext * VAR_1, int VAR_2, int VAR_3, int VAR_4){
    if (VAR_1->avctx->flags2 & VAR_0) {
        FUNC_2(&VAR_1->pb,
            FUNC_1(VAR_2, VAR_4)
           +FUNC_1(VAR_3, VAR_4));
    }else{
        FUNC_0(&VAR_1->pb, VAR_2, VAR_4);
        FUNC_0(&VAR_1->pb, VAR_3, VAR_4);
    }
}
