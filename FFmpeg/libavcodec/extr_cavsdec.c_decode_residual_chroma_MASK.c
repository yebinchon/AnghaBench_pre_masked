
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbp; size_t qp; int c_stride; int cv; int gb; int cu; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline int FUNC_1(AVSContext *VAR_2)
{
    if (VAR_2->cbp & (1 << 4)) {
        int VAR_3 = FUNC_0(VAR_2, &VAR_2->gb, VAR_0, 0,
                              VAR_1[VAR_2->qp], VAR_2->cu, VAR_2->c_stride);
        if (VAR_3 < 0)
            return VAR_3;
    }
    if (VAR_2->cbp & (1 << 5)) {
        int VAR_4 = FUNC_0(VAR_2, &VAR_2->gb, VAR_0, 0,
                              VAR_1[VAR_2->qp], VAR_2->cv, VAR_2->c_stride);
        if (VAR_4 < 0)
            return VAR_4;
    }
    return 0;
}
