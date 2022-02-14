
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_bits; int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_0){
    const int VAR_1= FUNC_0(&VAR_0->pb);
    const int VAR_2= VAR_0->last_bits;

    VAR_0->last_bits = VAR_1;

    return VAR_1 - VAR_2;
}
